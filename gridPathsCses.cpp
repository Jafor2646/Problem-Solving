#include <iostream>
using namespace std;

bool visited[7][7];
int paths = 0, steps = 0;
int reserved[49];
 
void solved(int r, int c) {
	if (r == 6 && c == 0) {
		if (steps == 48) {
			paths++;
		}
		return;
	} 
	if (visited[r][c] || (
			((c >= 1 && c <= 5 && !visited[r][c + 1] && !visited[r][c - 1]) &&
			((r == 0 && visited[r + 1][c]) || (r == 6 && visited[r - 1][c]))) 
		||
			((r >= 1 && r <= 5 && !visited[r + 1][c] && !visited[r - 1][c]) &&
				((c == 0 && visited[r][c + 1]) || (c == 6 && visited[r][c - 1]))) 
		
		|| (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r + 1][c] 
			&& visited[r - 1][c] && !visited[r][c + 1] && !visited[r][c - 1])
 
		|| (r >= 1 && r <= 5 && c >= 1 && c <= 5 && visited[r][c + 1] && visited[r][c - 1] 
			&& !visited[r + 1][c] && !visited[r - 1][c]))){

		return;
	}
	visited[r][c] = true;
	if (reserved[steps] != -1) {
		if (reserved[steps] == 0){
			if (r > 0 && !visited[r - 1][c]) {
				steps++;
				solved(r - 1, c);
				steps--;
			}
    }else if(reserved[steps] == 1){
			if (r < 6 && !visited[r + 1][c]) {
				steps++;
				solved(r + 1, c);  
				steps--;
			}
    }else if(reserved[steps] == 2){
			if (c > 0 && !visited[r][c - 1]) {
				steps++;
				solved(r, c - 1);
				steps--;
			}
    }else if(reserved[steps] == 3){
			if (c < 6 && !visited[r][c + 1]) {
				steps++;
				solved(r, c + 1);
				steps--;
			}
    }
		visited[r][c] = false;
		return;
	}
	if (r < 6 && !visited[r + 1][c]) {
		steps++;
		solved(r + 1, c);  
		steps--;
	}
	if (r > 0 && !visited[r - 1][c]) {
		steps++;
		solved(r - 1, c); 
		steps--;
	}
	if (c > 0 && !visited[r][c - 1]) {
		steps++;
		solved(r, c - 1); 
		steps--;
	}
	if (c < 6 && !visited[r][c + 1]) {
		steps++;
		solved(r, c + 1); 
		steps--;
	}
	visited[r][c] = false;
}
 
int main() {
  string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
    if(s[i] == '?') reserved[i] = -1;
    else if(s[i] == 'U') reserved[i] = 0;
    else if(s[i] == 'D') reserved[i] = 1;
    else if(s[i] == 'L') reserved[i] = 2;
    else if(s[i] == 'R') reserved[i] = 3;
	}
	solved(0, 0);
	cout << paths << endl;
	
	return 0;
}

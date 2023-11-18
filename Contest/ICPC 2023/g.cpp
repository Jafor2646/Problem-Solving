#include<iostream>
#include<string>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int j = 0; j<t; j++){
    string s;
    cin >> s;
    long long wicket = 0;
    long long run = 0;
    for(int i =0; i<s.length();i++){
      if(s[i] == 'w' || s[i] == 'W') ++wicket;
      else run += (s[i] - '0');
    }
    int over = s.length()/6;
    int ball = s.length()%6;
    if(run <= 1){
      if(wicket <= 1){
        if(over == 0) cout << over << "." << ball << " Over " << run << " Run " << wicket << " Wicket." << endl;
        else if(over == 1){
          if(ball > 0) cout << over << "." << ball << " Overs " << run << " Run " << wicket << " Wicket." << endl;
          else cout << over << "." << ball << " Over " << run << " Run " << wicket << " Wicket." << endl;
        }else cout << over << "." << ball << " Overs " << run << " Run " << wicket << " Wicket." << endl;
      }else{
        if(over == 0) cout << over << "." << ball << " Over " << run << " Run " << wicket << "Wickets." << endl;
        else if(over == 1){
          if(ball > 0) cout << over << "." << ball << " Overs " << run << " Run " << wicket << " Wickets." << endl;
          else cout << over << "." << ball << " Over " << run << " Run " << wicket << " Wickets." << endl;
        }else cout << over << "." << ball << " Overs " << run << " Run " << wicket << " Wickets." << endl;
      }
    }else{
      if(wicket <= 1){
        if(over == 0) cout << over << "." << ball << " Over " << run << " Runs " << wicket << " Wicket." << endl;
        else if(over == 1){
          if(ball > 0) cout << over << "." << ball << " Overs " << run << " Runs " << wicket << " Wicket." << endl;
          else cout << over << "." << ball << " Over " << run << " Runs " << wicket << " Wicket." << endl;
        }else cout << over << "." << ball << " Overs " << run << " Runs " << wicket << " Wicket." << endl;
      }else{
        if(over == 0) cout << over << "." << ball << " Over " << run << " Runs " << wicket << " Wickets." << endl;
        else if(over == 1){
          if(ball > 0) cout << over << "." << ball << " Overs " << run << " Runs " << wicket << " Wickets." << endl;
          else cout << over << "." << ball << " Over " << run << " Runs " << wicket << " Wickets." << endl;
        }else cout << over << "." << ball << " Overs " << run << " Runs " << wicket << " Wickets." << endl;
      }
    }
  }
  return 0;
}
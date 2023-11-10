#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n{}, k{}, count{0}, participant{0};
    cin >> n >> k;
    vector <int> scores{};
    while(count<n){
        int temp{};
        cin >> temp;
        scores.push_back(temp);
        count++;
    }
    int low{scores[k-1]};
    for(size_t i{0}; i <= scores.size()-1; i++){
        if(scores[i] >= low && scores[i] != 0){
            participant++;
        }
    }
    cout << participant;
    return 0;
}
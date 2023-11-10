class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector <int> temp;
        vector <vector<int>> result;
        return helper(candidates, target, temp, result, 0);  
    }
    vector<vector<int>> helper(vector<int> &candidates, int target, vector<int> &temp, vector<vector<int>> &result, int index){
        if(target == 0){
            bool flag = true;
            for(int i = 0; i<result.size(); i++){
                if(result[i] == temp){
                    flag = false;
                    break;
                }
            }
            if(flag) result.push_back(temp);
            return result;
        }
        for(; index < candidates.size(); index++){
            if(target - candidates[index] < 0) return result;
            temp.push_back(candidates[index]);
            helper(candidates, target-candidates[index], temp, result, index+1);
            temp.erase(temp.begin()+(temp.size()-1));
            while (index + 1 < candidates.size() && candidates[index] == candidates[index+1]) index++;
        }
        return result;
    }
};
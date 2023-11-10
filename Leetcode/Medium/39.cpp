class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector <int> temp;
        vector <vector<int>> result;
        return helper(candidates, target, temp, result, 0);
    }
    vector<vector<int>> helper(vector<int> &candidates, int target, vector<int> &temp, vector<vector<int>> &result, int index){
        if(target == 0){
            result.push_back(temp);
            return result;
        }
        for(; index < candidates.size(); index++){
            if(target - candidates[index] < 0) return result;
            temp.push_back(candidates[index]);
            helper(candidates, target-candidates[index], temp, result, index);
            temp.erase(temp.begin()+(temp.size()-1));
        }
        return result;
    }
};
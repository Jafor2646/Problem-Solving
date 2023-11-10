class Solution {
    private void backtrack(int start, List<Integer> combination, List<List<Integer>> r, int n, int k){
        if(combination.size() == k){
            r.add(new ArrayList<>(combination));
            return;
        }
        for(int i = start; i <= n; i++){
            combination.add(i);
            backtrack(i+1,combination, r, n, k);
            combination.remove(combination.size()-1);
        }
    }
    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> result = new ArrayList<>();
        List<Integer> combination = new ArrayList<>();
        backtrack(1, combination, result, n, k);
        return result;
    }
}
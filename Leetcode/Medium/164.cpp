class Solution {
public:
    vector<int> countsort(vector<int> &nums){
        int n = nums.size();
        map<int, int> m;
        for (int i = 0; i < n; i++ )
            m[nums[i]]++;
        int idx = 0;
        for (auto it : m)
        {
            int cnt = it.second;
            while (cnt--)
            {
                nums[idx] = it.first;
                idx++;
            }
        }
        return nums;
    }

    int maximumGap(vector<int> &nums)
    {
        int n = nums.size();
        if (n < 2)
            return 0;
        vector<int> sortednums = countsort(nums);

        int maxgap = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            int currgap = sortednums[i] - sortednums[i - 1];
            maxgap = max(maxgap, currgap);
        }

        return maxgap;
    }
};
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> res, left(n), right(n);
        stack<int> st;

        for (int i=0; i<n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }

            if (st.empty()) left[i] = -1;
            else left[i] = st.top();

            st.push(i);
        }

        while (!st.empty()) st.pop();

        for (int i=n-1; i>=0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }

            if (st.empty()) right[i] = n;
            else right[i] = st.top();

            st.push(i);
        }
        for (int i=0; i<n; i++) {
            int range = min(right[i]-1, i + k - 1) - max(left[i]+1, i - k + 1) + 1;
            while (range-- >= k) res.push_back(nums[i]);
        }

        return res;
    }
};
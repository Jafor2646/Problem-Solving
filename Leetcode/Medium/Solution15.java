package Medium;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Solution15 {
  public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> ans = new ArrayList<List<Integer> >();
        if(nums.length < 3) return ans;
        Arrays.sort(nums);
        int n = nums.length;
        for(int i = 0; i < n-2; i++){
            if(i == 0 || nums[i-1] != nums[i]){
                int low = i+1, high = n-1, sum = -nums[i];
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        ans.add(Arrays.asList(nums[i], nums[low],nums[high]));
                        while(low < high && nums[low] == nums[low+1]){
                            low++;
                        }                     
                        while(low < high && nums[high] == nums[high-1]){
                            high--;
                        }  
                        low++;
                        high--;
                    }
                    else if(nums[low] + nums[high] < sum){
                        low++;
                    }
                    else{
                        high--;
                    }
                  }
            }
        }
        return ans;
    }
  
}

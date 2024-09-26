
// time complexity = O(n log(n)) + O (n*n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin() , nums.end()); // O(n log(n))
        for(int i =0 ; i<n ; i++){       // O(n)
            if(i>0 && nums[i]== nums[i-1]){
                continue;
            }
            int j = i+1 ;
            int k = n-1 ;
            while(j < k){ // near about n time , like (n-1 , n-2 , ..)
                int sum = nums[i] + nums[j] + nums[k];
                if(sum < 0){
                    j++;
                }
                else if(sum > 0){
                    k--;
                }
                else{
                    vector<int> temp ={nums[i], nums[j] , nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j-1]){
                        j++;
                    }
                    while(j < k && nums[k] == nums[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int max = nums[0];
        // vector<int> nums2;
        // for(int =)
        // for(int i = 0 ; i < nums.size() ; i++){
        //      if(nums[i] > max){
        //          max = nums[i]

        //     }
        //     nums.push_back(max);
        //     nums.erase([])
        // }
        // for(int i )
        sort(nums.begin() , nums.end());
        int n= nums.size();
        return (nums[n-k]);

    }
};

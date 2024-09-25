class Solution {
public:
    int missingNumber(vector<int>& nums) {
    // This is a good solution
    // int n = nums.size();
    //     vector<int>v(n+1,-1);
    //     for(int i =0;i<nums.size();i++){
    //         v[nums[i]] = nums[i];
    //     }
    //     for(int i =0;i<v.size();i++){
    //         if(v[i]==-1)return i;
    //     }
    //     return 0;
    // }

        sort(nums.begin() , nums.end());
        int n;
        int m= nums.size();
        for(int i = 0 ; i < m ; i++){
            if(nums[i] != i){
                n = i;
                return n;
            }
        }
        return m;
    }
};

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Doing this with the merge concept pof merge sort
        // int i = m-1 ;
        // int j = n - 1 ;
        // int k = m + n -1;

        // while(i >= 0 && j >= 0){
        //     if(nums1[i] > nums2[j]){
        //         nums1[k] = nums1[i];
        //         i--;
        //     }
        //     else{
        //         nums1[k] = nums2[j];
        //         j--;
        //     }
        //     k--;
        // }

        // while( j >= 0){
        //     nums1[k] = nums2[j];
        //     j--;
        //     k--;
        // }

        // doing in a new short technique
        int j=0;
        int k = m + n;
        for(int i=m;i<k;i++){
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};

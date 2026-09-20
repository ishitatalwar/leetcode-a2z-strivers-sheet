class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // brute force approach and better solution
        // int n = nums.size();
        // // int sum = 0; 
        // int maxi = INT_MIN;
        // for(int i = 0; i<n; i++){
        //     int sum = 0;
        //     for(int j = i; j<n; j++){
        //         sum += nums[j];
        //         maxi = max(maxi,sum);
        //         // for(int k = i; k<=j; k++){
        //         //     sum += nums[k];
        //         //     maxi = max(maxi,sum);
        //         // }
        //     }
        // }
        // return maxi;
        // optimal approach
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        for(int i =0; i<n; i++){
            sum+=nums[i];
            if(sum > maxi){
                maxi = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};
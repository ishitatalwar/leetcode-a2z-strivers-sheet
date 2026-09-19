class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // brute force approach 
        // int n = nums.size();
        // for(int i = 0; i<n; i++){
        //     int count = 0;
        //     for(int j = 0; j<n; j++){
        //         if(nums[i] == nums[j]){
        //             count++;
        //         }
        //     }
        //     if(count > (n/2)){
        //         return nums[i];
        //     }
        // }
        // return -1;

        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i = 0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second > (n/2)){
                return it.first;
            }
        }
        return -1;
        
    }
};
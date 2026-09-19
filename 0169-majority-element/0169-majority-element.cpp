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

        // int n = nums.size();
        // unordered_map<int, int> mp;
        // for(int i = 0; i<n; i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second > (n/2)){
        //         return it.first;
        //     }
        // }
        // return -1;
        // optimal approach
        int n = nums.size();
        int cnt = 0;
        int el;
        for(int i = 0; i<n; i++){
            if(cnt == 0){
                el = nums[i];
                cnt = 1;
            }
            else if(el == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1 = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == el){
                cnt1++;
            }
        }
        if(cnt1>(n/2)){
            return el;
        }
        return -1;
    }
};
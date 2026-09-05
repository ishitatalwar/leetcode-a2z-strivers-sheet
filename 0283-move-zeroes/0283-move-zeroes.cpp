class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // brute force approach 
        // step 1 : create a temp array
        vector<int> temp;
        // adding the non zero elements into the temp array
        for(int i = 0; i<nums.size();i++){
            if(nums[i] != 0){
                temp.push_back(nums[i]);
            }
        }
        int nz = temp.size();
        for(int i = 0; i<nz; i++){
            nums[i] = temp[i];
        }
        for(int i = nz; i<nums.size(); i++){
            nums[i] = 0;
        }

        
    }
};
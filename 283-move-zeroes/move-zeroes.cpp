class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i =0;
        int j=1;
        int n = nums.size();
        for(j=1; j<n;j++){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
            }
            if(nums[i]!=0 && nums[j]==0){
                i++;

            }
            if(nums[i]==0 && nums[j]==0){

            }
            if(nums[i]!= 0 && nums[j]!= 0){
                i++;
            }
        }
        return ;
    }
};
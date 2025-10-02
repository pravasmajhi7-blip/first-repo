class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int leftsum=0;
        int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];  }
        int rightsum=sum;
    for(int i=0;i<nums.size();i++){
        rightsum-=nums[i];
    if(leftsum==rightsum){
        return i; }
        leftsum+=nums[i];  }
        return -1;
    }
};
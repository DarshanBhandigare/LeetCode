class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int val: nums){
            int f = 0;
            for(int el: nums){
                if(el == val){
                    f++;
                }
            }
            if(f > (n/2)){
                return val;
            }
        
        
        }
        return -1;
    }

};
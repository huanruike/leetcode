class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> id;
        for(int i=0;i<nums.size();i++){
            if(id[target-nums[i]]){
                vector<int> res;
                res.push_back(id[target-nums[i]]-1);
                res.push_back(i);
                return res;
            }
            if(!id[nums[i]]) id[nums[i]]=i+1;
        }
    }
};

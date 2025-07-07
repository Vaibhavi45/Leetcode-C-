class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v;//vector to store output
        int sq=0;//var to store squares
        for(int i=0;i<nums.size();i++){
            sq=nums[i]*nums[i];
            v.push_back(sq);// squares inserted in vector
            
        }
        sort(v.begin(),v.end());//sorted
        return v;

        
    }
};

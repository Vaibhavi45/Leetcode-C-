class Solution {
public:
    int findLucky(vector<int>& arr) {
        int lucky=-1;
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;//to store frequency
        }
  for(auto p:mp){

  
            if(p.second==p.first){    //if value == freq 
                lucky=max(lucky,p.first);//find maximum(largest) number
            }
  }
        
        return lucky;
        
    }
};

class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n = bits.size();
        for(int j = 0; j < n; ++j) {
            if(bits[j] && ++j == n - 1) return false;
        }
        return true;
    }
};

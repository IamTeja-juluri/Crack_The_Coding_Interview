class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        
        int n=grades.size();
        int ans=floor((sqrt(1+8*n)-1)/2);
        return ans;
	
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if((int)s.size()==0) return 0;
        bool has[400];
        memset(has,0,sizeof(has));
        int j=0;
        int res=1;
        for(int i=0;i<s.size();i++){
            j=max(j,i+1);
            has[s[i]]=1;
            while(j<(int)s.size()&&!has[s[j]]) has[s[j++]]=1;
            res=max(res,j-i);
            has[s[i]]=0;
        }
        return res;
    }
};

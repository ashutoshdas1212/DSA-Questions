class Solution
{
public:
    int lcs(string s1, string s2)
    {
        if(s1.length()==0 || s2.length()==0)
        {
            return 0;
        }
        if(s1[0]==s2[0])
        {
            return lcs(s1.substr(1),s2.substr(1));
        }
        int a=lcs(s1.substr(1),s2);
        int b=lcs(s1,s2.substr(1));
        
        return max(a,b);
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        return lcs(text1, text2);
    }
};
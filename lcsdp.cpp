class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.size();
        int n = text2.size();
        int **output = new int *[m];
        for (int i = 0; i <= m; i++)
        {
            output[i][0] = 0;
        }
        for (int i = 0; i <= n; i++)
        {
            output[0][i] = 0;
        }

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                
            }
        }

        return lcs(text1, text2, output);
    }
};
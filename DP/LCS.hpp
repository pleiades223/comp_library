#pragma once
#include<vector>
/**
 * 最長共通部分列
 * O( |A| x |B| )
*/
template <typename T>
int LCS(T a,T b){
    std::vector<std::vector<int>> dp(a.size()+1,std::vector<int>(b.size()+1,0));
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            dp[i+1][j+1]=std::max(dp[i+1][j],dp[i][j+1]);
            if(a[i]==b[j]){
                dp[i+1][j+1]=std::max(dp[i+1][j+1],dp[i][j]+1);
            }
        }
    }
    return dp[a.size()][b.size()];
}

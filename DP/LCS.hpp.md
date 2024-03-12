---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/LCS.test.cpp
    title: verify/LCS.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"DP/LCS.hpp\"\n#include<vector>\n/**\n * \u6700\u9577\u5171\
    \u901A\u90E8\u5206\u5217\n * O( |A| x |B| )\n*/\ntemplate <typename T>\nint LCS(T\
    \ a,T b){\n    std::vector<std::vector<int>> dp(a.size()+1,std::vector<int>(b.size()+1,0));\n\
    \    for(int i=0;i<a.size();i++){\n        for(int j=0;j<b.size();j++){\n    \
    \        dp[i+1][j+1]=std::max(dp[i+1][j],dp[i][j+1]);\n            if(a[i]==b[j]){\n\
    \                dp[i+1][j+1]=std::max(dp[i+1][j+1],dp[i][j]+1);\n           \
    \ }\n        }\n    }\n    return dp[a.size()][b.size()];\n}\n"
  code: "#pragma once\n#include<vector>\n/**\n * \u6700\u9577\u5171\u901A\u90E8\u5206\
    \u5217\n * O( |A| x |B| )\n*/\ntemplate <typename T>\nint LCS(T a,T b){\n    std::vector<std::vector<int>>\
    \ dp(a.size()+1,std::vector<int>(b.size()+1,0));\n    for(int i=0;i<a.size();i++){\n\
    \        for(int j=0;j<b.size();j++){\n            dp[i+1][j+1]=std::max(dp[i+1][j],dp[i][j+1]);\n\
    \            if(a[i]==b[j]){\n                dp[i+1][j+1]=std::max(dp[i+1][j+1],dp[i][j]+1);\n\
    \            }\n        }\n    }\n    return dp[a.size()][b.size()];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: DP/LCS.hpp
  requiredBy: []
  timestamp: '2024-03-12 16:20:16+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/LCS.test.cpp
documentation_of: DP/LCS.hpp
layout: document
title: "LCS(\u6700\u9577\u5171\u901A\u90E8\u5206\u5217)"
---
## 計算量
O(|a|x|b|)
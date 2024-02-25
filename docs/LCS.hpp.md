---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"docs/LCS.hpp\"\n/*\n\u6700\u9577\u5171\u901A\u90E8\u5206\
    \u5217\nO( |A| x |B| )\n*/\n\n#include<vector>\n\ntemplate <typename T>\nint LCS(T\
    \ a,T b){\n    std::vector<std::vector<int>> dp(a.size()+1,std::vector<int>(b.size()+1,0));\n\
    \    for(int i=0;i<a.size();i++){\n        for(int j=0;j<b.size();j++){\n    \
    \        dp[i+1][j+1]=std::max(dp[i+1][j],dp[i][j+1]);\n            if(a[i]==b[j]){\n\
    \                dp[i+1][j+1]=std::max(dp[i+1][j+1],dp[i][j]+1);\n           \
    \ }\n        }\n    }\n    return dp[a.size()][b.size()];\n}\n"
  code: "#pragma once\n/*\n\u6700\u9577\u5171\u901A\u90E8\u5206\u5217\nO( |A| x |B|\
    \ )\n*/\n\n#include<vector>\n\ntemplate <typename T>\nint LCS(T a,T b){\n    std::vector<std::vector<int>>\
    \ dp(a.size()+1,std::vector<int>(b.size()+1,0));\n    for(int i=0;i<a.size();i++){\n\
    \        for(int j=0;j<b.size();j++){\n            dp[i+1][j+1]=std::max(dp[i+1][j],dp[i][j+1]);\n\
    \            if(a[i]==b[j]){\n                dp[i+1][j+1]=std::max(dp[i+1][j+1],dp[i][j]+1);\n\
    \            }\n        }\n    }\n    return dp[a.size()][b.size()];\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: docs/LCS.hpp
  requiredBy: []
  timestamp: '2024-02-26 00:34:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: docs/LCS.hpp
layout: document
redirect_from:
- /library/docs/LCS.hpp
- /library/docs/LCS.hpp.html
title: docs/LCS.hpp
---

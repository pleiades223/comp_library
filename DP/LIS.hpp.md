---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify/LIS.test.cpp
    title: verify/LIS.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"DP/LIS.hpp\"\n/*\n\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\
    \nO( N log N )\n*/\n#include<vector>\n\ntemplate<typename T>\nstd::vector<int>\
    \ LIS(std::vector<T> &vec){\n    std::vector<int> ans;\n    ans.reserve((int)vec.size());\n\
    \    for(int i=0;i<vec.size();i++){\n        auto itr = std::lower_bound(ans.begin(),ans.end(),vec[i]);\n\
    \        if(itr==ans.end())ans.push_back(vec[i]);\n        else *itr=vec[i];\n\
    \    }\n    return ans;\n}\n"
  code: "#pragma once\n/*\n\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217\nO( N log N\
    \ )\n*/\n#include<vector>\n\ntemplate<typename T>\nstd::vector<int> LIS(std::vector<T>\
    \ &vec){\n    std::vector<int> ans;\n    ans.reserve((int)vec.size());\n    for(int\
    \ i=0;i<vec.size();i++){\n        auto itr = std::lower_bound(ans.begin(),ans.end(),vec[i]);\n\
    \        if(itr==ans.end())ans.push_back(vec[i]);\n        else *itr=vec[i];\n\
    \    }\n    return ans;\n}"
  dependsOn: []
  isVerificationFile: false
  path: DP/LIS.hpp
  requiredBy: []
  timestamp: '2024-02-25 22:18:52+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify/LIS.test.cpp
documentation_of: DP/LIS.hpp
layout: document
redirect_from:
- /library/DP/LIS.hpp
- /library/DP/LIS.hpp.html
title: DP/LIS.hpp
---
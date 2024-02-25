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
  bundledCode: "#line 2 \"docs/LIS.hpp\"\n/*\n\u6700\u9577\u5897\u52A0\u90E8\u5206\
    \u5217\nO( N log N )\n*/\n#include<vector>\n\ntemplate<typename T>\nstd::vector<int>\
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
  path: docs/LIS.hpp
  requiredBy: []
  timestamp: '2024-02-26 00:34:17+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: docs/LIS.hpp
layout: document
redirect_from:
- /library/docs/LIS.hpp
- /library/docs/LIS.hpp.html
title: docs/LIS.hpp
---

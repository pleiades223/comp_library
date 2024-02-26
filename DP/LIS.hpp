#pragma once
#include<vector>
/**
* 最長増加部分列
* O( N log N )
*/
template<typename T>
std::vector<int> LIS(std::vector<T> &vec){
    std::vector<int> ans;
    ans.reserve((int)vec.size());
    for(int i=0;i<vec.size();i++){
        auto itr = std::lower_bound(ans.begin(),ans.end(),vec[i]);
        if(itr==ans.end())ans.push_back(vec[i]);
        else *itr=vec[i];
    }
    return ans;
}
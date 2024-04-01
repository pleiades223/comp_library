#pragma once
#include <string>
#include <vector>

/**
 * res[i][c] := i 文字目以降で最初に文字 c が登場する index (存在しないときは n)
*/
std::vector<std::vector<int> > string_next(const std::string &S) {
    int n = (int)S.size();
    std::vector<std::vector<int> > res(n+1, std::vector<int>(26, n));
    for (int i = n-1; i >= 0; --i) {
        for (int j = 0; j < 26; ++j) res[i][j] = res[i+1][j];
        res[i][S[i]-'a'] = i;
    }
    return res;
}
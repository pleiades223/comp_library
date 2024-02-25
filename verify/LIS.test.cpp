#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D"
#include <iostream>
#include <vector>
#include <DP/LIS.hpp>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    std::cout << LIS(a).size() << std::endl;
}
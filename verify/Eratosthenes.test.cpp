#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"
#include <iostream>
#include <vector>
#include <math/Eratosthenes.hpp>

int main(){
    int n,a,b;
    std::cin >> n >> a >> b;
    std::vector<bool>isprime = Eratosthenes(n);
    std::vector<int> vec,ans;
    for(int i=0;i<=n;i++){
        if(isprime[i])vec.push_back(i);
    }
    for(int i=b;i<vec.size();i+=a){
        ans.push_back(vec[i]);
    }
    std::cout << vec.size() << " " << ans.size() << std::endl;
    for(int i=0;i<ans.size();i++){
        std::cout << ans[i] << ((i==ans.size()-1) ? "\n" : " ");
    }
}
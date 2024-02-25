#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C"
using namespace std;
#include <string>
#include <iostream>
#include <DP/LCS.hpp>

int main(){
    int q;
    cin >> q;
    while(q--){
        string X,Y;
        cin >> X >> Y;
        cout << LCS(X,Y) << endl;
    }
}
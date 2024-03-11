---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: template/include.hpp
    title: template/include.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template/template.hpp\"\n#if __INCLUDE_LEVEL__ == 0\n#include\
    \ __FILE__\n\n//using mint = modint1000000007;\n//using mint = modint998244353;\n\
    \nint main(){\n    \n}\n\n#else\n\n#if __has_include(<template/include.hpp>)\n\
    #include <template/include.hpp>\n#else\n#include<bits/stdc++.h>\n#if __has_include(<atcoder/all>)\n\
    #include<atcoder/all>\n#endif\n#endif\n\n#pragma GCC target(\"avx2\")\n#pragma\
    \ GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\nusing namespace\
    \ std;\n\n#if __has_include(<atcoder/all>)\nusing namespace atcoder;\nvoid output(modint1000000007\
    \ x){cout << x.val();}\nvoid output(modint998244353 x){cout << x.val();}\nvoid\
    \ debug_out(modint1000000007 x){cerr << x.val();}\nvoid debug_out(modint998244353\
    \ x){cerr << x.val();}\n#endif\n\n#ifdef LOCAL\n#define debug(...) {cerr << \"\
    \\033[1;31mxxxxxxxxxx\" << \"\\033[1;35mdebug\" << \"\\033[1;31mxxxxxxxxxx\" <<\
    \ \"\\033[1;32mline:\" << __LINE__ << endl; debug_func(0, #__VA_ARGS__, __VA_ARGS__);}\n\
    void debug_out(long long x){if(x==1152921504606846976)cerr << \"llinf\"; else\
    \ cerr << x;}\ntemplate<typename T>void debug_out(T x){cerr << x;}\ntemplate<typename\
    \ T>void debug_tmp(T x);\ntemplate<typename T,typename Y>void debug_out(pair<T,Y>x){cerr<<\"\
    < \";debug_tmp(x.first);cerr << \" , \";debug_tmp(x.second);cerr << \" >\";}\n\
    template<typename T>void debug_out(vector<T>x){long long cnt=0;for(auto &i:x){cnt++;debug_out(i);if(cnt!=(long\
    \ long)x.size())cerr << ' ';}}\ntemplate<typename T>void debug_out(vector<vector<T>>x){cerr\
    \ << endl;long long cnt=0;for(auto &i:x){cnt++;debug_out(i);if(cnt!=(long long)x.size())cerr\
    \ << endl;}}\ntemplate<typename T>void debug_tmp(T x){debug_out(x);}\ntemplate<typename\
    \ T>void debug_map(T x){cerr << endl;long long cnt=0;for(auto &t:x){cnt++;cerr\
    \ << \"Key:\";debug_out(t.first);cerr << \" Val:\";debug_out(t.second);if(cnt!=(long\
    \ long)x.size())cerr << endl;}}\ntemplate<typename T>void debug_set(T x){long\
    \ long cnt=0;for(auto &t:x){cnt++;debug_out(t);if(cnt!=(long long)x.size())cerr\
    \ << \" \";}}\ntemplate<typename T>void debug_out(queue<T>x){while(!x.empty()){auto\
    \ t=x.front();x.pop();debug_out(t);if(!x.empty())cerr << \" \";}}\ntemplate<typename\
    \ T>void debug_out(priority_queue<T>x){while(!x.empty()){auto t=x.top();x.pop();debug_out(t);if(!x.empty())cerr\
    \ << \" \";}}\ntemplate<typename T>void debug_out(priority_queue<T,vector<T>,greater<T>>x){while(!x.empty()){auto\
    \ t=x.top();x.pop();debug_out(t);if(!x.empty())cerr << \" \";}}\ntemplate<typename\
    \ T,typename Y>void debug_out(map<T,Y>x){debug_map(x);}\ntemplate<typename T,typename\
    \ Y>void debug_out(unordered_map<T,Y>x){debug_map(x);}\ntemplate<typename T>void\
    \ debug_out(set<T>x){debug_set(x);}\ntemplate<typename T>void debug_out(unordered_set<T>x){debug_set(x);}\n\
    template<typename T>void debug_out(multiset<T>x){debug_set(x);}\ntemplate<typename\
    \ T> void debug_func(int _,T name){cerr << \"\\033[m\";(void)_;(void)name;}\n\
    template<typename T,typename Y,typename ...Z> void debug_func(int _,T &name,Y\
    \ a,Z ...b){cerr << \"\\033[1;36m\";long long tmp_cnt=0;for(;(tmp_cnt>=1||name[_]!=',')&&name[_]!='\\\
    0';_++){if(name[_]=='(')tmp_cnt++;else if(name[_]==')')tmp_cnt--;cerr << name[_];}cerr\
    \ << \" : \";cerr << \"\\033[33m\";debug_out(a);cerr << endl;debug_func(_+1,name,b...);}\n\
    #else\n#define debug(...) ;\n#endif\n\nstruct cin_init{cin_init(){ios::sync_with_stdio(false);std::cin.tie(nullptr);cout\
    \ << fixed << setprecision(16);}}_cin_init;\nusing ll = long long;\nusing ull\
    \ = unsigned long long;\nusing vi = vector<int>;\nusing vll = vector<long long>;\n\
    using vvi = vector<vi>;\nusing vvvi = vector<vvi>;\nusing vvll = vector<vll>;\n\
    using vvvll = vector<vvll>;\nusing vs = vector<string>;\nusing pii = pair<int,\
    \ int>;\nusing pll = pair<ll, ll>;\nusing vcc = vector<char>;\nusing vvcc = vector<vcc>;\n\
    using mii = map<int,int>;\nusing mll = map<ll,ll>;\ntemplate<typename T> using\
    \ vc = vector<T>;\ntemplate<typename T> using vvc = vector<vector<T>>;\ntemplate<typename\
    \ T,typename Y> using uomap = unordered_map<T,Y>;\ntemplate<typename T> using\
    \ uoset = unordered_set<T>;\ntemplate<typename T> using revpriority_queue = priority_queue<T,vector<T>,greater<T>>;\n\
    \nint dx[4] = { 1,0,-1,0 };\nint dy[4] = { 0,1,0,-1 };\nint ddx[8] = { -1,0,1,1,1,0,-1,-1\
    \ };\nint ddy[8] = { 1,1,1,0,-1,-1,-1,0 };\nconstexpr long double lpi = 3.141592653589793238;\n\
    constexpr double pi = 3.141592653589793;\nll mod = 1000000007;\nconstexpr int\
    \ inf = 1073741824;//2^30\nconstexpr ll llinf = 1152921504606846976;//2^60\nvoid\
    \ set_mod(){mod = 998244353;}\n\n#define F first\n#define S second\n#define pb\
    \ emplace_back\n#define mp make_pair\ntemplate<typename T,typename Y>void input(pair<T,Y>&x){cin\
    \ >> x.F >> x.S;}\ntemplate<typename T>void input(T &x){cin >> x;}\ntemplate<typename\
    \ T>void input(vector<T>&x){for(auto &i:x)input(i);}\ntemplate<typename T>void\
    \ input(vector<vector<T>>&x){for(auto &i:x)input(i);}\ntemplate<typename T,typename\
    \ ...Y>void input(T& x,Y&...k){input(x);input(k...);}\ntemplate<typename T>void\
    \ output_tmp(T &x);\ntemplate<typename T>void output(T &x){cout << x;}\ntemplate<typename\
    \ T,typename Y>void output(pair<T,Y>&x){output_tmp(x.first);cout << ' ' ;output_tmp(x.second);}\n\
    template<typename T>void output(vector<T>&x){ll cnt=0;for(auto &i:x){cnt++;output(i);if(cnt!=(long\
    \ long)x.size())cout << ' ';}}\ntemplate<typename T>void output(vector<vector<T>>&x){ll\
    \ cnt=0;for(auto &i:x){cnt++;output(i);if(cnt!=(long long)x.size())cout << endl;}}\n\
    template<typename T>void output_tmp(T &x){output(x);}\ntemplate<typename T>void\
    \ print(T x){output(x);cout << endl;}\ntemplate<typename T>void print_buffer(T\
    \ &x){output(x);cout << endl;}\ntemplate<typename T,typename ...Y>void print_buffer(T&\
    \ x,Y&...k){output(x);cout << endl;print_buffer(k...);}\ntemplate<typename T,typename\
    \ ...Y>void print(T x,Y...k){output(x);cout << endl;print_buffer(k...);}\ntemplate<typename\
    \ T> auto min(const T& x){ return *min_element(x.begin(),x.end()); }\ntemplate<typename\
    \ T> auto max(const T& x){ return *max_element(x.begin(),x.end()); }\ntemplate<typename\
    \ T> inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}\ntemplate<typename\
    \ T> inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}\ntemplate<typename\
    \ T> void yesno(T x){if(x)cout << \"Yes\" << endl;else cout << \"No\" << endl;}\n\
    template<typename... T>constexpr auto min(T... a){return min(initializer_list<common_type_t<T...>>{a...});}\n\
    template<typename... T>constexpr auto max(T... a){return max(initializer_list<common_type_t<T...>>{a...});}\n\
    \n#define overload4(a,b,c,d,e,...)e\n#define overload8(a,b,c,d,e,f,g,h,i,...)i\n\
    #define rep1(end) for(ll i=0;i<(ll)end;i++)\n#define rep2(i,end) for(ll i=0;i<(ll)end;i++)\n\
    #define rep3(i,start,end) for(ll i=start;i<(ll)end;i++)\n#define rep4(i,start,end,plus)\
    \ for(ll i=start;i<(ll)end;i+=plus)\n#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n\
    #define rrep(i,start) for(ll i=(ll)start-1;i>=0;i--)\n#define LL(...) ll __VA_ARGS__;\
    \ input(__VA_ARGS__);\n#define STR(...) string __VA_ARGS__; input(__VA_ARGS__);\n\
    #define INT(...) int __VA_ARGS__; input(__VA_ARGS__);\n#define VLL0(...) ;\n#define\
    \ VLL1(a,x,...) vll a(x);input(a);\n#define VLL2(a,x,b,x_,...)vll a(x),b(x_);input(a,b);\n\
    #define VLL3(a,x,b,x_,c,x__,...)vll a(x),b(x_),c(x__);input(a,b,c);\n#define VLL4(a,x,b,x_,c,x__,d,x___,...)vll\
    \ a(x),b(x_),c(x__),d(x___);input(a,b,c,d);\n#define VLL(...) overload8(__VA_ARGS__,VLL4,VLL0,VLL3,VLL0,VLL2,VLL0,VLL1)(__VA_ARGS__);\n\
    #define vrep(i,x) for(auto i:x)\n#define vsrep(i,x) for(auto &i:x)\n#define all(x)\
    \ x.begin(),x.end()\n#define rall(x) x.rbegin(),x.rend()\n#define Endl endl\n\
    #define endl \"\\n\"\n\n#endif\n"
  code: "#if __INCLUDE_LEVEL__ == 0\n#include __FILE__\n\n//using mint = modint1000000007;\n\
    //using mint = modint998244353;\n\nint main(){\n    \n}\n\n#else\n\n#if __has_include(<template/include.hpp>)\n\
    #include <template/include.hpp>\n#else\n#include<bits/stdc++.h>\n#if __has_include(<atcoder/all>)\n\
    #include<atcoder/all>\n#endif\n#endif\n\n#pragma GCC target(\"avx2\")\n#pragma\
    \ GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\nusing namespace\
    \ std;\n\n#if __has_include(<atcoder/all>)\nusing namespace atcoder;\nvoid output(modint1000000007\
    \ x){cout << x.val();}\nvoid output(modint998244353 x){cout << x.val();}\nvoid\
    \ debug_out(modint1000000007 x){cerr << x.val();}\nvoid debug_out(modint998244353\
    \ x){cerr << x.val();}\n#endif\n\n#ifdef LOCAL\n#define debug(...) {cerr << \"\
    \\033[1;31mxxxxxxxxxx\" << \"\\033[1;35mdebug\" << \"\\033[1;31mxxxxxxxxxx\" <<\
    \ \"\\033[1;32mline:\" << __LINE__ << endl; debug_func(0, #__VA_ARGS__, __VA_ARGS__);}\n\
    void debug_out(long long x){if(x==1152921504606846976)cerr << \"llinf\"; else\
    \ cerr << x;}\ntemplate<typename T>void debug_out(T x){cerr << x;}\ntemplate<typename\
    \ T>void debug_tmp(T x);\ntemplate<typename T,typename Y>void debug_out(pair<T,Y>x){cerr<<\"\
    < \";debug_tmp(x.first);cerr << \" , \";debug_tmp(x.second);cerr << \" >\";}\n\
    template<typename T>void debug_out(vector<T>x){long long cnt=0;for(auto &i:x){cnt++;debug_out(i);if(cnt!=(long\
    \ long)x.size())cerr << ' ';}}\ntemplate<typename T>void debug_out(vector<vector<T>>x){cerr\
    \ << endl;long long cnt=0;for(auto &i:x){cnt++;debug_out(i);if(cnt!=(long long)x.size())cerr\
    \ << endl;}}\ntemplate<typename T>void debug_tmp(T x){debug_out(x);}\ntemplate<typename\
    \ T>void debug_map(T x){cerr << endl;long long cnt=0;for(auto &t:x){cnt++;cerr\
    \ << \"Key:\";debug_out(t.first);cerr << \" Val:\";debug_out(t.second);if(cnt!=(long\
    \ long)x.size())cerr << endl;}}\ntemplate<typename T>void debug_set(T x){long\
    \ long cnt=0;for(auto &t:x){cnt++;debug_out(t);if(cnt!=(long long)x.size())cerr\
    \ << \" \";}}\ntemplate<typename T>void debug_out(queue<T>x){while(!x.empty()){auto\
    \ t=x.front();x.pop();debug_out(t);if(!x.empty())cerr << \" \";}}\ntemplate<typename\
    \ T>void debug_out(priority_queue<T>x){while(!x.empty()){auto t=x.top();x.pop();debug_out(t);if(!x.empty())cerr\
    \ << \" \";}}\ntemplate<typename T>void debug_out(priority_queue<T,vector<T>,greater<T>>x){while(!x.empty()){auto\
    \ t=x.top();x.pop();debug_out(t);if(!x.empty())cerr << \" \";}}\ntemplate<typename\
    \ T,typename Y>void debug_out(map<T,Y>x){debug_map(x);}\ntemplate<typename T,typename\
    \ Y>void debug_out(unordered_map<T,Y>x){debug_map(x);}\ntemplate<typename T>void\
    \ debug_out(set<T>x){debug_set(x);}\ntemplate<typename T>void debug_out(unordered_set<T>x){debug_set(x);}\n\
    template<typename T>void debug_out(multiset<T>x){debug_set(x);}\ntemplate<typename\
    \ T> void debug_func(int _,T name){cerr << \"\\033[m\";(void)_;(void)name;}\n\
    template<typename T,typename Y,typename ...Z> void debug_func(int _,T &name,Y\
    \ a,Z ...b){cerr << \"\\033[1;36m\";long long tmp_cnt=0;for(;(tmp_cnt>=1||name[_]!=',')&&name[_]!='\\\
    0';_++){if(name[_]=='(')tmp_cnt++;else if(name[_]==')')tmp_cnt--;cerr << name[_];}cerr\
    \ << \" : \";cerr << \"\\033[33m\";debug_out(a);cerr << endl;debug_func(_+1,name,b...);}\n\
    #else\n#define debug(...) ;\n#endif\n\nstruct cin_init{cin_init(){ios::sync_with_stdio(false);std::cin.tie(nullptr);cout\
    \ << fixed << setprecision(16);}}_cin_init;\nusing ll = long long;\nusing ull\
    \ = unsigned long long;\nusing vi = vector<int>;\nusing vll = vector<long long>;\n\
    using vvi = vector<vi>;\nusing vvvi = vector<vvi>;\nusing vvll = vector<vll>;\n\
    using vvvll = vector<vvll>;\nusing vs = vector<string>;\nusing pii = pair<int,\
    \ int>;\nusing pll = pair<ll, ll>;\nusing vcc = vector<char>;\nusing vvcc = vector<vcc>;\n\
    using mii = map<int,int>;\nusing mll = map<ll,ll>;\ntemplate<typename T> using\
    \ vc = vector<T>;\ntemplate<typename T> using vvc = vector<vector<T>>;\ntemplate<typename\
    \ T,typename Y> using uomap = unordered_map<T,Y>;\ntemplate<typename T> using\
    \ uoset = unordered_set<T>;\ntemplate<typename T> using revpriority_queue = priority_queue<T,vector<T>,greater<T>>;\n\
    \nint dx[4] = { 1,0,-1,0 };\nint dy[4] = { 0,1,0,-1 };\nint ddx[8] = { -1,0,1,1,1,0,-1,-1\
    \ };\nint ddy[8] = { 1,1,1,0,-1,-1,-1,0 };\nconstexpr long double lpi = 3.141592653589793238;\n\
    constexpr double pi = 3.141592653589793;\nll mod = 1000000007;\nconstexpr int\
    \ inf = 1073741824;//2^30\nconstexpr ll llinf = 1152921504606846976;//2^60\nvoid\
    \ set_mod(){mod = 998244353;}\n\n#define F first\n#define S second\n#define pb\
    \ emplace_back\n#define mp make_pair\ntemplate<typename T,typename Y>void input(pair<T,Y>&x){cin\
    \ >> x.F >> x.S;}\ntemplate<typename T>void input(T &x){cin >> x;}\ntemplate<typename\
    \ T>void input(vector<T>&x){for(auto &i:x)input(i);}\ntemplate<typename T>void\
    \ input(vector<vector<T>>&x){for(auto &i:x)input(i);}\ntemplate<typename T,typename\
    \ ...Y>void input(T& x,Y&...k){input(x);input(k...);}\ntemplate<typename T>void\
    \ output_tmp(T &x);\ntemplate<typename T>void output(T &x){cout << x;}\ntemplate<typename\
    \ T,typename Y>void output(pair<T,Y>&x){output_tmp(x.first);cout << ' ' ;output_tmp(x.second);}\n\
    template<typename T>void output(vector<T>&x){ll cnt=0;for(auto &i:x){cnt++;output(i);if(cnt!=(long\
    \ long)x.size())cout << ' ';}}\ntemplate<typename T>void output(vector<vector<T>>&x){ll\
    \ cnt=0;for(auto &i:x){cnt++;output(i);if(cnt!=(long long)x.size())cout << endl;}}\n\
    template<typename T>void output_tmp(T &x){output(x);}\ntemplate<typename T>void\
    \ print(T x){output(x);cout << endl;}\ntemplate<typename T>void print_buffer(T\
    \ &x){output(x);cout << endl;}\ntemplate<typename T,typename ...Y>void print_buffer(T&\
    \ x,Y&...k){output(x);cout << endl;print_buffer(k...);}\ntemplate<typename T,typename\
    \ ...Y>void print(T x,Y...k){output(x);cout << endl;print_buffer(k...);}\ntemplate<typename\
    \ T> auto min(const T& x){ return *min_element(x.begin(),x.end()); }\ntemplate<typename\
    \ T> auto max(const T& x){ return *max_element(x.begin(),x.end()); }\ntemplate<typename\
    \ T> inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}\ntemplate<typename\
    \ T> inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}\ntemplate<typename\
    \ T> void yesno(T x){if(x)cout << \"Yes\" << endl;else cout << \"No\" << endl;}\n\
    template<typename... T>constexpr auto min(T... a){return min(initializer_list<common_type_t<T...>>{a...});}\n\
    template<typename... T>constexpr auto max(T... a){return max(initializer_list<common_type_t<T...>>{a...});}\n\
    \n#define overload4(a,b,c,d,e,...)e\n#define overload8(a,b,c,d,e,f,g,h,i,...)i\n\
    #define rep1(end) for(ll i=0;i<(ll)end;i++)\n#define rep2(i,end) for(ll i=0;i<(ll)end;i++)\n\
    #define rep3(i,start,end) for(ll i=start;i<(ll)end;i++)\n#define rep4(i,start,end,plus)\
    \ for(ll i=start;i<(ll)end;i+=plus)\n#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)\n\
    #define rrep(i,start) for(ll i=(ll)start-1;i>=0;i--)\n#define LL(...) ll __VA_ARGS__;\
    \ input(__VA_ARGS__);\n#define STR(...) string __VA_ARGS__; input(__VA_ARGS__);\n\
    #define INT(...) int __VA_ARGS__; input(__VA_ARGS__);\n#define VLL0(...) ;\n#define\
    \ VLL1(a,x,...) vll a(x);input(a);\n#define VLL2(a,x,b,x_,...)vll a(x),b(x_);input(a,b);\n\
    #define VLL3(a,x,b,x_,c,x__,...)vll a(x),b(x_),c(x__);input(a,b,c);\n#define VLL4(a,x,b,x_,c,x__,d,x___,...)vll\
    \ a(x),b(x_),c(x__),d(x___);input(a,b,c,d);\n#define VLL(...) overload8(__VA_ARGS__,VLL4,VLL0,VLL3,VLL0,VLL2,VLL0,VLL1)(__VA_ARGS__);\n\
    #define vrep(i,x) for(auto i:x)\n#define vsrep(i,x) for(auto &i:x)\n#define all(x)\
    \ x.begin(),x.end()\n#define rall(x) x.rbegin(),x.rend()\n#define Endl endl\n\
    #define endl \"\\n\"\n\n#endif"
  dependsOn:
  - template/include.hpp
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2024-03-11 13:48:32+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---

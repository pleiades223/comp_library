#if __INCLUDE_LEVEL__ == 0
#include __FILE__

//using mint = modint1000000007;
//using mint = modint998244353;

int main(){
    
}

#else

#if __has_include(<template/include.hpp>)
#include <template/include.hpp>
#else
#include<bits/stdc++.h>
#if __has_include(<atcoder/all>)
#include<atcoder/all>
#endif
#endif

#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
using namespace std;

#if __has_include(<atcoder/all>)
using namespace atcoder;
void output(modint1000000007 x){cout << x.val();}
void output(modint998244353 x){cout << x.val();}
void debug_out(modint1000000007 x){cerr << x.val();}
void debug_out(modint998244353 x){cerr << x.val();}
#endif

#ifdef LOCAL
#define debug(...) {cerr << "\033[1;31mxxxxxxxxxx" << "\033[1;35mdebug" << "\033[1;31mxxxxxxxxxx" << "\033[1;32mline:" << __LINE__ << endl; debug_func(0, #__VA_ARGS__, __VA_ARGS__);}
void debug_out(long long x){if(x==1152921504606846976)cerr << "llinf"; else cerr << x;}
template<typename T>void debug_out(T x){cerr << x;}
template<typename T>void debug_tmp(T x);
template<typename T,typename Y>void debug_out(pair<T,Y>x){cerr<<"< ";debug_tmp(x.first);cerr << " , ";debug_tmp(x.second);cerr << " >";}
template<typename T>void debug_out(vector<T>x){long long cnt=0;for(auto &i:x){cnt++;debug_out(i);if(cnt!=(long long)x.size())cerr << ' ';}}
template<typename T>void debug_out(vector<vector<T>>x){cerr << endl;long long cnt=0;for(auto &i:x){cnt++;debug_out(i);if(cnt!=(long long)x.size())cerr << endl;}}
template<typename T>void debug_tmp(T x){debug_out(x);}
template<typename T>void debug_map(T x){cerr << endl;long long cnt=0;for(auto &t:x){cnt++;cerr << "Key:";debug_out(t.first);cerr << " Val:";debug_out(t.second);if(cnt!=(long long)x.size())cerr << endl;}}
template<typename T>void debug_set(T x){long long cnt=0;for(auto &t:x){cnt++;debug_out(t);if(cnt!=(long long)x.size())cerr << " ";}}
template<typename T>void debug_out(queue<T>x){while(!x.empty()){auto t=x.front();x.pop();debug_out(t);if(!x.empty())cerr << " ";}}
template<typename T>void debug_out(priority_queue<T>x){while(!x.empty()){auto t=x.top();x.pop();debug_out(t);if(!x.empty())cerr << " ";}}
template<typename T>void debug_out(priority_queue<T,vector<T>,greater<T>>x){while(!x.empty()){auto t=x.top();x.pop();debug_out(t);if(!x.empty())cerr << " ";}}
template<typename T,typename Y>void debug_out(map<T,Y>x){debug_map(x);}
template<typename T,typename Y>void debug_out(unordered_map<T,Y>x){debug_map(x);}
template<typename T>void debug_out(set<T>x){debug_set(x);}
template<typename T>void debug_out(unordered_set<T>x){debug_set(x);}
template<typename T>void debug_out(multiset<T>x){debug_set(x);}
template<typename T> void debug_func(int _,T name){cerr << "\033[m";(void)_;(void)name;}
template<typename T,typename Y,typename ...Z> void debug_func(int _,T &name,Y a,Z ...b){cerr << "\033[1;36m";long long tmp_cnt=0;for(;(tmp_cnt>=1||name[_]!=',')&&name[_]!='\0';_++){if(name[_]=='(')tmp_cnt++;else if(name[_]==')')tmp_cnt--;cerr << name[_];}cerr << " : ";cerr << "\033[33m";debug_out(a);cerr << endl;debug_func(_+1,name,b...);}
#else
#define debug(...) ;
#endif

struct cin_init{cin_init(){ios::sync_with_stdio(false);std::cin.tie(nullptr);cout << fixed << setprecision(16);}}_cin_init;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<long long>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vvll = vector<vll>;
using vvvll = vector<vvll>;
using vs = vector<string>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vcc = vector<char>;
using vvcc = vector<vcc>;
using mii = map<int,int>;
using mll = map<ll,ll>;
template<typename T> using vc = vector<T>;
template<typename T> using vvc = vector<vector<T>>;
template<typename T,typename Y> using uomap = unordered_map<T,Y>;
template<typename T> using uoset = unordered_set<T>;
template<typename T> using revpriority_queue = priority_queue<T,vector<T>,greater<T>>;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int ddx[8] = { -1,0,1,1,1,0,-1,-1 };
int ddy[8] = { 1,1,1,0,-1,-1,-1,0 };
constexpr long double lpi = 3.141592653589793238;
constexpr double pi = 3.141592653589793;
ll mod = 1000000007;
constexpr int inf = 1073741824;//2^30
constexpr ll llinf = 1152921504606846976;//2^60
void set_mod(){mod = 998244353;}

#define F first
#define S second
#define pb emplace_back
#define mp make_pair
template<typename T,typename Y>void input(pair<T,Y>&x){cin >> x.F >> x.S;}
template<typename T>void input(T &x){cin >> x;}
template<typename T>void input(vector<T>&x){for(auto &i:x)input(i);}
template<typename T>void input(vector<vector<T>>&x){for(auto &i:x)input(i);}
template<typename T,typename ...Y>void input(T& x,Y&...k){input(x);input(k...);}
template<typename T>void output_tmp(T &x);
template<typename T>void output(T &x){cout << x;}
template<typename T,typename Y>void output(pair<T,Y>&x){output_tmp(x.first);cout << ' ' ;output_tmp(x.second);}
template<typename T>void output(vector<T>&x){ll cnt=0;for(auto &i:x){cnt++;output(i);if(cnt!=(long long)x.size())cout << ' ';}}
template<typename T>void output(vector<vector<T>>&x){ll cnt=0;for(auto &i:x){cnt++;output(i);if(cnt!=(long long)x.size())cout << endl;}}
template<typename T>void output_tmp(T &x){output(x);}
template<typename T>void print(T x){output(x);cout << endl;}
template<typename T>void print_buffer(T &x){output(x);cout << endl;}
template<typename T,typename ...Y>void print_buffer(T& x,Y&...k){output(x);cout << endl;print_buffer(k...);}
template<typename T,typename ...Y>void print(T x,Y...k){output(x);cout << endl;print_buffer(k...);}
template<typename T> auto min(const T& x){ return *min_element(x.begin(),x.end()); }
template<typename T> auto max(const T& x){ return *max_element(x.begin(),x.end()); }
template<typename T> inline bool chmin(T &a,T b){if(a>b){a=b;return true;}return false;}
template<typename T> inline bool chmax(T &a,T b){if(a<b){a=b;return true;}return false;}
template<typename T> void yesno(T x){if(x)cout << "Yes" << endl;else cout << "No" << endl;}
template<typename... T>constexpr auto min(T... a){return min(initializer_list<common_type_t<T...>>{a...});}
template<typename... T>constexpr auto max(T... a){return max(initializer_list<common_type_t<T...>>{a...});}

#define overload4(a,b,c,d,e,...)e
#define overload8(a,b,c,d,e,f,g,h,i,...)i
#define rep1(end) for(ll i=0;i<(ll)end;i++)
#define rep2(i,end) for(ll i=0;i<(ll)end;i++)
#define rep3(i,start,end) for(ll i=start;i<(ll)end;i++)
#define rep4(i,start,end,plus) for(ll i=start;i<(ll)end;i+=plus)
#define rep(...) overload4(__VA_ARGS__,rep4,rep3,rep2,rep1)(__VA_ARGS__)
#define rrep(i,start) for(ll i=(ll)start-1;i>=0;i--)
#define LL(...) ll __VA_ARGS__; input(__VA_ARGS__);
#define STR(...) string __VA_ARGS__; input(__VA_ARGS__);
#define INT(...) int __VA_ARGS__; input(__VA_ARGS__);
#define VLL0(...) ;
#define VLL1(a,x,...) vll a(x);input(a);
#define VLL2(a,x,b,x_,...)vll a(x),b(x_);input(a,b);
#define VLL3(a,x,b,x_,c,x__,...)vll a(x),b(x_),c(x__);input(a,b,c);
#define VLL4(a,x,b,x_,c,x__,d,x___,...)vll a(x),b(x_),c(x__),d(x___);input(a,b,c,d);
#define VLL(...) overload8(__VA_ARGS__,VLL4,VLL0,VLL3,VLL0,VLL2,VLL0,VLL1)(__VA_ARGS__);
#define vrep(i,x) for(auto i:x)
#define vsrep(i,x) for(auto &i:x)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define Endl endl
#define endl "\n"

#endif
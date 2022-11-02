/**
 *    author:  Himanshu Singh
 *    created: 02.11.2022 19:32:00
**/

#include "bits/stdc++.h"

using namespace std;

template <typename T, typename U> istream& operator>>(istream &is, pair<T, U> &p) { return is >> p.first >> p.second; }
template <typename T, typename U> ostream& operator<<(ostream &os, const pair<T, U> &p) { return os << p.first << " " << p.second; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> istream &operator>>(istream &is, T_container &v) { for (T &x : v) is >> x; return is; }
template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream &operator<<(ostream &os, const T_container &v) { bool f = false; for (const T &x : v) { if (f) os << " "; os << x; f = true; } return os; }
void scan() {} template <typename Head, typename ...Tail> void scan(Head &H, Tail &...T) { cin >> H; scan(T...); }
void print() { cout << "\n"; } template <typename Head> void print(const Head &H) { cout << H << "\n"; } template <typename Head, typename ...Tail> void print(const Head &H, const Tail &...T) { cout << H << " "; print(T...); }
template <typename T, typename T1, typename... Tail> T amin(T& a, T1 b, Tail... c) { if(b < a) a = b; if constexpr (sizeof...(c) != 0) { amin(a, c...); } return a; } template <typename T, typename T1, typename... Tail> T amax(T& a, T1 b, Tail... c) { if(b > a) a = b; if constexpr (sizeof...(c) != 0) { amax(a, c...); } return a; }


#ifdef HIMANSHU_DEBUG
#include "debug.hpp"
#else
#define dbg(...)
#endif

#define int int64_t
// [10, 12]
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    /*
    vector<int> a;
    vector<int> a(10,1);
    function ->
    push_back(val);
    pop_back(); - empty raheta hai
    size();
    [10,12,13]
    dynamically
    pointer - variable jo ki memory address store karte hai
    */
    
    // vector<int> a = {2,3,1,4,7,8,6,3};
    // // stl 
    // // sort function
    
    // sort(a.begin(), a.end());
    
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    
    
    // sort(a.rbegin(), a.rend());
    
    // // print(a);
    
    // for (int i = 0; i < a.size(); i++) {
    //     cout << a[i] << " ";
    // }
    
    
    // navneet 
    int n, key , occ;
    cin >> n >> key >> occ;
    
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }
    
    // linear seaching
    // O(n)
    int count = 0;
    bool ok = false;
    // for(int i = 0; i < n; i++) {
    //     if(a[i] == key) {
    //         count++; // key kitni baar occ ho rahi
    //     }
    //     if(count == occ) {
    //         ok = true;
    //         cout << i << endl;
    //     }
    // }
    // if(ok == false) {
    //    cout << -1 << endl; 
    // }
    int i = 0;
    while(i < n) {
        if(a[i] == key) {
            count++; // key kitni baar occ ho rahi
        }
        if(count == occ) {
            ok = true;
            cout << i << endl;
        }
        i++;
    }
    if(ok == false) {
       cout << -1 << endl; 
    }
    
    // cin >> 
    // cout << 
    
    return 0;
}
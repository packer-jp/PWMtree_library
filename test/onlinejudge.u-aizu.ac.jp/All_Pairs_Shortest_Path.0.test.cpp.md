---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/wf.hpp
    title: "Warshall-Floyd \u6CD5"
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp\"\
    \n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C\"\
    \n#line 2 \"graph/wf.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long\
    \ long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing vll\
    \ = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr\
    \ ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ull bit(int n) { return\
    \ 1ull << n; }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr\
    \ ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll\
    \ cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr T\
    \ sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T, typename\
    \ U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false; }\ntemplate\
    \ <typename T, typename U> bool chmin(T &a, const U &b) { return a > b ? a = b,\
    \ true : false; }\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n\
    #else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail>\
    \ void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep\
    \ {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        ll operator*() const { return v; }\n        bool\
    \ operator!=(const itr &i) const { return v != i.v; }\n    };\n    ll l, r;\n\
    \    rep(ll r) : l(min(0ll, r)), r(r) {}\n    rep(ll l, ll r) : l(min(l, r)),\
    \ r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        ll v;\n        itr(ll v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        ll operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    ll l, r;\n    per(ll r) : l(min(0ll, r)), r(r) {}\n    per(ll\
    \ l, ll r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"graph/wf.hpp\"\
    \n\ntemplate <typename T> void wf(vector<vector<T>> &adj, T inf = numeric_limits<T>::max())\
    \ {\n    int n = adj.size();\n    for (int k : rep(n)) {\n        for (int i :\
    \ rep(n)) {\n            for (int j : rep(n)) {\n                if (adj[i][k]\
    \ != inf && adj[k][j] != inf) chmin(adj[i][j], adj[i][k] + adj[k][j]);\n     \
    \       }\n        }\n    }\n}\n#line 3 \"test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp\"\
    \n\n#line 5 \"test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp\"\
    \nusing namespace std;\n\nint main() {\n    ll v, e;\n    cin >> v >> e;\n   \
    \ vector adj(v, vll(v, LLONG_MAX));\n    for (ll i : rep(v)) adj[i][i] = 0;\n\
    \    while (e--) {\n        ll s, t, d;\n        cin >> s >> t >> d;\n       \
    \ adj[s][t] = d;\n    }\n    wf(adj);\n    for (ll i : rep(v)) {\n        if (adj[i][i]\
    \ < 0) {\n            cout << \"NEGATIVE CYCLE\" << endl;\n            return\
    \ 0;\n        }\n    }\n    for (ll i : rep(v)) {\n        for (ll j : rep(v))\
    \ {\n            if (adj[i][j] == LLONG_MAX) {\n                cout << \"INF\"\
    ;\n            } else {\n                cout << adj[i][j];\n            }\n \
    \           cout << (j == v - 1 ? \"\\n\" : \" \");\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_C\"\
    \n#include \"../../graph/wf.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nint main() {\n    ll v, e;\n    cin >> v >> e;\n    vector adj(v, vll(v,\
    \ LLONG_MAX));\n    for (ll i : rep(v)) adj[i][i] = 0;\n    while (e--) {\n  \
    \      ll s, t, d;\n        cin >> s >> t >> d;\n        adj[s][t] = d;\n    }\n\
    \    wf(adj);\n    for (ll i : rep(v)) {\n        if (adj[i][i] < 0) {\n     \
    \       cout << \"NEGATIVE CYCLE\" << endl;\n            return 0;\n        }\n\
    \    }\n    for (ll i : rep(v)) {\n        for (ll j : rep(v)) {\n           \
    \ if (adj[i][j] == LLONG_MAX) {\n                cout << \"INF\";\n          \
    \  } else {\n                cout << adj[i][j];\n            }\n            cout\
    \ << (j == v - 1 ? \"\\n\" : \" \");\n        }\n    }\n}"
  dependsOn:
  - graph/wf.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-12 11:47:10+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/All_Pairs_Shortest_Path.0.test.cpp
---

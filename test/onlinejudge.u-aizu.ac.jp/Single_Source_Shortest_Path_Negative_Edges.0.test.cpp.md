---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/spfa.hpp
    title: SPFA
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp\"\
    \n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n#line 2 \"graph/spfa.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long\
    \ long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing vll\
    \ = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr\
    \ ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return\
    \ (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b)\
    \ < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr\
    \ ull bit(int n) { return 1ull << n; }\ntemplate <typename T> constexpr T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) { return a < b ? a = b, true : false; }\ntemplate <typename T, typename\
    \ U> bool chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os\
    \ << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr\
    \ << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n\
    }\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr\
    \ << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head &&head,\
    \ Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \",\
    \ \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \": \" <<\
    \ #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll l, ll r) : l(l),\
    \ r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const { return l; };\n\
    \    itr end() const { return r; };\n};\nstruct per {\n    struct itr {\n    \
    \    ll v;\n        itr(ll v) : v(v) {}\n        void operator++() { --v; }\n\
    \        ll operator*() const { return v; }\n        bool operator!=(itr i) const\
    \ { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l), r(r) {}\n\
    \    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1; };\n    itr\
    \ end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"graph/spfa.hpp\"\
    \n\ntemplate <typename S> struct spfa {\n    using D = typename S::dist_t;\n \
    \   using C = typename S::cost_t;\n    struct edge {\n        int to;\n      \
    \  C cost;\n    };\n    vector<vector<edge>> adj;\n    spfa(int n) : adj(n) {}\n\
    \    void add_edge(int from, int to, const C &cost) { adj[from].push_back({to,\
    \ cost}); }\n    pair<vector<D>, vector<int>> get(int s, const D &base = D())\
    \ const {\n        int n = adj.size();\n        vector<D> dist(n, S::inf());\n\
    \        vector<int> prev(n, -1), inq(n), time(n);\n        queue<int> q;\n  \
    \      q.push(s);\n        dist[s] = base;\n        ++time[s];\n        while\
    \ (!q.empty()) {\n            int from = q.front();\n            q.pop();\n  \
    \          inq[from] = false;\n            for (auto [to, cost] : adj[from]) {\n\
    \                if (chmin(dist[to], dist[from] + cost)) {\n                 \
    \   prev[to] = from;\n                    if (!inq[to]) {\n                  \
    \      if (++time[to] >= n) return {{}, {}};\n                        q.push(to);\n\
    \                        inq[to] = true;\n                    }\n            \
    \    }\n            }\n        }\n        return {dist, prev};\n    }\n};\n\n\
    struct ll_spfa {\n    using dist_t = ll;\n    using cost_t = ll;\n    static dist_t\
    \ inf() { return LLONG_MAX; }\n};\n#line 3 \"test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp\"\
    \n\n#line 5 \"test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp\"\
    \nusing namespace std;\n\nint main() {\n    ll v, e, r;\n    cin >> v >> e >>\
    \ r;\n    spfa<ll_spfa> spfa(v);\n    while (e--) {\n        ll s, t, d;\n   \
    \     cin >> s >> t >> d;\n        spfa.add_edge(s, t, d);\n    }\n    vll res\
    \ = spfa.get(r).first;\n    if (res.empty()) {\n        cout << \"NEGATIVE CYCLE\"\
    \ << endl;\n        return 0;\n    }\n    for (ll ans : res) {\n        if (ans\
    \ == ll_spfa::inf()) {\n            cout << \"INF\" << endl;\n        } else {\n\
    \            cout << ans << endl;\n        }\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/1/GRL_1_B\"\
    \n#include \"../../graph/spfa.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\nint main() {\n    ll v, e, r;\n    cin >> v >> e >> r;\n    spfa<ll_spfa>\
    \ spfa(v);\n    while (e--) {\n        ll s, t, d;\n        cin >> s >> t >> d;\n\
    \        spfa.add_edge(s, t, d);\n    }\n    vll res = spfa.get(r).first;\n  \
    \  if (res.empty()) {\n        cout << \"NEGATIVE CYCLE\" << endl;\n        return\
    \ 0;\n    }\n    for (ll ans : res) {\n        if (ans == ll_spfa::inf()) {\n\
    \            cout << \"INF\" << endl;\n        } else {\n            cout << ans\
    \ << endl;\n        }\n    }\n}"
  dependsOn:
  - graph/spfa.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-12 15:48:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/Single_Source_Shortest_Path_Negative_Edges.0.test.cpp
---

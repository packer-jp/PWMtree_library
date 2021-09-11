---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/oibfs.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\n\
    using vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\n\
    constexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ull bit(int n)\
    \ { return 1ull << n; }\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\n\
    constexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr\
    \ ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\ntemplate <typename T> constexpr\
    \ T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
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
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"graph/oibfs.hpp\"\
    \n\nstruct oibfs {\n    struct edge {\n        int to, cost;\n        edge(int\
    \ to, int cost) : to(to), cost(cost) {}\n    };\n    vector<vector<edge>> adj;\n\
    \    oibfs(int n) : adj(n) {}\n    void add_edge(int from, int to, int cost) {\
    \ adj[from].emplace_back(to, cost); }\n    pair<vector<int>, vector<int>> get(int\
    \ s) const {\n        vector<int> dist(adj.size(), INT_MAX), prev(adj.size(),\
    \ -1);\n        using P = pair<int, int>;\n        deque<P> deq;\n        dist[s]\
    \ = 0;\n        deq.emplace_front(0, s);\n        while (!deq.empty()) {\n   \
    \         auto [d, from] = deq.front();\n            deq.pop_front();\n      \
    \      if (dist[from] < d) continue;\n            for (auto [to, cost] : adj[from])\
    \ {\n                int nd = dist[from] + cost;\n                if (nd < dist[to])\
    \ {\n                    dist[to] = nd;\n                    prev[to] = from;\n\
    \                    if (cost == 0) deq.emplace_front(nd, to);\n             \
    \       if (cost == 1) deq.emplace_back(nd, to);\n                }\n        \
    \    }\n        }\n        return {dist, prev};\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\nstruct oibfs {\n    struct\
    \ edge {\n        int to, cost;\n        edge(int to, int cost) : to(to), cost(cost)\
    \ {}\n    };\n    vector<vector<edge>> adj;\n    oibfs(int n) : adj(n) {}\n  \
    \  void add_edge(int from, int to, int cost) { adj[from].emplace_back(to, cost);\
    \ }\n    pair<vector<int>, vector<int>> get(int s) const {\n        vector<int>\
    \ dist(adj.size(), INT_MAX), prev(adj.size(), -1);\n        using P = pair<int,\
    \ int>;\n        deque<P> deq;\n        dist[s] = 0;\n        deq.emplace_front(0,\
    \ s);\n        while (!deq.empty()) {\n            auto [d, from] = deq.front();\n\
    \            deq.pop_front();\n            if (dist[from] < d) continue;\n   \
    \         for (auto [to, cost] : adj[from]) {\n                int nd = dist[from]\
    \ + cost;\n                if (nd < dist[to]) {\n                    dist[to]\
    \ = nd;\n                    prev[to] = from;\n                    if (cost ==\
    \ 0) deq.emplace_front(nd, to);\n                    if (cost == 1) deq.emplace_back(nd,\
    \ to);\n                }\n            }\n        }\n        return {dist, prev};\n\
    \    }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: graph/oibfs.hpp
  requiredBy: []
  timestamp: '2021-09-12 00:37:31+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/oibfs.hpp
layout: document
title: 01-BFS
---

## 概要
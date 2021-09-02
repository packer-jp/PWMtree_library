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
    using ll = long long;\nusing ull = unsigned long long;\null bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T, typename U> bool chmax(T &a, const U &b) { return\
    \ ((a < b) ? (a = b, true) : (false)); }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return ((a > b) ? (a = b, true) : (false)); }\ntemplate\
    \ <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os\
    \ << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr\
    \ << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n\
    }\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr\
    \ << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head &&head,\
    \ Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \",\
    \ \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \": \" <<\
    \ #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep {\n    struct\
    \ itr {\n        int v;\n        itr(int v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        int operator*() const { return v; }\n        bool operator!=(const\
    \ itr &i) const { return v != i.v; }\n    };\n    int l, r;\n    rep(int r) :\
    \ l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l, r)), r(r) {}\n    itr\
    \ begin() const { return l; };\n    itr end() const { return r; };\n};\nstruct\
    \ per {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n    \
    \    void operator++() { --v; }\n        int operator*() const { return v; }\n\
    \        bool operator!=(const itr &i) const { return v != i.v; }\n    };\n  \
    \  int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int l, int r) :\
    \ l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n    itr end()\
    \ const { return l - 1; };\n};\n#line 4 \"graph/oibfs.hpp\"\n\nstruct oibfs {\n\
    \    struct edge {\n        ll to, cost;\n        edge(ll to, ll cost) : to(to),\
    \ cost(cost) {}\n    };\n    vector<vector<edge>> adj;\n    oibfs(ll n) : adj(n)\
    \ {}\n    void add_edge(ll from, ll to, ll cost) { adj[from].emplace_back(to,\
    \ cost); }\n    pair<vector<ll>, vector<ll>> get(int s) const {\n        vector<ll>\
    \ dist(adj.size(), LLONG_MAX), prev(adj.size(), -1);\n        using P = pair<ll,\
    \ ll>;\n        deque<P> deq;\n        dist[s] = 0;\n        deq.emplace_front(0,\
    \ s);\n        while (!deq.empty()) {\n            auto [d, i] = deq.front();\n\
    \            deq.pop_front();\n            if (dist[i] < d) continue;\n      \
    \      for (auto [to, cost] : adj[i]) {\n                ll nd = dist[i] + cost;\n\
    \                if (nd < dist[to]) {\n                    dist[to] = nd;\n  \
    \                  prev[to] = i;\n                    if (cost == 0) deq.emplace_front(nd,\
    \ to);\n                    if (cost == 1) deq.emplace_back(nd, to);\n       \
    \         }\n            }\n        }\n        return {dist, prev};\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\nstruct oibfs {\n    struct\
    \ edge {\n        ll to, cost;\n        edge(ll to, ll cost) : to(to), cost(cost)\
    \ {}\n    };\n    vector<vector<edge>> adj;\n    oibfs(ll n) : adj(n) {}\n   \
    \ void add_edge(ll from, ll to, ll cost) { adj[from].emplace_back(to, cost); }\n\
    \    pair<vector<ll>, vector<ll>> get(int s) const {\n        vector<ll> dist(adj.size(),\
    \ LLONG_MAX), prev(adj.size(), -1);\n        using P = pair<ll, ll>;\n       \
    \ deque<P> deq;\n        dist[s] = 0;\n        deq.emplace_front(0, s);\n    \
    \    while (!deq.empty()) {\n            auto [d, i] = deq.front();\n        \
    \    deq.pop_front();\n            if (dist[i] < d) continue;\n            for\
    \ (auto [to, cost] : adj[i]) {\n                ll nd = dist[i] + cost;\n    \
    \            if (nd < dist[to]) {\n                    dist[to] = nd;\n      \
    \              prev[to] = i;\n                    if (cost == 0) deq.emplace_front(nd,\
    \ to);\n                    if (cost == 1) deq.emplace_back(nd, to);\n       \
    \         }\n            }\n        }\n        return {dist, prev};\n    }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: graph/oibfs.hpp
  requiredBy: []
  timestamp: '2021-09-02 13:47:48+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/oibfs.hpp
layout: document
title: 01-BFS
---

# 概要
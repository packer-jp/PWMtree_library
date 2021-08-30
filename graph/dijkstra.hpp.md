---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
    title: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/dijkstra.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\null bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T,\
    \ vector<T>, greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a *\
    \ a; }\ntemplate <typename T, typename U> bool chmax(T &a, const U &b) {\n   \
    \ if (a < b) {\n        a = b;\n        return true;\n    }\n    return false;\n\
    }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) {\n    if (b\
    \ < a) {\n        a = b;\n        return true;\n    }\n    return false;\n}\n\
    template <typename T> ostream &operator<<(ostream &os, const vector<T> &a) {\n\
    \    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) { os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n   \
    \ return os;\n}\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid\
    \ debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head\
    \ &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr\
    \ << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \"\
    : \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep {\n\
    \    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        int operator*() const { return v; }\n       \
    \ bool operator!=(const itr &i) const { return v != i.v; }\n    };\n    int l,\
    \ r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l,\
    \ r)), r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        int v;\n        itr(int v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        int operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\n#line 4 \"graph/dijkstra.hpp\"\n\n\
    template <typename S> struct dijkstra {\n    using D = typename S::dist_t;\n \
    \   using C = typename S::cost_t;\n    struct edge {\n        int to;\n      \
    \  C cost;\n        edge(int to, C cost) : to(to), cost(cost) {}\n    };\n   \
    \ vector<vector<edge>> adj;\n    dijkstra(int n) : adj(n) {}\n    void add_edge(int\
    \ from, int to, const C &cost) { adj[from].emplace_back(to, cost); }\n    pair<vector<D>,\
    \ vector<int>> get(int s, const D &base) const {\n        vector<D> dist(adj.size(),\
    \ S::inf());\n        vector<int> prev(adj.size(), -1);\n        using P = pair<D,\
    \ int>;\n        priority_queue_rev<P> pq;\n        dist[s] = base;\n        pq.emplace(base,\
    \ s);\n        while (!pq.empty()) {\n            auto [d, i] = pq.top();\n  \
    \          pq.pop();\n            if (dist[i] < d) continue;\n            for\
    \ (auto [to, cost] : adj[i]) {\n                D nd = d + cost;\n           \
    \     if (nd < dist[to]) {\n                    dist[to] = nd;\n             \
    \       prev[to] = i;\n                    pq.emplace(nd, to);\n             \
    \   }\n            }\n        }\n        return {dist, prev};\n    }\n};\n\nstruct\
    \ ll_dij {\n    using dist_t = ll;\n    using cost_t = ll;\n    static dist_t\
    \ inf() { return LLONG_MAX; }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ dijkstra {\n    using D = typename S::dist_t;\n    using C = typename S::cost_t;\n\
    \    struct edge {\n        int to;\n        C cost;\n        edge(int to, C cost)\
    \ : to(to), cost(cost) {}\n    };\n    vector<vector<edge>> adj;\n    dijkstra(int\
    \ n) : adj(n) {}\n    void add_edge(int from, int to, const C &cost) { adj[from].emplace_back(to,\
    \ cost); }\n    pair<vector<D>, vector<int>> get(int s, const D &base) const {\n\
    \        vector<D> dist(adj.size(), S::inf());\n        vector<int> prev(adj.size(),\
    \ -1);\n        using P = pair<D, int>;\n        priority_queue_rev<P> pq;\n \
    \       dist[s] = base;\n        pq.emplace(base, s);\n        while (!pq.empty())\
    \ {\n            auto [d, i] = pq.top();\n            pq.pop();\n            if\
    \ (dist[i] < d) continue;\n            for (auto [to, cost] : adj[i]) {\n    \
    \            D nd = d + cost;\n                if (nd < dist[to]) {\n        \
    \            dist[to] = nd;\n                    prev[to] = i;\n             \
    \       pq.emplace(nd, to);\n                }\n            }\n        }\n   \
    \     return {dist, prev};\n    }\n};\n\nstruct ll_dij {\n    using dist_t = ll;\n\
    \    using cost_t = ll;\n    static dist_t inf() { return LLONG_MAX; }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2021-08-20 12:52:42+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/judge.yosupo.jp/Shortest_Path.0.test.cpp
documentation_of: graph/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/dijkstra.hpp
- /library/graph/dijkstra.hpp.html
title: graph/dijkstra.hpp
---

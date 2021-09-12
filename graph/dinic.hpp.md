---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.0.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.1.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.1.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.2.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.3.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.3.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/dinic.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(), (a).end()\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\n\
    using vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\n\
    constexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a)\
    \ { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b\
    \ - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a,\
    \ b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename T>\
    \ constexpr T sq(const T &a) { return a * a; }\ntemplate <typename T> using priority_queue_rev\
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
    \ operator!=(itr i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll\
    \ l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const\
    \ { return l; };\n    itr end() const { return r; };\n};\nstruct per {\n    struct\
    \ itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { --v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l),\
    \ r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1;\
    \ };\n    itr end() const { return l - 1; };\n};\nstruct io_setup {\n    static\
    \ constexpr int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"graph/dinic.hpp\"\
    \n\ntemplate <typename S> struct dinic {\n    using C = typename S::cost_t;\n\
    \    struct edge {\n        int to, rev;\n        C cap;\n        bool is_rev;\n\
    \    };\n    vector<vector<edge>> graph;\n    vector<int> level, iter;\n    void\
    \ add_edge(int from, int to, C cap) {\n        graph[from].push_back({to, (int)graph[to].size(),\
    \ cap, false});\n        graph[to].push_back({from, (int)graph[from].size() -\
    \ 1, S::zero(), true});\n    }\n    dinic(int n) : graph(n), level(n), iter(n)\
    \ {}\n    void bfs(int s) {\n        fill(level.begin(), level.end(), -1);\n \
    \       queue<int> que;\n        level[s] = 0;\n        que.push(s);\n       \
    \ while (!que.empty()) {\n            int v = que.front();\n            que.pop();\n\
    \            for (edge &e : graph[v]) {\n                if (e.cap == S::zero()\
    \ || level[e.to] >= 0) continue;\n                level[e.to] = level[v] + 1;\n\
    \                que.push(e.to);\n            }\n        }\n    }\n    C dfs(int\
    \ v, int t, C f) {\n        if (v == t) return f;\n        for (int &i = iter[v];\
    \ i < graph[v].size(); ++i) {\n            edge &e = graph[v][i];\n          \
    \  if (level[v] >= level[e.to] || e.cap == S::zero()) continue;\n            C\
    \ d = dfs(e.to, t, f > e.cap ? e.cap : f);\n            if (d == S::zero()) continue;\n\
    \            e.cap -= d;\n            graph[e.to][e.rev].cap += d;\n         \
    \   return d;\n        }\n        return S::zero();\n    }\n    C calc_max_flow(int\
    \ s, int t, C lim) {\n        C ret = S::zero();\n        while (true) {\n   \
    \         bfs(s);\n            if (level[t] < 0 || lim == S::zero()) { return\
    \ ret; }\n            fill(iter.begin(), iter.end(), 0);\n            C f;\n \
    \           while ((f = dfs(s, t, lim)) != S::zero()) {\n                ret +=\
    \ f;\n                lim -= f;\n            }\n        }\n    }\n    C calc_max_flow(int\
    \ s, int t) { return calc_max_flow(s, t, S::inf()); }\n    map<pair<int, int>,\
    \ C> get_max_flow() {\n        map<pair<int, int>, C> ret;\n        for (int i\
    \ : rep(graph.size())) {\n            for (edge &e : graph[i]) {\n           \
    \     if (e.is_rev) ret[{e.to, i}] = e.cap;\n            }\n        }\n      \
    \  return ret;\n    }\n    map<pair<int, int>, C> get_min_cut(int s) {\n     \
    \   map<pair<int, int>, C> ret;\n        vector<int> visited(graph.size());\n\
    \        queue<int> que;\n        que.push(s);\n        while (!que.empty()) {\n\
    \            int v = que.front();\n            que.pop();\n            if (visited[v])\
    \ continue;\n            visited[v] = true;\n            for (edge &e : graph[v])\
    \ {\n                if (e.cap != S::zero()) que.push(e.to);\n            }\n\
    \        }\n        for (int i : rep(graph.size())) {\n            if (visited[i])\
    \ continue;\n            for (edge &e : graph[i]) {\n                if (e.is_rev\
    \ && visited[e.to]) ret[{e.to, i}] = e.cap;\n            }\n        }\n      \
    \  return ret;\n    }\n};\n\nstruct ll_dinic {\n    using cost_t = ll;\n    static\
    \ cost_t zero() { return 0; }\n    static cost_t inf() { return numeric_limits<cost_t>::max();\
    \ }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename S> struct\
    \ dinic {\n    using C = typename S::cost_t;\n    struct edge {\n        int to,\
    \ rev;\n        C cap;\n        bool is_rev;\n    };\n    vector<vector<edge>>\
    \ graph;\n    vector<int> level, iter;\n    void add_edge(int from, int to, C\
    \ cap) {\n        graph[from].push_back({to, (int)graph[to].size(), cap, false});\n\
    \        graph[to].push_back({from, (int)graph[from].size() - 1, S::zero(), true});\n\
    \    }\n    dinic(int n) : graph(n), level(n), iter(n) {}\n    void bfs(int s)\
    \ {\n        fill(level.begin(), level.end(), -1);\n        queue<int> que;\n\
    \        level[s] = 0;\n        que.push(s);\n        while (!que.empty()) {\n\
    \            int v = que.front();\n            que.pop();\n            for (edge\
    \ &e : graph[v]) {\n                if (e.cap == S::zero() || level[e.to] >= 0)\
    \ continue;\n                level[e.to] = level[v] + 1;\n                que.push(e.to);\n\
    \            }\n        }\n    }\n    C dfs(int v, int t, C f) {\n        if (v\
    \ == t) return f;\n        for (int &i = iter[v]; i < graph[v].size(); ++i) {\n\
    \            edge &e = graph[v][i];\n            if (level[v] >= level[e.to] ||\
    \ e.cap == S::zero()) continue;\n            C d = dfs(e.to, t, f > e.cap ? e.cap\
    \ : f);\n            if (d == S::zero()) continue;\n            e.cap -= d;\n\
    \            graph[e.to][e.rev].cap += d;\n            return d;\n        }\n\
    \        return S::zero();\n    }\n    C calc_max_flow(int s, int t, C lim) {\n\
    \        C ret = S::zero();\n        while (true) {\n            bfs(s);\n   \
    \         if (level[t] < 0 || lim == S::zero()) { return ret; }\n            fill(iter.begin(),\
    \ iter.end(), 0);\n            C f;\n            while ((f = dfs(s, t, lim)) !=\
    \ S::zero()) {\n                ret += f;\n                lim -= f;\n       \
    \     }\n        }\n    }\n    C calc_max_flow(int s, int t) { return calc_max_flow(s,\
    \ t, S::inf()); }\n    map<pair<int, int>, C> get_max_flow() {\n        map<pair<int,\
    \ int>, C> ret;\n        for (int i : rep(graph.size())) {\n            for (edge\
    \ &e : graph[i]) {\n                if (e.is_rev) ret[{e.to, i}] = e.cap;\n  \
    \          }\n        }\n        return ret;\n    }\n    map<pair<int, int>, C>\
    \ get_min_cut(int s) {\n        map<pair<int, int>, C> ret;\n        vector<int>\
    \ visited(graph.size());\n        queue<int> que;\n        que.push(s);\n    \
    \    while (!que.empty()) {\n            int v = que.front();\n            que.pop();\n\
    \            if (visited[v]) continue;\n            visited[v] = true;\n     \
    \       for (edge &e : graph[v]) {\n                if (e.cap != S::zero()) que.push(e.to);\n\
    \            }\n        }\n        for (int i : rep(graph.size())) {\n       \
    \     if (visited[i]) continue;\n            for (edge &e : graph[i]) {\n    \
    \            if (e.is_rev && visited[e.to]) ret[{e.to, i}] = e.cap;\n        \
    \    }\n        }\n        return ret;\n    }\n};\n\nstruct ll_dinic {\n    using\
    \ cost_t = ll;\n    static cost_t zero() { return 0; }\n    static cost_t inf()\
    \ { return numeric_limits<cost_t>::max(); }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: graph/dinic.hpp
  requiredBy: []
  timestamp: '2021-09-12 19:48:10+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.0.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.1.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.3.test.cpp
  - test/onlinejudge.u-aizu.ac.jp/Maximum_Flow.2.test.cpp
documentation_of: graph/dinic.hpp
layout: document
title: "Dinic \u6CD5"
---

## 概要
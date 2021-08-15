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
  bundledCode: "#line 1 \"graph/zobfs.hpp\"\n\n\n\n#line 1 \"template.hpp\"\n\n\n\n\
    #include <bits/stdc++.h>\nusing namespace std;\n\n#define rep(i, n) for (int i\
    \ = 0; i < (int)(n); i++)\n#define all(a) (a).begin(), (a).end()\n#define bit(n)\
    \ (1ull << (n))\nusing ll = long long;\ntemplate <typename T> using priority_queue_rev\
    \ = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename T> T sq(const\
    \ T &a) { return a * a; }\ntemplate <typename T, typename U> bool chmax(T &a,\
    \ const U &b) {\n    if (a < b) {\n        a = b;\n        return true;\n    }\n\
    \    return false;\n}\ntemplate <typename T, typename U> bool chmin(T &a, const\
    \ U &b) {\n    if (b < a) {\n        a = b;\n        return true;\n    }\n   \
    \ return false;\n}\ntemplate <typename T> ostream &operator<<(ostream &os, const\
    \ vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end();\
    \ itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os <<\
    \ \")\";\n    return os;\n}\n\n\n#line 5 \"graph/zobfs.hpp\"\n\nstruct zobfs {\n\
    \    struct edge {\n        ll to, cost;\n        edge(ll to, ll cost) : to(to),\
    \ cost(cost) {}\n    };\n    vector<vector<edge>> adj;\n    zobfs(ll n) : adj(n)\
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
    \         }\n            }\n        }\n        return {dist, prev};\n    }\n};\n\
    \n\n"
  code: "#ifndef PWMTREE_ZOBFS_HPP\n#define PWMTREE_ZOBFS_HPP 1\n\n#include \"../template.hpp\"\
    \n\nstruct zobfs {\n    struct edge {\n        ll to, cost;\n        edge(ll to,\
    \ ll cost) : to(to), cost(cost) {}\n    };\n    vector<vector<edge>> adj;\n  \
    \  zobfs(ll n) : adj(n) {}\n    void add_edge(ll from, ll to, ll cost) { adj[from].emplace_back(to,\
    \ cost); }\n    pair<vector<ll>, vector<ll>> get(int s) const {\n        vector<ll>\
    \ dist(adj.size(), LLONG_MAX), prev(adj.size(), -1);\n        using P = pair<ll,\
    \ ll>;\n        deque<P> deq;\n        dist[s] = 0;\n        deq.emplace_front(0,\
    \ s);\n        while (!deq.empty()) {\n            auto [d, i] = deq.front();\n\
    \            deq.pop_front();\n            if (dist[i] < d) continue;\n      \
    \      for (auto [to, cost] : adj[i]) {\n                ll nd = dist[i] + cost;\n\
    \                if (nd < dist[to]) {\n                    dist[to] = nd;\n  \
    \                  prev[to] = i;\n                    if (cost == 0) deq.emplace_front(nd,\
    \ to);\n                    if (cost == 1) deq.emplace_back(nd, to);\n       \
    \         }\n            }\n        }\n        return {dist, prev};\n    }\n};\n\
    \n#endif"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: graph/zobfs.hpp
  requiredBy: []
  timestamp: '2021-08-09 10:36:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/zobfs.hpp
layout: document
redirect_from:
- /library/graph/zobfs.hpp
- /library/graph/zobfs.hpp.html
title: graph/zobfs.hpp
---
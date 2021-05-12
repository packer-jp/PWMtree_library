---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: graph/dijkstra.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Shortest_Path.0.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#line 1 \"graph/dijkstra.hpp\"\
    \n\n\n\n#line 1 \"template.hpp\"\n\n\n\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n\n#define rep(i, n) for (int i = 0; i < (int)(n); i++)\n#define all(a)\
    \ (a).begin(), (a).end()\n#define bit(n) (1LL << (n))\nusing ll = long long;\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T> T sq(T a) { return a * a; }\ntemplate <typename\
    \ T, typename U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n        a =\
    \ b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename T,\
    \ typename U> bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a = b;\n\
    \        return true;\n    }\n    return false;\n}\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, vector<T> a) {\n    os << \"(\";\n    for (auto itr\
    \ = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ?\
    \ \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n\n\n#line 5 \"graph/dijkstra.hpp\"\
    \n\ntemplate <typename S> struct dijkstra {\n    using D = typename S::dist_t;\n\
    \    using C = typename S::cost_t;\n    struct edge {\n        int to;\n     \
    \   C cost;\n        edge(int to, C cost) : to(to), cost(cost) {}\n    };\n  \
    \  vector<vector<edge>> adj;\n    dijkstra(int n) : adj(n) {}\n    void add_edge(int\
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
    \ inf() { return LLONG_MAX; }\n};\n\n\n#line 3 \"test/judge.yosupo.jp/Shortest_Path.0.test.cpp\"\
    \n\nint main() {\n    int n, m, s, t;\n    cin >> n >> m >> s >> t;\n    dijkstra<ll_dij>\
    \ dij(n);\n    while (m--) {\n        int a, b, c;\n        cin >> a >> b >> c;\n\
    \        dij.add_edge(a, b, c);\n    }\n    auto [dist, prev] = dij.get(s, 0);\n\
    \    if (prev[t] == -1) {\n        cout << -1 << endl;\n        return 0;\n  \
    \  }\n    vector<int> vs{t};\n    do {\n        int back = vs.back();\n      \
    \  vs.push_back(prev[back]);\n    } while (vs.back() != s);\n    reverse(all(vs));\n\
    \    cout << dist[t] << \" \" << vs.size() - 1 << endl;\n    rep(i, vs.size()\
    \ - 1) cout << vs[i] << \" \" << vs[i + 1] << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"../../graph/dijkstra.hpp\"\n\nint main() {\n    int n, m, s, t;\n    cin >>\
    \ n >> m >> s >> t;\n    dijkstra<ll_dij> dij(n);\n    while (m--) {\n       \
    \ int a, b, c;\n        cin >> a >> b >> c;\n        dij.add_edge(a, b, c);\n\
    \    }\n    auto [dist, prev] = dij.get(s, 0);\n    if (prev[t] == -1) {\n   \
    \     cout << -1 << endl;\n        return 0;\n    }\n    vector<int> vs{t};\n\
    \    do {\n        int back = vs.back();\n        vs.push_back(prev[back]);\n\
    \    } while (vs.back() != s);\n    reverse(all(vs));\n    cout << dist[t] <<\
    \ \" \" << vs.size() - 1 << endl;\n    rep(i, vs.size() - 1) cout << vs[i] <<\
    \ \" \" << vs[i + 1] << endl;\n}"
  dependsOn:
  - graph/dijkstra.hpp
  - template.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  requiredBy: []
  timestamp: '2021-05-12 11:07:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Shortest_Path.0.test.cpp
- /verify/test/judge.yosupo.jp/Shortest_Path.0.test.cpp.html
title: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
---
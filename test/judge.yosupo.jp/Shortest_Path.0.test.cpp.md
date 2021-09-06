---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.hpp
    title: "Dijkstra \u6CD5"
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
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Shortest_Path.0.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#line 2 \"graph/dijkstra.hpp\"\
    \n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \n#define all(a) (a).begin(), (a).end()\nusing ll = long long;\nusing ull = unsigned\
    \ long long;\nusing pll = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll\
    \ dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0,\
    \ 1, -1, -1, 1, 0};\nconstexpr ull bit(int n) { return 1ull << n; }\nconstexpr\
    \ ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) {\
    \ return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return\
    \ -fdiv(-a, b); }\ntemplate <typename T> constexpr T sq(const T &a) { return a\
    \ * a; }\ntemplate <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n#ifdef\
    \ ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl;\
    \ }\ntemplate <typename Head, typename... Tail> void debug(Head &&head, Tail &&...\
    \ tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n\
    }\n#define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        int v;\n        itr(int v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        int operator*() const { return\
    \ v; }\n        bool operator!=(const itr &i) const { return v != i.v; }\n   \
    \ };\n    int l, r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int\
    \ r) : l(min(l, r)), r(r) {}\n    itr begin() const { return l; };\n    itr end()\
    \ const { return r; };\n};\nstruct per {\n    struct itr {\n        int v;\n \
    \       itr(int v) : v(v) {}\n        void operator++() { --v; }\n        int\
    \ operator*() const { return v; }\n        bool operator!=(const itr &i) const\
    \ { return v != i.v; }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)),\
    \ r(r) {}\n    per(int l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const\
    \ { return r - 1; };\n    itr end() const { return l - 1; };\n};\nstruct io_setup\
    \ {\n    static constexpr ll PREC = 20;\n    io_setup() {\n        cout << fixed\
    \ << setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n    };\n\
    } iOS;\n#line 4 \"graph/dijkstra.hpp\"\n\ntemplate <typename S> struct dijkstra\
    \ {\n    using D = typename S::dist_t;\n    using C = typename S::cost_t;\n  \
    \  struct edge {\n        int to;\n        C cost;\n        edge(int to, C cost)\
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
    \    using cost_t = ll;\n    static dist_t inf() { return LLONG_MAX; }\n};\n#line\
    \ 3 \"test/judge.yosupo.jp/Shortest_Path.0.test.cpp\"\n\nint main() {\n    ll\
    \ n, m, s, t;\n    cin >> n >> m >> s >> t;\n    dijkstra<ll_dij> dij(n);\n  \
    \  while (m--) {\n        int a, b, c;\n        cin >> a >> b >> c;\n        dij.add_edge(a,\
    \ b, c);\n    }\n    auto [dist, prev] = dij.get(s, 0);\n    if (prev[t] == -1)\
    \ {\n        cout << -1 << endl;\n        return 0;\n    }\n    vector<ll> vs{t};\n\
    \    do {\n        ll back = vs.back();\n        vs.push_back(prev[back]);\n \
    \   } while (vs.back() != s);\n    reverse(all(vs));\n    cout << dist[t] << \"\
    \ \" << vs.size() - 1 << endl;\n    for (ll i : rep(vs.size() - 1)) cout << vs[i]\
    \ << \" \" << vs[i + 1] << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"../../graph/dijkstra.hpp\"\n\nint main() {\n    ll n, m, s, t;\n    cin >>\
    \ n >> m >> s >> t;\n    dijkstra<ll_dij> dij(n);\n    while (m--) {\n       \
    \ int a, b, c;\n        cin >> a >> b >> c;\n        dij.add_edge(a, b, c);\n\
    \    }\n    auto [dist, prev] = dij.get(s, 0);\n    if (prev[t] == -1) {\n   \
    \     cout << -1 << endl;\n        return 0;\n    }\n    vector<ll> vs{t};\n \
    \   do {\n        ll back = vs.back();\n        vs.push_back(prev[back]);\n  \
    \  } while (vs.back() != s);\n    reverse(all(vs));\n    cout << dist[t] << \"\
    \ \" << vs.size() - 1 << endl;\n    for (ll i : rep(vs.size() - 1)) cout << vs[i]\
    \ << \" \" << vs[i + 1] << endl;\n}"
  dependsOn:
  - graph/dijkstra.hpp
  - template.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-07 02:11:40+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Shortest_Path.0.test.cpp
- /verify/test/judge.yosupo.jp/Shortest_Path.0.test.cpp.html
title: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
---

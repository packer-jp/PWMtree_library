---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.6/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../template.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"../../graph/dijkstra.hpp\"\n#include \"../template.hpp\"\n\nint main() {\n\
    \    ll n, m, s, t;\n    cin >> n >> m >> s >> t;\n    dijkstra<ll_dij> dij(n);\n\
    \    while (m--) {\n        int a, b, c;\n        cin >> a >> b >> c;\n      \
    \  dij.add_edge(a, b, c);\n    }\n    auto [dist, prev] = dij.get(s, 0);\n   \
    \ if (prev[t] == -1) {\n        cout << -1 << endl;\n        return 0;\n    }\n\
    \    vector<ll> vs{t};\n    do {\n        ll back = vs.back();\n        vs.push_back(prev[back]);\n\
    \    } while (vs.back() != s);\n    reverse(all(vs));\n    cout << dist[t] <<\
    \ \" \" << vs.size() - 1 << endl;\n    rep(i, vs.size() - 1) cout << vs[i] <<\
    \ \" \" << vs[i + 1] << endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Shortest_Path.0.test.cpp
- /verify/test/judge.yosupo.jp/Shortest_Path.0.test.cpp.html
title: test/judge.yosupo.jp/Shortest_Path.0.test.cpp
---

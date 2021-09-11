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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../math/fzt_and_fmt.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446\"\
    \n#define ERROR 1e-7\n#include \"../../math/fzt_and_fmt.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\nint main() {\n    ll n, m;\n    cin >> n >> m;\n    vll\
    \ a(n), p(n);\n    for (ll i : rep(n)) cin >> a[i];\n    for (ll i : rep(n)) cin\
    \ >> p[i];\n    vector<ll> x(bit(n));\n    for (ll i : rep(bit(n))) {\n      \
    \  ll l = 1;\n        for (ll j : rep(n)) {\n            if ((i >> j) & 1) {\n\
    \                if (l) {\n                    ll d = l / gcd(l, a[j]);\n    \
    \                l = (__int128_t)d * a[j] > m ? 0 : d * a[j];\n              \
    \  }\n            }\n        }\n        if (l) x[i] = m / l;\n    }\n    fzt_super(x);\n\
    \    fmt_super(x);\n    fzt_sub(x);\n    fmt_sub(x);\n\n    fmt_sub(x);\n    double\
    \ ans = 0;\n    for (ll i : rep(bit(n))) {\n        double q = 1;\n        for\
    \ (ll j : rep(n)) {\n            if ((i >> j) & 1) {\n                q *= p[j]\
    \ / 100.0;\n            } else {\n                q *= (1 - p[j] / 100.0);\n \
    \           }\n        }\n        x[i] = m - abs(x[i]);\n        ans += x[i] *\
    \ q;\n    };\n    cout << ans << endl;\n}"
  dependsOn: []
  isVerificationFile: true
  path: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
- /verify/test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp.html
title: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
---

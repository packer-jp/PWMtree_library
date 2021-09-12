---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/and_or_convolution.hpp
    title: "FZT / FMT, and / or \u7573\u307F\u8FBC\u307F"
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
    ERROR: 1e-7
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446
  bundledCode: "#line 1 \"test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446\"\n\
    #define ERROR 1e-7\n#line 2 \"math/and_or_convolution.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\nusing ll = long long;\nusing ull = unsigned long long;\nusing pll\
    \ = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr ll dy[9] = {0, 1, 0, -1,\
    \ 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr\
    \ ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) {\
    \ return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return\
    \ -fdiv(-a, b); }\nconstexpr ull bit(int n) { return 1ull << n; }\ntemplate <typename\
    \ T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename T> using\
    \ priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename\
    \ T, typename U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false;\
    \ }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) { return a\
    \ > b ? a = b, true : false; }\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); itr++) { os << *itr << (next(itr) != a.end() ? \", \" : \"\"\
    ); }\n    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...)\
    \ (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename Head, typename...\
    \ Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if\
    \ (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n#define dump(...)\
    \ cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\nstruct rep {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v)\
    \ {}\n        void operator++() { ++v; }\n        ll operator*() const { return\
    \ v; }\n        bool operator!=(itr i) const { return v < *i; }\n    };\n    ll\
    \ l, r;\n    rep(ll l, ll r) : l(l), r(r) {}\n    rep(ll r) : rep(0, r) {}\n \
    \   itr begin() const { return l; };\n    itr end() const { return r; };\n};\n\
    struct per {\n    struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n \
    \       void operator++() { --v; }\n        ll operator*() const { return v; }\n\
    \        bool operator!=(itr i) const { return v > *i; }\n    };\n    ll l, r;\n\
    \    per(ll l, ll r) : l(l), r(r) {}\n    per(ll r) : per(0, r) {}\n    itr begin()\
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\nstruct\
    \ io_setup {\n    static constexpr int PREC = 20;\n    io_setup() {\n        cout\
    \ << fixed << setprecision(PREC);\n        cerr << fixed << setprecision(PREC);\n\
    \    };\n} iOS;\n#line 4 \"math/and_or_convolution.hpp\"\n\ntemplate <typename\
    \ T> void fzt_super(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size())\
    \ - 1)) {\n        for (int s : rep(a.size())) {\n            if ((s >> i) & 1)\
    \ a[s ^ bit(i)] += a[s];\n        }\n    }\n}\n\ntemplate <typename T> void fzt_sub(vector<T>\
    \ &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int\
    \ s : rep(a.size())) {\n            if (!((s >> i) & 1)) a[s ^ bit(i)] += a[s];\n\
    \        }\n    }\n}\n\ntemplate <typename T> void fmt_super(vector<T> &a) {\n\
    \    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int s : rep(a.size()))\
    \ {\n            if ((s >> i) & 1) a[s ^ bit(i)] -= a[s];\n        }\n    }\n\
    }\n\ntemplate <typename T> void fmt_sub(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size())\
    \ - 1)) {\n        for (int s : rep(a.size())) {\n            if (!((s >> i) &\
    \ 1)) a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n\ntemplate <typename T> vector<T>\
    \ and_convolution(vector<T> a, vector<T> b) {\n    int n_ = max(a.size(), b.size()),\
    \ n;\n    for (n = 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n   \
    \ fzt_super(a), fzt_super(b);\n    for (int i : rep(n)) a[i] *= b[i];\n    fmt_super(a);\n\
    \    return a;\n}\n\ntemplate <typename T> vector<T> or_convolution(vector<T>\
    \ a, vector<T> b) {\n    int n_ = max(a.size(), b.size()), n;\n    for (n = 1;\
    \ n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    fzt_sub(a), fzt_sub(b);\n\
    \    for (int i : rep(n)) a[i] *= b[i];\n    fmt_sub(a);\n    return a;\n}\n#line\
    \ 4 \"test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp\"\n\n#line 6 \"test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp\"\
    \nusing namespace std;\n\nint main() {\n    ll n, m;\n    cin >> n >> m;\n   \
    \ vll a(n), p(n);\n    for (ll i : rep(n)) cin >> a[i];\n    for (ll i : rep(n))\
    \ cin >> p[i];\n    vector<ll> x(bit(n));\n    for (ll i : rep(bit(n))) {\n  \
    \      ll l = 1;\n        for (ll j : rep(n)) {\n            if ((i >> j) & 1)\
    \ {\n                if (l) {\n                    ll d = l / gcd(l, a[j]);\n\
    \                    l = (__int128_t)d * a[j] > m ? 0 : d * a[j];\n          \
    \      }\n            }\n        }\n        if (l) x[i] = m / l;\n    }\n    fzt_super(x);\n\
    \    fmt_super(x);\n    fzt_sub(x);\n    fmt_sub(x);\n\n    fmt_sub(x);\n    double\
    \ ans = 0;\n    for (ll i : rep(bit(n))) {\n        double q = 1;\n        for\
    \ (ll j : rep(n)) {\n            if ((i >> j) & 1) {\n                q *= p[j]\
    \ / 100.0;\n            } else {\n                q *= (1 - p[j] / 100.0);\n \
    \           }\n        }\n        x[i] = m - abs(x[i]);\n        ans += x[i] *\
    \ q;\n    };\n    cout << ans << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446\"\
    \n#define ERROR 1e-7\n#include \"../../math/and_or_convolution.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\nint main() {\n    ll n, m;\n    cin\
    \ >> n >> m;\n    vll a(n), p(n);\n    for (ll i : rep(n)) cin >> a[i];\n    for\
    \ (ll i : rep(n)) cin >> p[i];\n    vector<ll> x(bit(n));\n    for (ll i : rep(bit(n)))\
    \ {\n        ll l = 1;\n        for (ll j : rep(n)) {\n            if ((i >> j)\
    \ & 1) {\n                if (l) {\n                    ll d = l / gcd(l, a[j]);\n\
    \                    l = (__int128_t)d * a[j] > m ? 0 : d * a[j];\n          \
    \      }\n            }\n        }\n        if (l) x[i] = m / l;\n    }\n    fzt_super(x);\n\
    \    fmt_super(x);\n    fzt_sub(x);\n    fmt_sub(x);\n\n    fmt_sub(x);\n    double\
    \ ans = 0;\n    for (ll i : rep(bit(n))) {\n        double q = 1;\n        for\
    \ (ll j : rep(n)) {\n            if ((i >> j) & 1) {\n                q *= p[j]\
    \ / 100.0;\n            } else {\n                q *= (1 - p[j] / 100.0);\n \
    \           }\n        }\n        x[i] = m - abs(x[i]);\n        ans += x[i] *\
    \ q;\n    };\n    cout << ans << endl;\n}"
  dependsOn:
  - math/and_or_convolution.hpp
  - template.hpp
  isVerificationFile: true
  path: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
  requiredBy: []
  timestamp: '2021-09-12 15:48:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
- /verify/test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp.html
title: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
---

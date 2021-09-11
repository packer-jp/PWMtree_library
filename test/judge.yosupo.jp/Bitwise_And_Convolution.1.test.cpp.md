---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: math/and_or_convolution.hpp
    title: "FZT / FMT, and / or \u7573\u307F\u8FBC\u307F"
  - icon: ':question:'
    path: math/modint.hpp
    title: modint
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/bitwise_and_convolution
    links:
    - https://judge.yosupo.jp/problem/bitwise_and_convolution
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/bitwise_and_convolution\"\n\
    #line 2 \"math/and_or_convolution.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include\
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
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n#line 4 \"math/and_or_convolution.hpp\"\
    \n\ntemplate <typename T> void fzt_super(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size())\
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
    \ 2 \"math/modint.hpp\"\n\n#line 4 \"math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007>\
    \ struct modint {\n    ll val;\n    modint(ll val = 0) : val(val >= 0 ? val %\
    \ MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return MOD; }\n\
    \    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0, t;\n   \
    \     while (b > 0) {\n            t = a / b;\n            swap(a -= t * b, b);\n\
    \            swap(u -= t * v, v);\n        }\n        return modint(u);\n    }\n\
    \    modint pow(ll k) const {\n        modint ret = 1, mul = val;\n        while\
    \ (k) {\n            if (k & 1) ret *= mul;\n            mul *= mul;\n       \
    \     k >>= 1;\n        }\n        return ret;\n    }\n    modint &operator+=(const\
    \ modint &a) {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return\
    \ *this;\n    }\n    modint &operator-=(const modint &a) {\n        if ((val +=\
    \ MOD - a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
    \ modint &a) {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n\
    \    modint &operator/=(const modint &a) { return *this *= a.inv(); }\n    bool\
    \ operator==(const modint &a) const { return val == a.val; }\n    bool operator!=(const\
    \ modint &a) const { return rel_ops::operator!=(*this, a); }\n    modint operator+()\
    \ const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend modint operator+(const modint &a, const modint &b) { return modint(a)\
    \ += b; }\n    friend modint operator-(const modint &a, const modint &b) { return\
    \ modint(a) -= b; }\n    friend modint operator*(const modint &a, const modint\
    \ &b) { return modint(a) *= b; }\n    friend modint operator/(const modint &a,\
    \ const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n#line 4 \"test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp\"\
    \n\nint main() {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \    using mint = modint<998244353>;\n    ll n;\n    cin >> n;\n    vector<mint>\
    \ a(bit(n)), b(bit(n));\n    for (ll i : rep(bit(n))) cin >> a[i];\n    for (ll\
    \ i : rep(bit(n))) cin >> b[i];\n    for (ll i : rep(bit(n - 1))) {\n        swap(a[i],\
    \ a[i ^ ((bit(n) - 1))]);\n        swap(b[i], b[i ^ ((bit(n) - 1))]);\n    }\n\
    \    vector<mint> c = or_convolution(a, b);\n    for (ll i : rep(bit(n - 1)))\
    \ swap(c[i], c[i ^ ((bit(n) - 1))]);\n    for (mint ci : c) { cout << ci << \"\
    \ \"; }\n    cout << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/bitwise_and_convolution\"\
    \n#include \"../../math/and_or_convolution.hpp\"\n#include \"../../math/modint.hpp\"\
    \n\nint main() {\n    cin.tie(nullptr);\n    ios_base::sync_with_stdio(false);\n\
    \    using mint = modint<998244353>;\n    ll n;\n    cin >> n;\n    vector<mint>\
    \ a(bit(n)), b(bit(n));\n    for (ll i : rep(bit(n))) cin >> a[i];\n    for (ll\
    \ i : rep(bit(n))) cin >> b[i];\n    for (ll i : rep(bit(n - 1))) {\n        swap(a[i],\
    \ a[i ^ ((bit(n) - 1))]);\n        swap(b[i], b[i ^ ((bit(n) - 1))]);\n    }\n\
    \    vector<mint> c = or_convolution(a, b);\n    for (ll i : rep(bit(n - 1)))\
    \ swap(c[i], c[i ^ ((bit(n) - 1))]);\n    for (mint ci : c) { cout << ci << \"\
    \ \"; }\n    cout << endl;\n}"
  dependsOn:
  - math/and_or_convolution.hpp
  - template.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
  requiredBy: []
  timestamp: '2021-09-12 02:09:55+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
- /verify/test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp.html
title: test/judge.yosupo.jp/Bitwise_And_Convolution.1.test.cpp
---

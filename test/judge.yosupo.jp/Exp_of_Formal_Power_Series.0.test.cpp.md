---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':heavy_check_mark:'
    path: math/fps.hpp
    title: math/fps.hpp
  - icon: ':heavy_check_mark:'
    path: math/modint.hpp
    title: math/modint.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/exp_of_formal_power_series
    links:
    - https://judge.yosupo.jp/problem/exp_of_formal_power_series
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/exp_of_formal_power_series\"\
    \n#line 2 \"math/fps.hpp\"\n\n#line 2 \"template.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\n#define all(a) (a).begin(), (a).end()\nusing ll = long\
    \ long;\nusing ull = unsigned long long;\null bit(int n) { return 1ull << n; }\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T> T sq(const T &a) { return a * a; }\ntemplate\
    \ <typename T, typename U> bool chmax(T &a, const U &b) { return ((a < b) ? (a\
    \ = b, true) : (false)); }\ntemplate <typename T, typename U> bool chmin(T &a,\
    \ const U &b) { return ((a > b) ? (a = b, true) : (false)); }\ntemplate <typename\
    \ T> ostream &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n\n#ifdef\
    \ ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl;\
    \ }\ntemplate <typename Head, typename... Tail> void debug(Head &&head, Tail &&...\
    \ tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n\
    }\n#define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\n\nstruct rep {\n    struct itr {\n        int v;\n        itr(int v) :\
    \ v(v) {}\n        void operator++() { ++v; }\n        int operator*() const {\
    \ return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return l; };\n  \
    \  itr end() const { return r; };\n};\nstruct per {\n    struct itr {\n      \
    \  int v;\n        itr(int v) : v(v) {}\n        void operator++() { --v; }\n\
    \        int operator*() const { return v; }\n        bool operator!=(const itr\
    \ &i) const { return v != i.v; }\n    };\n    int l, r;\n    per(int r) : l(min(0,\
    \ r)), r(r) {}\n    per(int l, int r) : l(min(l, r)), r(r) {}\n    itr begin()\
    \ const { return r - 1; };\n    itr end() const { return l - 1; };\n};\n#line\
    \ 2 \"math/convolution.hpp\"\n\n#line 2 \"math/modint.hpp\"\n\n#line 4 \"math/modint.hpp\"\
    \n\ntemplate <ll MOD = 1000000007> struct modint {\n    ll val;\n    modint(ll\
    \ val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static\
    \ ll mod() { return MOD; }\n    modint inv() const {\n        ll a = val, b =\
    \ MOD, u = 1, v = 0, t;\n        while (b > 0) {\n            t = a / b;\n   \
    \         swap(a -= t * b, b);\n            swap(u -= t * v, v);\n        }\n\
    \        return modint(u);\n    }\n    modint pow(ll p) const {\n        modint\
    \ res = 1, mul = val;\n        while (p) {\n            if (p & 1) res *= mul;\n\
    \            mul *= mul;\n            p >>= 1;\n        }\n        return res;\n\
    \    }\n    modint &operator+=(const modint &a) {\n        if ((val += a.val)\
    \ >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator-=(const\
    \ modint &a) {\n        if ((val += MOD - a.val) >= MOD) val -= MOD;\n       \
    \ return *this;\n    }\n    modint &operator*=(const modint &a) {\n        (val\
    \ *= a.val) %= MOD;\n        return *this;\n    }\n    modint &operator/=(const\
    \ modint &a) { return *this *= a.inv(); }\n    bool operator==(const modint &a)\
    \ const { return val == a.val; }\n    bool operator!=(const modint &a) const {\
    \ return rel_ops::operator!=(*this, a); }\n    modint operator+() const { return\
    \ *this; }\n    modint operator-() const { return modint(-val); }\n    friend\
    \ modint operator+(const modint &a, const modint &b) { return modint(a) += b;\
    \ }\n    friend modint operator-(const modint &a, const modint &b) { return modint(a)\
    \ -= b; }\n    friend modint operator*(const modint &a, const modint &b) { return\
    \ modint(a) *= b; }\n    friend modint operator/(const modint &a, const modint\
    \ &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream &is,\
    \ modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\n#line 5 \"math/convolution.hpp\"\n\n\
    template <typename mint> void ntt(vector<mint> &a, bool inv = false) {\n    int\
    \ n = a.size(), m = n >> 1;\n    mint root = 2;\n    while (root.pow((mint::mod()\
    \ - 1) >> 1) == 1) root += 1;\n    mint wn = root.pow((mint::mod() - 1) / n);\n\
    \    if (inv) wn = wn.inv();\n    vector<mint> b(n);\n    for (int i = 1; i <\
    \ n; i <<= 1, wn *= wn, swap(a, b)) {\n        mint wj = 1;\n        for (int\
    \ j = 0; j < m; j += i, wj *= wn) {\n            for (int k : rep(i)) {\n    \
    \            b[(j << 1) + k + 0] = (a[j + k] + a[j + k + m]);\n              \
    \  b[(j << 1) + k + i] = (a[j + k] - a[j + k + m]) * wj;\n            }\n    \
    \    }\n    }\n    if (inv) {\n        mint ninv = mint(n).inv();\n        for\
    \ (int i : rep(n)) a[i] *= ninv;\n    }\n}\ntemplate <typename mint> void intt(vector<mint>\
    \ &a) { ntt(a, true); }\n\ntemplate <typename mint> vector<mint> convolution_naive(vector<mint>\
    \ a, vector<mint> b) {\n    int na = a.size(), nb = b.size();\n    vector<mint>\
    \ c(na + nb - 1);\n    if (na < nb) swap(a, b), swap(na, nb);\n    for (int i\
    \ : rep(na)) {\n        for (int j : rep(nb)) { c[i + j] += a[i] * b[j]; }\n \
    \   }\n    return c;\n}\n\ntemplate <typename mint> vector<mint> convolution_ntt(vector<mint>\
    \ a, vector<mint> b) {\n    int n_ = a.size() + b.size() - 1, n;\n    for (n =\
    \ 1; n < n_; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    ntt(a), ntt(b);\n\
    \    for (int i : rep(n)) a[i] *= b[i];\n    intt(a);\n    a.resize(n_);\n   \
    \ return a;\n}\n\ntemplate <typename mint> vector<mint> convolution(const vector<mint>\
    \ &a, const vector<mint> &b) {\n    if (min(a.size(), b.size()) <= 60) {\n   \
    \     return convolution_naive(a, b);\n    } else {\n        return convolution_ntt(a,\
    \ b);\n    }\n}\n#line 6 \"math/fps.hpp\"\n\ntemplate <typename mint> struct fps\
    \ : vector<mint> {\n    using vector<mint>::vector;\n    using vector<mint>::operator=;\n\
    \    fps() : vector<mint>() {}\n    fps(const mint &a) : vector<mint>(1, a) {}\n\
    \    fps(const fps &a) : vector<mint>(a) {}\n    fps &operator=(const fps &a)\
    \ {\n        *this = (vector<mint>)a;\n        return *this;\n    }\n    fps &operator+=(const\
    \ fps &a) {\n        if (a.size() > this->size()) this->resize(a.size());\n  \
    \      for (int i : rep(a.size())) (*this)[i] += a[i];\n        return *this;\n\
    \    }\n    fps &operator-=(const fps &a) {\n        if (a.size() > this->size())\
    \ this->resize(a.size());\n        for (int i : rep(a.size())) (*this)[i] -= a[i];\n\
    \        return *this;\n    }\n    fps &operator*=(const fps &a);\n    fps &operator/=(const\
    \ mint &a) {\n        for (int i : rep(this->size())) (*this)[i] /= a;\n     \
    \   return *this;\n    };\n    fps &operator>>=(int d) {\n        if ((int)this->size()\
    \ <= d) {\n            *this = {};\n        } else {\n            this->erase(this->begin(),\
    \ this->begin() + d);\n        }\n        return *this;\n    }\n    fps &operator<<=(int\
    \ d) {\n        this->insert(this->begin(), d, mint(0));\n        return *this;\n\
    \    }\n    fps &chdot(const fps &a) {\n        for (int i : rep(this->size()))\
    \ {\n            if (i < (int)a.size()) {\n                (*this)[i] *= a[i];\n\
    \            } else {\n                (*this)[i] = 0;\n            }\n      \
    \  }\n        return *this;\n    }\n    fps prefix(int d) const { return fps(this->begin(),\
    \ this->begin() + min((int)this->size(), d)); }\n    fps differential() const\
    \ {\n        int n = this->size();\n        fps ret(max(0, n - 1));\n        for\
    \ (int i : rep(1, n)) { ret[i - 1] = i * (*this)[i]; }\n        return ret;\n\
    \    }\n    fps integral() const {\n        int n = this->size();\n        fps\
    \ ret(n + 1);\n        ret[0] = mint(0);\n        if (n > 0) ret[1] = mint(1);\n\
    \        for (int i : rep(2, n + 1)) ret[i] = (-ret[mint::mod() % i]) * (mint::mod()\
    \ / i);\n        for (int i : rep(n)) ret[i + 1] *= (*this)[i];\n        return\
    \ ret;\n    }\n    fps inv(int d = -1) const {\n        if (d == -1) d = this->size();\n\
    \        fps ret{(*this)[0].inv()};\n        for (int m = 1; m < d; m <<= 1) ret\
    \ = (ret + ret - ret * ret * this->prefix(m << 1)).prefix(m << 1);\n        return\
    \ ret.prefix(d);\n    }\n    fps log(int d = -1) const {\n        assert((*this)[0]\
    \ == mint(1));\n        if (d == -1) d = this->size();\n        return (this->differential()\
    \ * this->inv(d)).prefix(d - 1).integral();\n    }\n    fps exp(int d = -1) const\
    \ {\n        assert(this->size() == 0 || (*this)[0] == mint(0));\n        if (d\
    \ == -1) d = this->size();\n        fps ret{1};\n        for (int m = 1; m < d;\
    \ m <<= 1) ret = (ret * (this->prefix(m << 1) + mint(1) - ret.log(m << 1))).prefix(m\
    \ << 1);\n        return ret.prefix(d);\n    }\n    fps pow(ll k, int d = -1)\
    \ const {\n        if (d == -1) d = this->size();\n        for (int i : rep(this->size()))\
    \ {\n            if ((*this)[i] != mint(0)) {\n                if (i * k > d)\
    \ return fps(d);\n                fps ret = (((*this * (*this)[i].inv()) >> i).log(d)\
    \ * mint(k)).exp(d) * ((*this)[i].pow(k));\n                ret = (ret << (i *\
    \ k)).prefix(d);\n                ret.resize(d);\n                return ret;\n\
    \            }\n        }\n        return fps(d);\n    }\n    friend fps operator+(const\
    \ fps &a) { return a; }\n    friend fps operator-(const fps &a) { return fps()\
    \ -= a; }\n    friend fps operator+(const fps &a, const fps &b) { return fps(a)\
    \ += b; }\n    friend fps operator-(const fps &a, const fps &b) { return fps(a)\
    \ -= b; }\n    friend fps operator*(const fps &a, const fps &b) { return fps(a)\
    \ *= b; }\n    friend fps operator>>(const fps &a, int d) { return fps(a) >>=\
    \ d; }\n    friend fps operator<<(const fps &a, int d) { return fps(a) <<= d;\
    \ }\n};\n\nusing m9 = modint<998244353>;\n\ntemplate <> fps<m9> &fps<m9>::operator*=(const\
    \ fps<m9> &a) {\n    *this = convolution(*this, a);\n    return *this;\n}\n\n\
    template <> fps<m9> fps<m9>::inv(int d) const {\n    if (d == -1) d = this->size();\n\
    \    fps ret{(*this)[0].inv()};\n    for (int m = 1; m < d; m <<= 1) {\n     \
    \   fps f = this->prefix(m << 1);\n        fps g = ret;\n        f.resize(m <<\
    \ 1), ntt(f);\n        g.resize(m << 1), ntt(g);\n        f.chdot(g);\n      \
    \  intt(f);\n        f >>= m, f.resize(m << 1), ntt(f);\n        f.chdot(g);\n\
    \        intt(f);\n        f = -f;\n        ret.insert(ret.end(), f.begin(), f.begin()\
    \ + m);\n    }\n    return ret.prefix(d);\n}\n\ntemplate <> fps<m9> fps<m9>::exp(int\
    \ d) const {\n    using mint = m9;\n    assert(this->size() == 0 || (*this)[0]\
    \ == mint(0));\n    if (d == -1) d = this->size();\n    fps ret{1}, g{1}, g_freq{1};\n\
    \    for (int m = 1; m < d; m <<= 1) {\n        fps ret_freq = ret.prefix(m);\n\
    \        ret_freq.resize(m << 1), ntt(ret_freq);\n\n        fps g_cont = g_freq;\n\
    \        for (int i : rep(m)) g_cont[i] *= ret_freq[i << 1];\n        intt(g_cont);\n\
    \        g_cont >>= m >> 1;\n        g_cont.resize(m), ntt(g_cont);\n        g_cont.chdot(g_freq);\n\
    \        intt(g_cont);\n        g_cont = -g_cont;\n        g.insert(g.end(), g_cont.begin(),\
    \ g_cont.begin() + (m >> 1));\n\n        fps r = this->differential().prefix(m\
    \ - 1);\n        r.resize(m), ntt(r);\n        for (int i : rep(m)) r[i] *= ret_freq[i\
    \ << 1];\n        intt(r);\n\n        fps t = ret.differential() - r;\n      \
    \  t.insert(t.begin(), t.back()), t.pop_back();\n        t.resize(m << 1), ntt(t);\n\
    \        g_freq = g, g_freq.resize(m << 1), ntt(g_freq);\n        t.chdot(g_freq);\n\
    \        intt(t), t.resize(m);\n\n        fps u = (this->prefix(m << 1) - (t <<\
    \ m - 1).integral()) >> m;\n        u.resize(m << 1), ntt(u);\n        u.chdot(ret_freq);\n\
    \        intt(u);\n\n        ret += u.prefix(m) << m;\n    }\n    return ret.prefix(d);\n\
    }\n#line 3 \"test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp\"\n\n\
    int main() {\n    using mint = modint<998244353>;\n    ll n;\n    cin >> n;\n\
    \    fps<mint> a(n);\n    for (ll i : rep(n)) cin >> a[i];\n    fps<mint> b =\
    \ a.exp();\n    for (ll i : rep(n)) cout << b[i] << \" \";\n    cout << endl;\n\
    }\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/exp_of_formal_power_series\"\
    \n#include \"../../math/fps.hpp\"\n\nint main() {\n    using mint = modint<998244353>;\n\
    \    ll n;\n    cin >> n;\n    fps<mint> a(n);\n    for (ll i : rep(n)) cin >>\
    \ a[i];\n    fps<mint> b = a.exp();\n    for (ll i : rep(n)) cout << b[i] << \"\
    \ \";\n    cout << endl;\n}"
  dependsOn:
  - math/fps.hpp
  - template.hpp
  - math/convolution.hpp
  - math/modint.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
  requiredBy: []
  timestamp: '2021-08-31 07:58:43+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
- /verify/test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp.html
title: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
---
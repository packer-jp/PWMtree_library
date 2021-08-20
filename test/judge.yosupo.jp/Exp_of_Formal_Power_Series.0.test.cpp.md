---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: math/convolution.hpp
    title: math/convolution.hpp
  - icon: ':question:'
    path: math/fps.hpp
    title: math/fps.hpp
  - icon: ':question:'
    path: math/modint.hpp
    title: math/modint.hpp
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
    \ <typename T, typename U> bool chmax(T &a, const U &b) {\n    if (a < b) {\n\
    \        a = b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename\
    \ T, typename U> bool chmin(T &a, const U &b) {\n    if (b < a) {\n        a =\
    \ b;\n        return true;\n    }\n    return false;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n \
    \   for (auto itr = a.begin(); itr != a.end(); itr++) { os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\"); }\n    os << \")\";\n    return os;\n}\n\n#ifdef\
    \ ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl;\
    \ }\ntemplate <typename Head, typename... Tail> void debug(Head &&head, Tail &&...\
    \ tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n\
    }\n#define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
    #endif\n\nstruct rep {\n    struct itr {\n        int v;\n        itr(int v) :\
    \ v(v) {}\n        void operator++() { ++v; }\n        int operator*() const {\
    \ return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    rep(int r) : l(0), r(r) {}\n    rep(int l, int\
    \ r) : l(l), r(r) {}\n    itr begin() const { return l; };\n    itr end() const\
    \ { return r; };\n};\nstruct per {\n    struct itr {\n        int v;\n       \
    \ itr(int v) : v(v) {}\n        void operator++() { --v; }\n        int operator*()\
    \ const { return v; }\n        bool operator!=(const itr &i) const { return v\
    \ != i.v; }\n    };\n    int l, r;\n    per(int r) : l(0), r(r) {}\n    per(int\
    \ l, int r) : l(l), r(r) {}\n    itr begin() const { return r - 1; };\n    itr\
    \ end() const { return l - 1; };\n};\n#line 2 \"math/convolution.hpp\"\n\n#line\
    \ 2 \"math/modint.hpp\"\n\n#line 4 \"math/modint.hpp\"\n\ntemplate <ll MOD = 1000000007>\
    \ struct modint {\n    ll val;\n    modint(ll val = 0) : val(val >= 0 ? val %\
    \ MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return MOD; }\n\
    \    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0, t;\n   \
    \     while (b > 0) {\n            t = a / b;\n            swap(a -= t * b, b);\n\
    \            swap(u -= t * v, v);\n        }\n        return modint(u);\n    }\n\
    \    modint pow(ll p) const {\n        modint res = 1, mul = val;\n        while\
    \ (p) {\n            if (p & 1) res *= mul;\n            mul *= mul;\n       \
    \     p >>= 1;\n        }\n        return res;\n    }\n    modint &operator+=(const\
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
    \    }\n    fps prefix(int d) const { return fps(this->begin(), this->begin()\
    \ + min((int)this->size(), d)); }\n    fps differential() const {\n        int\
    \ n = this->size();\n        fps ret(max(0, n - 1));\n        for (int i : rep(1,\
    \ n)) { ret[i - 1] = i * (*this)[i]; }\n        return ret;\n    }\n    fps integral()\
    \ const {\n        int n = this->size();\n        fps ret(n + 1);\n        ret[0]\
    \ = mint(0);\n        if (n > 0) ret[1] = mint(1);\n        for (int i : rep(2,\
    \ n + 1)) ret[i] = (-ret[mint::mod() % i]) * (mint::mod() / i);\n        for (int\
    \ i : rep(n)) ret[i + 1] *= (*this)[i];\n        return ret;\n    }\n    fps inv(int\
    \ d = -1) const {\n        if (d == -1) d = this->size();\n        fps ret{(*this)[0].inv()};\n\
    \        for (int m = 1; m < d; m <<= 1) ret = (ret + ret - ret * ret * this->prefix(m\
    \ << 1)).prefix(m << 1);\n        return ret.prefix(d);\n    }\n    fps log(int\
    \ d = -1) const {\n        assert((*this)[0] == mint(1));\n        if (d == -1)\
    \ d = this->size();\n        return (this->differential() * this->inv(d)).prefix(d\
    \ - 1).integral();\n    }\n    fps exp(int d = -1) const {\n        assert(this->size()\
    \ == 0 || (*this)[0] == mint(0));\n        if (d == -1) d = this->size();\n  \
    \      fps ret{1};\n        for (int m = 1; m < d; m <<= 1) ret = (ret * (prefix(m\
    \ << 1) + mint(1) - ret.log(m << 1))).prefix(m << 1);\n        return ret.prefix(d);\n\
    \    }\n    fps pow(ll k, int d = -1) const {\n        if (d == -1) d = this->size();\n\
    \        for (int i : rep(this->size())) {\n            if ((*this)[i] != mint(0))\
    \ {\n                if (i * k > d) return fps(d);\n                fps ret =\
    \ (((*this * (*this)[i].inv()) >> i).log(d) * mint(k)).exp(d) * ((*this)[i].pow(k));\n\
    \                ret = (ret << (i * k)).prefix(d);\n                ret.resize(d);\n\
    \                return ret;\n            }\n        }\n        return fps(d);\n\
    \    }\n    friend fps operator+(const fps &a) { return a; }\n    friend fps operator-(const\
    \ fps &a) { return fps() -= a; }\n    friend fps operator+(const fps &a, const\
    \ fps &b) { return fps(a) += b; }\n    friend fps operator-(const fps &a, const\
    \ fps &b) { return fps(a) -= b; }\n    friend fps operator*(const fps &a, const\
    \ fps &b) { return fps(a) *= b; }\n    friend fps operator>>(const fps &a, int\
    \ d) { return fps(a) >>= d; }\n    friend fps operator<<(const fps &a, int d)\
    \ { return fps(a) <<= d; }\n};\n\nusing m9 = modint<998244353>;\n\ntemplate <>\
    \ fps<m9> &fps<m9>::operator*=(const fps<m9> &a) {\n    *this = convolution(*this,\
    \ a);\n    return *this;\n}\ntemplate <> fps<m9> fps<m9>::inv(int d) const {\n\
    \    using mint = m9;\n    if (d == -1) d = this->size();\n    fps ret{(*this)[0].inv()};\n\
    \    for (int m = 1; m < d; m <<= 1) {\n        fps f = this->prefix(m << 1);\n\
    \        fps g = ret;\n        f.resize(m << 1), ntt(f);\n        g.resize(m <<\
    \ 1), ntt(g);\n        for (int i : rep(m << 1)) f[i] *= g[i];\n        intt(f);\n\
    \        f >>= m, f.resize(m << 1), ntt(f);\n        for (int i : rep(m << 1))\
    \ f[i] *= g[i];\n        intt(f);\n        f *= mint(-1);\n        ret.insert(ret.end(),\
    \ f.begin(), f.begin() + m);\n    }\n    return ret.prefix(d);\n}\n\n/*\ntemplate\
    \ <> fps<m9> fps<m9>::exp(int d) const {\n    using mint = m9;\n    int n = this->size();\n\
    \    assert(n > 0 && (*this)[0] == 0);\n    if (d == -1) d = n;\n    assert(d\
    \ >= 0);\n    fps g{1}, g_fft{1, 1};\n    fps ret = *this;\n    ret[0] = 1;\n\
    \    ret.resize(d);\n    fps h_drv(ret.differential());\n    for (int m = 2; m\
    \ < d; m *= 2) {\n        // prepare\n        fps f_fft(ret.begin(), ret.begin()\
    \ + m);\n        f_fft.resize(2 * m), ntt(f_fft);\n\n        // Step 2.a'\n  \
    \      {\n            fps _g(m);\n            for (int i : rep(m)) _g[i] = f_fft[i]\
    \ * g_fft[i];\n            intt(_g), _g *= mint(_g.size());\n            _g.erase(_g.begin(),\
    \ _g.begin() + m / 2);\n            _g.resize(m), ntt(_g);\n            for (int\
    \ i : rep(m)) _g[i] *= g_fft[i];\n            intt(_g), _g *= mint(_g.size());\n\
    \            _g.resize(m / 2);\n            _g /= -m * m;\n            g.insert(g.end(),\
    \ _g.begin(), _g.begin() + m / 2);\n        }\n\n        // Step 2.b'--d'\n  \
    \      fps t(ret.begin(), ret.begin() + m);\n        t = t.differential();\n \
    \       {\n            // Step 2.b'\n            fps r{h_drv.begin(), h_drv.begin()\
    \ + m - 1};\n            // Step 2.c'\n            r.resize(m);\n            ntt(r);\n\
    \            for (int i : rep(m)) r[i] *= f_fft[i];\n            intt(r), r *=\
    \ mint(r.size());\n            r /= -m;\n            // Step 2.d'\n          \
    \  t += r;\n            t.insert(t.begin(), t.back());\n            t.pop_back();\n\
    \        }\n\n        // Step 2.e'\n        if (2 * m < d) {\n            t.resize(2\
    \ * m);\n            ntt(t);\n            g_fft = g;\n            g_fft.resize(2\
    \ * m);\n            ntt(g_fft);\n            for (int i : rep(2 * m)) t[i] *=\
    \ g_fft[i];\n            intt(t), t *= mint(t.size());\n            t.resize(m);\n\
    \            t /= 2 * m;\n        } else { // \u3053\u306E\u5834\u5408\u5206\u3051\
    \u3092\u3057\u3066\u3082\u6570\u30D1\u30FC\u30BB\u30F3\u30C8\u3057\u304B\u901F\
    \u304F\u306A\u3089\u306A\u3044\n            fps g1(g.begin() + m / 2, g.end());\n\
    \            fps s1(t.begin() + m / 2, t.end());\n            t.resize(m / 2);\n\
    \            g1.resize(m), ntt(g1);\n            t.resize(m), ntt(t);\n      \
    \      s1.resize(m), ntt(s1);\n            for (int i : rep(m)) s1[i] = g_fft[i]\
    \ * s1[i] + g1[i] * t[i];\n            for (int i : rep(m)) t[i] *= g_fft[i];\n\
    \            intt(t), t *= mint(t.size());\n            intt(s1), s1 *= mint(s1.size());\n\
    \            for (int i : rep(m / 2)) t[i + m / 2] += s1[i];\n            t /=\
    \ m;\n        }\n\n        // Step 2.f'\n        fps v(ret.begin() + m, ret.begin()\
    \ + min(d, 2 * m));\n        v.resize(m);\n        t.insert(t.begin(), m - 1,\
    \ 0);\n        t.push_back(0);\n        t = t.integral();\n        for (int i\
    \ : rep(m)) v[i] -= t[m + i];\n\n        // Step 2.g'\n        v.resize(2 * m);\n\
    \        ntt(v);\n        for (int i : rep(2 * m)) v[i] *= f_fft[i];\n       \
    \ intt(v), v *= mint(v.size());\n        v.resize(m);\n        v /= 2 * m;\n\n\
    \        // Step 2.h'\n        for (int i : rep(min(d - m, m))) ret[m + i] = v[i];\n\
    \    }\n    return ret;\n}\n*/\n\ntemplate <> fps<m9> fps<m9>::exp(int deg) const\
    \ {\n    using mint = m9;\n    assert((*this).size() == 0 || (*this)[0] == mint(0));\n\
    \    if (deg == -1) deg = this->size();\n\n    fps inv;\n    inv.reserve(deg +\
    \ 1);\n    inv.push_back(mint(0));\n    inv.push_back(mint(1));\n\n    auto inplace_integral\
    \ = [&](fps &F) -> void {\n        const int n = (int)F.size();\n        auto\
    \ mod = mint::mod();\n        while ((int)inv.size() <= n) {\n            int\
    \ i = inv.size();\n            inv.push_back((-inv[mod % i]) * (mod / i));\n \
    \       }\n        F.insert(F.begin(), mint(0));\n        for (int i = 1; i <=\
    \ n; i++) F[i] *= inv[i];\n    };\n\n    auto inplace_diff = [](fps &F) -> void\
    \ {\n        if (F.empty()) return;\n        F.erase(F.begin());\n        mint\
    \ coeff = 1, one = 1;\n        for (int i = 0; i < (int)F.size(); i++) {\n   \
    \         F[i] *= coeff;\n            coeff += one;\n        }\n    };\n\n   \
    \ fps b{1, 1 < (int)this->size() ? (*this)[1] : 0}, c{1}, z1, z2{1, 1};\n    for\
    \ (int m = 2; m < deg; m *= 2) {\n        auto y = b;\n        y.resize(2 * m);\n\
    \        ntt(y);\n        z1 = z2;\n        fps z(m);\n        for (int i = 0;\
    \ i < m; ++i) z[i] = y[i] * z1[i];\n        intt(z);\n        fill(z.begin(),\
    \ z.begin() + m / 2, mint(0));\n        ntt(z);\n        for (int i = 0; i < m;\
    \ ++i) z[i] *= -z1[i];\n        intt(z);\n        c.insert(c.end(), z.begin()\
    \ + m / 2, z.end());\n        z2 = c;\n        z2.resize(2 * m);\n        ntt(z2);\n\
    \        fps x(this->begin(), this->begin() + min<int>(this->size(), m));\n  \
    \      inplace_diff(x);\n        x.push_back(mint(0));\n        ntt(x);\n    \
    \    for (int i = 0; i < m; ++i) x[i] *= y[i];\n        intt(x);\n        x -=\
    \ b.differential();\n        x.resize(2 * m);\n        for (int i = 0; i < m -\
    \ 1; ++i) x[m + i] = x[i], x[i] = mint(0);\n        ntt(x);\n        for (int\
    \ i = 0; i < 2 * m; ++i) x[i] *= z2[i];\n        intt(x);\n        x.pop_back();\n\
    \        inplace_integral(x);\n        for (int i = m; i < min<int>(this->size(),\
    \ 2 * m); ++i) x[i] += (*this)[i];\n        fill(x.begin(), x.begin() + m, mint(0));\n\
    \        ntt(x);\n        for (int i = 0; i < 2 * m; ++i) x[i] *= y[i];\n    \
    \    intt(x);\n        b.insert(b.end(), x.begin() + m, x.end());\n    }\n   \
    \ return b.prefix(deg);\n}\n#line 3 \"test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp\"\
    \n\nint main() {\n    using mint = modint<998244353>;\n    ll n;\n    cin >> n;\n\
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
  timestamp: '2021-08-20 12:25:18+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
- /verify/test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp.html
title: test/judge.yosupo.jp/Exp_of_Formal_Power_Series.0.test.cpp
---

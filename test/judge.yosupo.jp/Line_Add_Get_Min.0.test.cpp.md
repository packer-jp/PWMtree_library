---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data_structure/cht.hpp
    title: Convex Hull Trick
  - icon: ':x:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/line_add_get_min
    links:
    - https://judge.yosupo.jp/problem/line_add_get_min
  bundledCode: "#line 1 \"test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/line_add_get_min\"\n#line 2 \"data_structure/cht.hpp\"\
    \n\n#line 1 \"template.hpp\"\n#include <bits/stdc++.h>\nusing namespace std;\n\
    \n#define all(a) begin(a), end(a)\n#define rall(a) rbegin(a), rend(a)\n#define\
    \ uniq(a) (a).erase(unique(all(a)), (a).end())\nusing ll = long long;\nusing ull\
    \ = unsigned long long;\nusing pll = pair<ll, ll>;\nusing vll = vector<ll>;\n\
    constexpr double PI = 3.14159265358979323846;\nconstexpr ll dy[9] = {0, 1, 0,\
    \ -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1, 0, 1, -1, -1, 1, 0};\n\
    constexpr ll sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a,\
    \ ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll\
    \ b) { return -fdiv(-a, b); }\nconstexpr ull bit(int n) { return 1ull << n; }\n\
    template <typename T> constexpr T mypow(T x, ll n) {\n    T ret = 1;\n    while\
    \ (n) {\n        if (n & 1) ret *= x;\n        x *= x;\n        n >>= 1;\n   \
    \ }\n    return ret;\n}\nconstexpr ll modpow(ll x, ll n, ll mod) {\n    ll ret\
    \ = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x *= x;\n     \
    \   n >>= 1;\n        x %= mod;\n        ret %= mod;\n    }\n    return ret;\n\
    }\ntemplate <typename T> T xor64(T lb, T ub) {\n    static ull x = 88172645463325252ull;\n\
    \    x ^= x << 7;\n    return lb + (x ^= x >> 9) % (ub - lb);\n}\nconstexpr ll\
    \ safemod(ll x, ll mod) { return (x % mod + mod) % mod; }\ntemplate <typename\
    \ T> constexpr T sq(const T &a) { return a * a; }\ntemplate <typename T> using\
    \ priority_queue_rev = priority_queue<T, vector<T>, greater<T>>;\ntemplate <typename\
    \ T, typename U> bool chmax(T &a, const U &b) { return a < b ? a = b, true : false;\
    \ }\ntemplate <typename T, typename U> bool chmin(T &a, const U &b) { return a\
    \ > b ? a = b, true : false; }\ntemplate <typename T> T make_vector(T &&a) { return\
    \ a; }\ntemplate <typename... Ts> auto make_vector(int h, Ts &&... ts) { return\
    \ vector(h, make_vector(ts...)); }\ntemplate <typename T, typename U> ostream\
    \ &operator<<(ostream &os, const pair<T, U> &a) {\n    os << \"(\" << a.first\
    \ << \", \" << a.second << \")\";\n    return os;\n}\ntemplate <typename T, typename\
    \ U, typename V> ostream &operator<<(ostream &os, const tuple<T, U, V> &a) {\n\
    \    os << \"(\" << get<0>(a) << \", \" << get<1>(a) << \", \" << get<2>(a) <<\
    \ \")\";\n    return os;\n}\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const set<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin(); itr\
    \ != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n \
    \   os << \")\";\n    return os;\n}\ntemplate <typename T> ostream &operator<<(ostream\
    \ &os, const multiset<T> &a) {\n    os << \"(\";\n    for (auto itr = a.begin();\
    \ itr != a.end(); ++itr) os << *itr << (next(itr) != a.end() ? \", \" : \"\");\n\
    \    os << \")\";\n    return os;\n}\ntemplate <typename T, typename U> ostream\
    \ &operator<<(ostream &os, const map<T, U> &a) {\n    os << \"(\";\n    for (auto\
    \ itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\n#ifdef ONLINE_JUDGE\n\
    #define dump(...) (void(0))\n#else\nvoid debug() { cerr << endl; }\ntemplate <typename\
    \ Head, typename... Tail> void debug(Head &&head, Tail &&... tail) {\n    cerr\
    \ << head;\n    if (sizeof...(Tail)) cerr << \", \";\n    debug(tail...);\n}\n\
    #define dump(...) cerr << __LINE__ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n\
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
    \    };\n} iOS;\n\ntemplate <ll MOD = 1000000007> struct modint {\n    ll val;\n\
    \    modint(ll val = 0) : val(val >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD)\
    \ {}\n    static ll mod() { return MOD; }\n    modint inv() const {\n        ll\
    \ a = val, b = MOD, u = 1, v = 0, t;\n        while (b > 0) {\n            t =\
    \ a / b;\n            swap(a -= t * b, b);\n            swap(u -= t * v, v);\n\
    \        }\n        return modint(u);\n    }\n    modint pow(ll k) const {\n \
    \       modint ret = 1, mul = val;\n        while (k) {\n            if (k & 1)\
    \ ret *= mul;\n            mul *= mul;\n            k >>= 1;\n        }\n    \
    \    return ret;\n    }\n    modint &operator+=(const modint &a) {\n        if\
    \ ((val += a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint\
    \ &operator-=(const modint &a) {\n        if ((val += MOD - a.val) >= MOD) val\
    \ -= MOD;\n        return *this;\n    }\n    modint &operator*=(const modint &a)\
    \ {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n    modint\
    \ &operator/=(const modint &a) { return *this *= a.inv(); }\n    modint operator+()\
    \ const { return *this; }\n    modint operator-() const { return modint(-val);\
    \ }\n    friend bool operator==(const modint &a, const modint &b) { return a.val\
    \ == b.val; }\n    friend bool operator!=(const modint &a, const modint &b) {\
    \ return rel_ops::operator!=(a, b); }\n    friend modint operator+(const modint\
    \ &a, const modint &b) { return modint(a) += b; }\n    friend modint operator-(const\
    \ modint &a, const modint &b) { return modint(a) -= b; }\n    friend modint operator*(const\
    \ modint &a, const modint &b) { return modint(a) *= b; }\n    friend modint operator/(const\
    \ modint &a, const modint &b) { return modint(a) /= b; }\n    friend istream &operator>>(istream\
    \ &is, modint &a) {\n        ll val;\n        is >> val;\n        a = modint(val);\n\
    \        return is;\n    }\n    friend ostream &operator<<(ostream &os, const\
    \ modint &a) { return os << a.val; }\n};\ntemplate <typename F> ll bisect(ll ok,\
    \ ll ng, F f) {\n    while (abs(ok - ng) > 1) {\n        ll mid = (ok + ng) /\
    \ 2;\n        (f(mid) ? ok : ng) = mid;\n    }\n    return ok;\n}\n\nint main()\
    \ {}\n#line 4 \"data_structure/cht.hpp\"\n\ntemplate <typename S, bool MIN> struct\
    \ cht {\n    using V = typename S::val_t;\n    struct line {\n        mutable\
    \ V a, b, l, r;\n        bool operator<(const line &o) const { return a < o.a;\
    \ };\n        bool operator<(V x) const { return r < x; };\n    };\n    set<line,\
    \ less<>> lines;\n    void add(V a, V b) {\n        if (MIN) a = -a, b = -b;\n\
    \        line cur = {a, b, -S::inf(), S::inf()};\n        auto p = lines.lower_bound(cur);\n\
    \        if (p != lines.end() && p->a == a) {\n            if (p->b > b) {\n \
    \               return;\n            } else {\n                p = lines.erase(p);\n\
    \            }\n        }\n        auto fi = [](const line &s, const line &t)\
    \ -> V { return S::div(-s.b + t.b, s.a - t.a); };\n        auto ci = [](const\
    \ line &s, const line &t) -> V { return -S::div(s.b - t.b, s.a - t.a); };\n  \
    \      if (p != lines.begin() && ci(cur, *prev(p)) >= prev(p)->r && p != lines.end()\
    \ && fi(cur, *p) <= p->l) return;\n        while (p != lines.begin()) {\n    \
    \        auto pp = prev(p);\n            if (ci(cur, *pp) <= pp->l) {\n      \
    \          lines.erase(pp);\n                continue;\n            }\n      \
    \      cur.l = ci(cur, *pp), pp->r = fi(cur, *pp);\n            break;\n     \
    \   }\n        while (p != lines.end()) {\n            if (fi(cur, *p) >= p->r)\
    \ {\n                p = lines.erase(p);\n                continue;\n        \
    \    }\n            cur.r = fi(cur, *p), p->l = ci(cur, *p);\n            break;\n\
    \        }\n        lines.insert(cur);\n    }\n    V get(V c) {\n        line\
    \ l = *lines.lower_bound(c);\n        V ret = l.a * c + l.b;\n        if (MIN)\
    \ ret = -ret;\n        return ret;\n    }\n};\n\nstruct ll_cht {\n    using val_t\
    \ = ll;\n    static val_t div(val_t num, val_t den) { return fdiv(num, den); }\n\
    \    static val_t inf() { return LLONG_MAX; }\n};\n\nstruct double_cht {\n   \
    \ using val_t = double;\n    static val_t div(val_t num, val_t den) { return num\
    \ / den; }\n    static val_t inf() { return numeric_limits<double>::infinity();\
    \ }\n};\n#line 3 \"test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp\"\n\nint main()\
    \ {\n    ll n, q;\n    cin >> n >> q;\n    cht<ll_cht, true> cht;\n    for (ll\
    \ i : rep(n)) {\n        ll a, b;\n        cin >> a >> b;\n        cht.add(a,\
    \ b);\n    }\n    for (ll i : rep(q)) {\n        ll t;\n        cin >> t;\n  \
    \      if (t == 0) {\n            ll a, b;\n            cin >> a >> b;\n     \
    \       cht.add(a, b);\n        }\n        if (t == 1) {\n            ll p;\n\
    \            cin >> p;\n            cout << cht.get(p) << endl;\n        }\n \
    \   }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/line_add_get_min\"\n#include\
    \ \"../../data_structure/cht.hpp\"\n\nint main() {\n    ll n, q;\n    cin >> n\
    \ >> q;\n    cht<ll_cht, true> cht;\n    for (ll i : rep(n)) {\n        ll a,\
    \ b;\n        cin >> a >> b;\n        cht.add(a, b);\n    }\n    for (ll i : rep(q))\
    \ {\n        ll t;\n        cin >> t;\n        if (t == 0) {\n            ll a,\
    \ b;\n            cin >> a >> b;\n            cht.add(a, b);\n        }\n    \
    \    if (t == 1) {\n            ll p;\n            cin >> p;\n            cout\
    \ << cht.get(p) << endl;\n        }\n    }\n}"
  dependsOn:
  - data_structure/cht.hpp
  - template.hpp
  isVerificationFile: true
  path: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
  requiredBy: []
  timestamp: '2021-11-16 21:28:12+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
- /verify/test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp.html
title: test/judge.yosupo.jp/Line_Add_Get_Min.0.test.cpp
---
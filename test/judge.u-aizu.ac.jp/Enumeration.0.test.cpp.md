---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/and_or_convolution.hpp
    title: "and / or \u7573\u307F\u8FBC\u307F"
  - icon: ':x:'
    path: math/fzt_fmt.hpp
    title: "\u9AD8\u901F Zeta / Moebius \u5909\u63DB"
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
    ERROR: 1e-7
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446
  bundledCode: "#line 1 \"test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446\"\n\
    #define ERROR 1e-7\n#line 2 \"math/and_or_convolution.hpp\"\n\n#line 1 \"template.hpp\"\
    \n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) begin(a), end(a)\n\
    #define rall(a) rbegin(a), rend(a)\n#define uniq(a) (a).erase(unique(all(a)),\
    \ (a).end())\nusing ll = long long;\nusing ull = unsigned long long;\nusing pll\
    \ = pair<ll, ll>;\nusing vll = vector<ll>;\nconstexpr double PI = 3.14159265358979323846;\n\
    constexpr ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1,\
    \ 0, -1, 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a <\
    \ 0); }\nconstexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b);\
    \ }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int\
    \ n) { return 1ull << n; }\ntemplate <typename T> constexpr T mypow(T x, ll n)\
    \ {\n    T ret = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x\
    \ *= x;\n        n >>= 1;\n    }\n    return ret;\n}\nconstexpr ll modpow(ll x,\
    \ ll n, ll mod) {\n    ll ret = 1;\n    while (n) {\n        if (n & 1) ret *=\
    \ x;\n        x *= x;\n        n >>= 1;\n        x %= mod;\n        ret %= mod;\n\
    \    }\n    return ret;\n}\ntemplate <typename T> T xor64(T lb, T ub) {\n    static\
    \ ull x = 88172645463325252ull;\n    x ^= x << 7;\n    return lb + (x ^= x >>\
    \ 9) % (ub - lb);\n}\nconstexpr ll safemod(ll x, ll mod) { return (x % mod + mod)\
    \ % mod; }\ntemplate <typename T> constexpr T sq(const T &a) { return a * a; }\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return a < b ? a = b, true : false; }\ntemplate <typename T, typename U> bool\
    \ chmin(T &a, const U &b) { return a > b ? a = b, true : false; }\ntemplate <typename\
    \ T> T make_vector(T &&a) { return a; }\ntemplate <typename... Ts> auto make_vector(int\
    \ h, Ts &&... ts) { return vector(h, make_vector(ts...)); }\ntemplate <typename\
    \ T, typename U> ostream &operator<<(ostream &os, const pair<T, U> &a) {\n   \
    \ os << \"(\" << a.first << \", \" << a.second << \")\";\n    return os;\n}\n\
    template <typename T, typename U, typename V> ostream &operator<<(ostream &os,\
    \ const tuple<T, U, V> &a) {\n    os << \"(\" << get<0>(a) << \", \" << get<1>(a)\
    \ << \", \" << get<2>(a) << \")\";\n    return os;\n}\ntemplate <typename T> ostream\
    \ &operator<<(ostream &os, const vector<T> &a) {\n    os << \"(\";\n    for (auto\
    \ itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const set<T> &a) {\n    os << \"(\";\n    for\
    \ (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr) != a.end()\
    \ ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate <typename T>\
    \ ostream &operator<<(ostream &os, const multiset<T> &a) {\n    os << \"(\";\n\
    \    for (auto itr = a.begin(); itr != a.end(); ++itr) os << *itr << (next(itr)\
    \ != a.end() ? \", \" : \"\");\n    os << \")\";\n    return os;\n}\ntemplate\
    \ <typename T, typename U> ostream &operator<<(ostream &os, const map<T, U> &a)\
    \ {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); ++itr) os\
    \ << *itr << (next(itr) != a.end() ? \", \" : \"\");\n    os << \")\";\n    return\
    \ os;\n}\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\nvoid debug()\
    \ { cerr << endl; }\ntemplate <typename Head, typename... Tail> void debug(Head\
    \ &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail)) cerr\
    \ << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__ << \"\
    : \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\nstruct rep {\n  \
    \  struct itr {\n        ll v;\n        itr(ll v) : v(v) {}\n        void operator++()\
    \ { ++v; }\n        ll operator*() const { return v; }\n        bool operator!=(itr\
    \ i) const { return v < *i; }\n    };\n    ll l, r;\n    rep(ll l, ll r) : l(l),\
    \ r(r) {}\n    rep(ll r) : rep(0, r) {}\n    itr begin() const { return l; };\n\
    \    itr end() const { return r; };\n};\nstruct per {\n    struct itr {\n    \
    \    ll v;\n        itr(ll v) : v(v) {}\n        void operator++() { --v; }\n\
    \        ll operator*() const { return v; }\n        bool operator!=(itr i) const\
    \ { return v > *i; }\n    };\n    ll l, r;\n    per(ll l, ll r) : l(l), r(r) {}\n\
    \    per(ll r) : per(0, r) {}\n    itr begin() const { return r - 1; };\n    itr\
    \ end() const { return l - 1; };\n};\nstruct io_setup {\n    static constexpr\
    \ int PREC = 20;\n    io_setup() {\n        cout << fixed << setprecision(PREC);\n\
    \        cerr << fixed << setprecision(PREC);\n    };\n} iOS;\n\ntemplate <ll\
    \ MOD = 1000000007> struct modint {\n    ll val;\n    modint(ll val = 0) : val(val\
    \ >= 0 ? val % MOD : (MOD - (-val) % MOD) % MOD) {}\n    static ll mod() { return\
    \ MOD; }\n    modint inv() const {\n        ll a = val, b = MOD, u = 1, v = 0,\
    \ t;\n        while (b > 0) {\n            t = a / b;\n            swap(a -= t\
    \ * b, b);\n            swap(u -= t * v, v);\n        }\n        return modint(u);\n\
    \    }\n    modint pow(ll k) const {\n        modint ret = 1, mul = val;\n   \
    \     while (k) {\n            if (k & 1) ret *= mul;\n            mul *= mul;\n\
    \            k >>= 1;\n        }\n        return ret;\n    }\n    modint &operator+=(const\
    \ modint &a) {\n        if ((val += a.val) >= MOD) val -= MOD;\n        return\
    \ *this;\n    }\n    modint &operator-=(const modint &a) {\n        if ((val +=\
    \ MOD - a.val) >= MOD) val -= MOD;\n        return *this;\n    }\n    modint &operator*=(const\
    \ modint &a) {\n        (val *= a.val) %= MOD;\n        return *this;\n    }\n\
    \    modint &operator/=(const modint &a) { return *this *= a.inv(); }\n    modint\
    \ operator+() const { return *this; }\n    modint operator-() const { return modint(-val);\
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
    \ {}\n#line 2 \"math/fzt_fmt.hpp\"\n\n#line 2 \"template.hpp\"\nusing namespace\
    \ std;\n\n#define all(a) begin(a), end(a)\n#define rall(a) rbegin(a), rend(a)\n\
    #define uniq(a) (a).erase(unique(all(a)), (a).end())\nusing ll = long long;\n\
    using ull = unsigned long long;\nusing pll = pair<ll, ll>;\nusing vll = vector<ll>;\n\
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
    \ {}\n#line 4 \"math/fzt_fmt.hpp\"\n\ntemplate <typename T> void fzt_super(vector<T>\
    \ &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int\
    \ s : rep(a.size())) {\n            if ((s >> i) & 1) a[s ^ bit(i)] += a[s];\n\
    \        }\n    }\n}\n\ntemplate <typename T> void fzt_sub(vector<T> &a) {\n \
    \   for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int s : rep(a.size()))\
    \ {\n            if (!((s >> i) & 1)) a[s ^ bit(i)] += a[s];\n        }\n    }\n\
    }\n\ntemplate <typename T> void fmt_super(vector<T> &a) {\n    for (int i : rep(__builtin_ffs(a.size())\
    \ - 1)) {\n        for (int s : rep(a.size())) {\n            if ((s >> i) & 1)\
    \ a[s ^ bit(i)] -= a[s];\n        }\n    }\n}\n\ntemplate <typename T> void fmt_sub(vector<T>\
    \ &a) {\n    for (int i : rep(__builtin_ffs(a.size()) - 1)) {\n        for (int\
    \ s : rep(a.size())) {\n            if (!((s >> i) & 1)) a[s ^ bit(i)] -= a[s];\n\
    \        }\n    }\n}\n#line 5 \"math/and_or_convolution.hpp\"\n\ntemplate <typename\
    \ T> vector<T> and_convolution(vector<T> a, vector<T> b) {\n    int _n = max(a.size(),\
    \ b.size()), n;\n    for (n = 1; n < _n; n <<= 1) {}\n    a.resize(n), b.resize(n);\n\
    \    fzt_super(a), fzt_super(b);\n    for (int i : rep(n)) a[i] *= b[i];\n   \
    \ fmt_super(a);\n    return a;\n}\n\ntemplate <typename T> vector<T> or_convolution(vector<T>\
    \ a, vector<T> b) {\n    int _n = max(a.size(), b.size()), n;\n    for (n = 1;\
    \ n < _n; n <<= 1) {}\n    a.resize(n), b.resize(n);\n    fzt_sub(a), fzt_sub(b);\n\
    \    for (int i : rep(n)) a[i] *= b[i];\n    fmt_sub(a);\n    return a;\n}\n#line\
    \ 4 \"test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp\"\n\n#line 6 \"test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp\"\
    \nusing namespace std;\n\nint main() {\n    ll n, m;\n    cin >> n >> m;\n   \
    \ Vl a(n), p(n);\n    for (ll i : rep(n)) cin >> a[i];\n    for (ll i : rep(n))\
    \ cin >> p[i];\n    Vl x(bit(n));\n    for (ll i : rep(bit(n))) {\n        ll\
    \ l = 1;\n        for (ll j : rep(n)) {\n            if ((i >> j) & 1) {\n   \
    \             if (l) {\n                    ll d = l / gcd(l, a[j]);\n       \
    \             l = (__int128_t)d * a[j] > m ? 0 : d * a[j];\n                }\n\
    \            }\n        }\n        if (l) x[i] = m / l;\n    }\n    fzt_super(x);\n\
    \    fmt_super(x);\n    fzt_sub(x);\n    fmt_sub(x);\n\n    fmt_sub(x);\n    double\
    \ ans = 0;\n    for (ll i : rep(bit(n))) {\n        double q = 1;\n        for\
    \ (ll j : rep(n)) {\n            if ((i >> j) & 1) {\n                q *= p[j]\
    \ / 100.0;\n            } else {\n                q *= (1 - p[j] / 100.0);\n \
    \           }\n        }\n        x[i] = m - abs(x[i]);\n        ans += x[i] *\
    \ q;\n    };\n    cout << ans << endl;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=2446\"\
    \n#define ERROR 1e-7\n#include \"../../math/and_or_convolution.hpp\"\n\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\nint main() {\n    ll n, m;\n    cin\
    \ >> n >> m;\n    Vl a(n), p(n);\n    for (ll i : rep(n)) cin >> a[i];\n    for\
    \ (ll i : rep(n)) cin >> p[i];\n    Vl x(bit(n));\n    for (ll i : rep(bit(n)))\
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
  - math/fzt_fmt.hpp
  isVerificationFile: true
  path: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
  requiredBy: []
  timestamp: '2021-11-16 21:28:12+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
layout: document
redirect_from:
- /verify/test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
- /verify/test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp.html
title: test/judge.u-aizu.ac.jp/Enumeration.0.test.cpp
---

---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: data_structure/splay_tree.hpp
    title: Splay Tree
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/1/ITP2_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/1/ITP2_1_A
  bundledCode: "#line 1 \"test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp\"\n#define\
    \ PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/1/ITP2_1_A\"\
    \n#line 2 \"data_structure/splay_tree.hpp\"\n\n#line 1 \"template.hpp\"\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) begin(a), end(a)\n#define\
    \ rall(a) rbegin(a), rend(a)\n#define uniq(a) (a).erase(unique(all(a)), (a).end())\n\
    using ll = long long;\nusing ull = unsigned long long;\nusing pll = pair<ll, ll>;\n\
    using vll = vector<ll>;\nconstexpr double PI = 3.14159265358979323846;\nconstexpr\
    \ ll dy[9] = {0, 1, 0, -1, 1, 1, -1, -1, 0};\nconstexpr ll dx[9] = {1, 0, -1,\
    \ 0, 1, -1, -1, 1, 0};\nconstexpr ll sign(ll a) { return (a > 0) - (a < 0); }\n\
    constexpr ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); }\nconstexpr\
    \ ll cdiv(ll a, ll b) { return -fdiv(-a, b); }\nconstexpr ull bit(int n) { return\
    \ 1ull << n; }\ntemplate <typename T> constexpr T mypow(T x, ll n) {\n    T ret\
    \ = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x *= x;\n     \
    \   n >>= 1;\n    }\n    return ret;\n}\nconstexpr ll modpow(ll x, ll n, ll mod)\
    \ {\n    ll ret = 1;\n    while (n) {\n        if (n & 1) ret *= x;\n        x\
    \ *= x;\n        n >>= 1;\n        x %= mod;\n        ret %= mod;\n    }\n   \
    \ return ret;\n}\ntemplate <typename T> T xor64(T lb, T ub) {\n    static ull\
    \ x = 88172645463325252ull;\n    x ^= x << 7;\n    return lb + (x ^= x >> 9) %\
    \ (ub - lb);\n}\nconstexpr ll safemod(ll x, ll mod) { return (x % mod + mod) %\
    \ mod; }\ntemplate <typename T> constexpr T sq(const T &a) { return a * a; }\n\
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
    \ {}\n#line 4 \"data_structure/splay_tree.hpp\"\n\ntemplate <typename T> struct\
    \ splay_tree {\n    struct node {\n        node *left, *right, *par;\n       \
    \ int size;\n        T val;\n        node(T val) : left(nullptr), right(nullptr),\
    \ par(nullptr), size(1), val(val) {}\n        void rotate() {\n            node\
    \ *p, *pp, *c;\n            p = par, pp = p->par;\n            if (p->left ==\
    \ this) {\n                c = right, right = p, p->left = c;\n            } else\
    \ {\n                c = left, left = p, p->right = c;\n            }\n      \
    \      if (pp) {\n                if (pp->left == p) {\n                    pp->left\
    \ = this;\n                } else {\n                    pp->right = this;\n \
    \               }\n            }\n            if (c) c->par = p;\n           \
    \ par = pp, p->par = this;\n            p->update();\n            update();\n\
    \        }\n        int state() {\n            if (!par) { return 0; }\n     \
    \       if (par->left == this) {\n                return 1;\n            } else\
    \ {\n                return -1;\n            }\n        }\n        void splay()\
    \ {\n            while (state() != 0) {\n                if (par->state() == 0)\
    \ {\n                    rotate();\n                } else if (state() == par->state())\
    \ {\n                    par->rotate(), rotate();\n                } else {\n\
    \                    rotate(), rotate();\n                }\n            }\n \
    \       }\n        void update() {\n            size = 1;\n            if (left)\
    \ size += left->size;\n            if (right) size += right->size;\n        }\n\
    \    };\n    node *root;\n    splay_tree(node *root = nullptr) : root(root) {}\n\
    \    int size() { return root ? root->size : 0; }\n    node *get_node(int i) {\n\
    \        node *cur = root;\n        while (true) {\n            int size_l = cur->left\
    \ ? cur->left->size : 0;\n            if (i < size_l) cur = cur->left;\n     \
    \       if (i == size_l) {\n                cur->splay();\n                return\
    \ root = cur;\n            }\n            if (i > size_l) cur = cur->right, i\
    \ -= size_l + 1;\n        }\n    }\n    T &operator[](int i) { return get_node(i)->val;\
    \ }\n    template <typename F> int lower_bound(F f) {\n        if (!root) return\
    \ 0;\n        node *cur = root;\n        int ret = -1;\n        while (true) {\n\
    \            if (cur->state() < 1) {\n                ret += cur->left ? cur->left->size\
    \ + 1 : 1;\n            } else {\n                ret -= cur->right ? cur->right->size\
    \ + 1 : 1;\n            }\n            if (f(cur->val)) {\n                if\
    \ (cur->left) {\n                    cur = cur->left;\n                } else\
    \ {\n                    cur->splay(), root = cur;\n                    return\
    \ ret;\n                }\n            } else {\n                if (cur->right)\
    \ {\n                    cur = cur->right;\n                } else {\n       \
    \             cur->splay(), root = cur;\n                    return ret + 1;\n\
    \                }\n            }\n        }\n    }\n    splay_tree split(int\
    \ size_left) {\n        if (size_left == 0) {\n            node *root_r = root;\n\
    \            root = nullptr;\n            return root_r;\n        }\n        if\
    \ (size_left == root->size) return nullptr;\n        node *root_r = get_node(size_left);\n\
    \        root = root_r->left;\n        root_r->left = nullptr, root->par = nullptr;\n\
    \        root_r->update();\n        return root_r;\n    }\n    void merge(splay_tree\
    \ right) {\n        if (!root) {\n            root = right.root;\n           \
    \ return;\n        }\n        if (!right.root) return;\n        get_node(root->size\
    \ - 1);\n        root->right = right.root, right.root->par = root;\n        root->update();\n\
    \    }\n    void insert(int i, T val) {\n        splay_tree vt = new node(val),\
    \ right = split(i);\n        merge(vt), merge(right);\n    }\n    void erase(int\
    \ i) {\n        splay_tree vt = split(i);\n        splay_tree right = vt.split(1);\n\
    \        delete vt.root;\n        merge(right);\n    }\n};\n#line 3 \"test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp\"\
    \n\n#line 5 \"test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp\"\nusing namespace\
    \ std;\n\nint main() {\n    int q;\n    cin >> q;\n    splay_tree<ll> st;\n  \
    \  while (q--) {\n        ll ord, x;\n        cin >> ord;\n        if (ord ==\
    \ 0) {\n            cin >> x;\n            st.insert(st.size(), x);\n        }\n\
    \        if (ord == 1) {\n            cin >> x;\n            cout << st[x] <<\
    \ endl;\n        }\n        if (ord == 2) st.erase(st.size() - 1);\n    }\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/8/ITP2/1/ITP2_1_A\"\
    \n#include \"../../data_structure/splay_tree.hpp\"\n\n#include <bits/stdc++.h>\n\
    using namespace std;\n\nint main() {\n    int q;\n    cin >> q;\n    splay_tree<ll>\
    \ st;\n    while (q--) {\n        ll ord, x;\n        cin >> ord;\n        if\
    \ (ord == 0) {\n            cin >> x;\n            st.insert(st.size(), x);\n\
    \        }\n        if (ord == 1) {\n            cin >> x;\n            cout <<\
    \ st[x] << endl;\n        }\n        if (ord == 2) st.erase(st.size() - 1);\n\
    \    }\n}"
  dependsOn:
  - data_structure/splay_tree.hpp
  - template.hpp
  isVerificationFile: true
  path: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
  requiredBy: []
  timestamp: '2021-11-16 21:28:12+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
layout: document
redirect_from:
- /verify/test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
- /verify/test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp.html
title: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
---
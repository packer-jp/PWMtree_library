---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
    title: test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"data_structure/splay_tree.hpp\"\n\n#line 2 \"template.hpp\"\
    \n\n#include <bits/stdc++.h>\nusing namespace std;\n\n#define all(a) (a).begin(),\
    \ (a).end()\nusing ll = long long;\nusing ull = unsigned long long;\nusing vll\
    \ = vector<ll>;\nconstexpr ull bit(int n) { return 1ull << n; }\nconstexpr ll\
    \ sign(ll a) { return (a > 0) - (a < 0); }\nconstexpr ll fdiv(ll a, ll b) { return\
    \ a / b - ((a ^ b) < 0 && a % b); }\nconstexpr ll cdiv(ll a, ll b) { return -fdiv(-a,\
    \ b); }\ntemplate <typename T> constexpr T sq(const T &a) { return a * a; }\n\
    template <typename T> using priority_queue_rev = priority_queue<T, vector<T>,\
    \ greater<T>>;\ntemplate <typename T, typename U> bool chmax(T &a, const U &b)\
    \ { return ((a < b) ? (a = b, true) : (false)); }\ntemplate <typename T, typename\
    \ U> bool chmin(T &a, const U &b) { return ((a > b) ? (a = b, true) : (false));\
    \ }\ntemplate <typename T> ostream &operator<<(ostream &os, const vector<T> &a)\
    \ {\n    os << \"(\";\n    for (auto itr = a.begin(); itr != a.end(); itr++) {\
    \ os << *itr << (next(itr) != a.end() ? \", \" : \"\"); }\n    os << \")\";\n\
    \    return os;\n}\n\n#ifdef ONLINE_JUDGE\n#define dump(...) (void(0))\n#else\n\
    void debug() { cerr << endl; }\ntemplate <typename Head, typename... Tail> void\
    \ debug(Head &&head, Tail &&... tail) {\n    cerr << head;\n    if (sizeof...(Tail))\
    \ cerr << \", \";\n    debug(tail...);\n}\n#define dump(...) cerr << __LINE__\
    \ << \": \" << #__VA_ARGS__ << \" = \", debug(__VA_ARGS__)\n#endif\n\nstruct rep\
    \ {\n    struct itr {\n        int v;\n        itr(int v) : v(v) {}\n        void\
    \ operator++() { ++v; }\n        int operator*() const { return v; }\n       \
    \ bool operator!=(const itr &i) const { return v != i.v; }\n    };\n    int l,\
    \ r;\n    rep(int r) : l(min(0, r)), r(r) {}\n    rep(int l, int r) : l(min(l,\
    \ r)), r(r) {}\n    itr begin() const { return l; };\n    itr end() const { return\
    \ r; };\n};\nstruct per {\n    struct itr {\n        int v;\n        itr(int v)\
    \ : v(v) {}\n        void operator++() { --v; }\n        int operator*() const\
    \ { return v; }\n        bool operator!=(const itr &i) const { return v != i.v;\
    \ }\n    };\n    int l, r;\n    per(int r) : l(min(0, r)), r(r) {}\n    per(int\
    \ l, int r) : l(min(l, r)), r(r) {}\n    itr begin() const { return r - 1; };\n\
    \    itr end() const { return l - 1; };\n};\n#line 4 \"data_structure/splay_tree.hpp\"\
    \n\ntemplate <typename V> struct splay_tree {\n    struct node {\n        node\
    \ *left, *right, *par;\n        int size;\n        V val;\n        node(V val)\
    \ : left(nullptr), right(nullptr), par(nullptr), size(1), val(val) {}\n      \
    \  void rotate() {\n            node *p, *pp, *c;\n            p = par, pp = p->par;\n\
    \            if (p->left == this) {\n                c = right, right = p, p->left\
    \ = c;\n            } else {\n                c = left, left = p, p->right = c;\n\
    \            }\n            if (pp) {\n                if (pp->left == p) {\n\
    \                    pp->left = this;\n                } else {\n            \
    \        pp->right = this;\n                }\n            }\n            if (c)\
    \ c->par = p;\n            par = pp, p->par = this;\n            p->update();\n\
    \            update();\n        }\n        int state() {\n            if (!par)\
    \ { return 0; }\n            if (par->left == this) {\n                return\
    \ 1;\n            } else {\n                return -1;\n            }\n      \
    \  }\n        void splay() {\n            while (state() != 0) {\n           \
    \     if (par->state() == 0) {\n                    rotate();\n              \
    \  } else if (state() == par->state()) {\n                    par->rotate(), rotate();\n\
    \                } else {\n                    rotate(), rotate();\n         \
    \       }\n            }\n        }\n        void update() {\n            size\
    \ = 1;\n            if (left) size += left->size;\n            if (right) size\
    \ += right->size;\n        }\n    };\n    node *root;\n    splay_tree(node *root\
    \ = nullptr) : root(root) {}\n    int size() { return root ? root->size : 0; }\n\
    \    node *get_node(int idx) {\n        node *cur = root;\n        while (true)\
    \ {\n            int size_l = cur->left ? cur->left->size : 0;\n            if\
    \ (idx < size_l) cur = cur->left;\n            if (idx == size_l) {\n        \
    \        cur->splay();\n                return root = cur;\n            }\n  \
    \          if (idx > size_l) cur = cur->right, idx -= size_l + 1;\n        }\n\
    \    }\n    V &operator[](int idx) { return get_node(idx)->val; }\n    template\
    \ <typename F> int lower_bound(F f) {\n        if (!root) return 0;\n        node\
    \ *cur = root;\n        int ret = -1;\n        while (true) {\n            if\
    \ (cur->state() < 1) {\n                ret += cur->left ? cur->left->size + 1\
    \ : 1;\n            } else {\n                ret -= cur->right ? cur->right->size\
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
    \    }\n    void insert(int idx, V x) {\n        splay_tree xt = new node(x),\
    \ right = split(idx);\n        merge(xt), merge(right);\n    }\n    void erase(int\
    \ idx) {\n        splay_tree xt = split(idx);\n        splay_tree right = xt.split(1);\n\
    \        delete xt.root;\n        merge(right);\n    }\n};\n"
  code: "#pragma once\n\n#include \"../template.hpp\"\n\ntemplate <typename V> struct\
    \ splay_tree {\n    struct node {\n        node *left, *right, *par;\n       \
    \ int size;\n        V val;\n        node(V val) : left(nullptr), right(nullptr),\
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
    \    int size() { return root ? root->size : 0; }\n    node *get_node(int idx)\
    \ {\n        node *cur = root;\n        while (true) {\n            int size_l\
    \ = cur->left ? cur->left->size : 0;\n            if (idx < size_l) cur = cur->left;\n\
    \            if (idx == size_l) {\n                cur->splay();\n           \
    \     return root = cur;\n            }\n            if (idx > size_l) cur = cur->right,\
    \ idx -= size_l + 1;\n        }\n    }\n    V &operator[](int idx) { return get_node(idx)->val;\
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
    \    }\n    void insert(int idx, V x) {\n        splay_tree xt = new node(x),\
    \ right = split(idx);\n        merge(xt), merge(right);\n    }\n    void erase(int\
    \ idx) {\n        splay_tree xt = split(idx);\n        splay_tree right = xt.split(1);\n\
    \        delete xt.root;\n        merge(right);\n    }\n};"
  dependsOn:
  - template.hpp
  isVerificationFile: false
  path: data_structure/splay_tree.hpp
  requiredBy: []
  timestamp: '2021-09-04 20:56:23+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/onlinejudge.u-aizu.ac.jp/Vector.0.test.cpp
documentation_of: data_structure/splay_tree.hpp
layout: document
title: Splay Tree
---

# 参考
- [かつっぱさんの動画](https://www.youtube.com/watch?v=M6LcINhgXeM&t=0s)
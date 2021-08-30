#pragma once

#include "../template.hpp"

vector<ll> inner_basis(vector<ll> a) {
    vector<ll> basis, ret;
    for (ll e : a) {
        ll e_ = e;
        for (ll b : basis) chmin(e, e ^ b);
        if (e) basis.push_back(e), ret.push_back(e_);
    }
    return ret;
}
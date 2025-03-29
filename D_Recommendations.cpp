#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;


using ordered_set = tree<pair<ll,ll>, null_type, less_equal<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update>;

bool compare(const pair<ll,ll>& a, const pair<ll,ll>& b) {
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}
bool compare2(const pair<ll,ll>& a, const pair<ll,ll>& b) {
    if(a.second!=b.second){
        return a.second>b.second;
    }
    return a.first<b.first;
}


void solve() {
    ll n;
    cin >> n;
    
    map<pair<ll, ll>, ll> ans1;
    map<pair<ll, ll>, ll> ans2;
    vector<pair<ll, ll>> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }

    vector<pair<ll, ll>> v = a;


    sort(v.begin(), v.end(), compare);
    
    ordered_set st;
    for (int i = 0; i < n; i++) {
        ll y = v[i].second;
        ll ind = st.order_of_key({y,0});
        if (ind < i) {
            auto it = st.find_by_order(ind);
            if (it != st.end()) {
                ans1[v[i]] = (it->first) - y;
            }
        }
        st.insert({y,i+1});
    }


    sort(v.begin(), v.end(), compare2);

    ordered_set st2;
    for (int i = 0; i < n; i++) {
        ll x = v[i].first;
        ll ind = st2.order_of_key({-x,0});
        if (ind < i) {
            auto it = st2.find_by_order(ind);
            if (it != st2.end()) {
                ans2[v[i]] = ((it->first)) + x;
            }
        }
        st2.insert({-x,i+1});
    }

    for (int i = 0; i < n; i++) {
        cout << ans1[a[i]]+ans2[a[i]] << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

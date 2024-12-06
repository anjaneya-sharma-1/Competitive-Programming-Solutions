#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve(unordered_map<int,vector<int>>&mp) {
    ll n;
    cin>>n;
    vector<int>v(1001,-1);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v[x]=i;
    }
    int maxi=-1;
    for(int i=1;i<=1000;i++){
        if(v[i]!=-1){
            for(int a : mp[i]){
                if(v[a]!=-1){
                    maxi=max(maxi,v[i]+v[a]);
                }
            }
        }
    }
    cout<<maxi<<endl;

    
}

};
int main(){
    unordered_map<int,vector<int>>mp;
    for(int i = 1; i <=1000; i++){
        for(int j=i;j<=1000;j++){
            if(__gcd(i,j)==1){
                mp[i].push_back(j);
                mp[j].push_back(i);

            }
        }
    }
    ll t;
    cin >> t;
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve(mp);
        delete s; 

        }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    ll n,k;
    cin>>n>>k;
    unordered_map<string,ll>m;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        m[s]=1;
    }
    ll ans=0;
    vector<char>st={'S','E','T'};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string s1=v[i];
            string s2=v[j];
            string s3=s1;
            for(int a=0;a<k;a++){
                if(s1[a]!=s2[a]){
                    for(int b=0;b<3;b++){
                        if(s1[a]==st[b]||s2[a]==st[b]){
                            continue;
                        }
                        s3[a]=st[b];
                    }
                }   
            }
            ans+=m[s3];
        }
    }
    cout<<ans/3<<endl;
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll t=1;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
        delete s; 

        }
    return 0;
}
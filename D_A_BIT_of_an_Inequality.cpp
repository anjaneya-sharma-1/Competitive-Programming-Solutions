#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>msb(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<=31;j++){
            if((1<<j)&a[i]){
                msb[i]=j;
            }
        }

    }

    vector<vector<vector<int>>>pre(n,vector<vector<int>>(32,{0,0}));
    vector<vector<int>>parl(n,vector<int>(32));
    vector<vector<int>>parr(n,vector<int>(32));
    for(int j=0;j<=31;j++){
        pre[0][j][0]=1;
    }
    vector<int>mask(32,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<=31;j++){
            if((1<<j)&a[i]){
                mask[j]++;
            }
        }
        if(i!=0)pre[i]=pre[i-1];
        for(int j=0;j<=31;j++){
            parl[i][j]=mask[j]%2;
            pre[i][j][mask[j]%2]++;
        }
    }
    vector<vector<vector<int>>>post(n,vector<vector<int>>(32,{0,0}));
    for(int j=0;j<=31;j++){
        post[n-1][j][0]=1;
    }
    fill(mask.begin(),mask.end(),0);

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=31;j++){
            if((1<<j)&a[i]){
                mask[j]++;
            }
        }
        if(i!=n-1)post[i]=post[i+1];
        for(int j=0;j<=31;j++){
            post[i][j][mask[j]%2]++;
            parr[i][j]=mask[j]%2;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if (a[i] == 0) continue;
    int b = msb[i];
    int pL = (i > 0 ? parl[i-1][b] : 0);
    int pR = (i < n-1 ? parr[i+1][b] : 0);
    int leven = (i > 0 ? pre[i-1][b][pL] : 1);
    int lodd  = (i > 0 ? pre[i-1][b][1-pL] : 0);
    int reven = (i < n-1 ? post[i+1][b][pR] : 1);
    int rodd  = (i < n-1 ? post[i+1][b][1-pR] : 0);
    ans += leven * rodd;
    ans += reven * lodd;
    }
    cout<<ans<<endl;
   




    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t;
    cin >> t;
    
    
    while (t--){ 
        Solution* s = new Solution(); 
        s->solve();
      

        }
    return 0;
}
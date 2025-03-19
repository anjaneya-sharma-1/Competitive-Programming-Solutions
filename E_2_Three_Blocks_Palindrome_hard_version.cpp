#include <bits/stdc++.h>

using namespace std;
int N=200;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<vector<int>>pre(n,vector<int>(201,0));

    vector<vector<int>>indexes(201);


    for(int i=0;i<n;i++){
        cin>>a[i];
        indexes[a[i]].push_back(i);
    }

    for(int j=1;j<=N;j++){
    for(int i=0;i<n;i++){
        pre[i][j]+=(i>=1?pre[i-1][j]:0)+(a[i]==j);
    }
    }


    
    int ans=0;
    for(int i=1;i<=N;i++){
        if(pre[n-1][i]==0){
            continue;
        }
        for(int j=1;j<=N;j++){
            if(j==i||pre[n-1][j]==0){
                ans=max(ans,(int)pre[n-1][i]);
            continue;}
            int l =0;
            int r=indexes[i].size()-1;
            while(l<=r){
                    int ind1=indexes[i][l];
                    int ind2=indexes[i][r];

                    ans=max(2*(min((int)pre[ind1][j],(int)pre[n-1][j]-pre[ind2][j]))+r-l+1,ans);
                    if(pre[ind1][j]>pre[n-1][j]-pre[ind2][j]){
                        r--;
                    }
                    else{
                        l++;
                    }
            }

        }
    }
    cout<<ans<<endl;






}
int main(){
    int t;
    cin>>t;
    while(t--){
    solve();
    }


    return 0;
}

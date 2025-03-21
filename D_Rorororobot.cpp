#include <bits/stdc++.h>
using namespace std;
#define N 1000000
#define MOD 1000000007
class Solution{
    public:
    void build(vector<int>&t,vector<int>&a,int v,int tl,int tr){
        if(tl==tr){
            t[v]=a[tl];
        }
        else{
            int tm=(tl+tr)/2;
            build(t,a,2*v,tl,tm);
            build(t,a,2*v+1,tm+1,tr);
            t[v]=max(t[2*v],t[2*v+1]);
        }
    }
    int get_max(vector<int>&t,int v,int tl,int tr,int l,int r){
        if(l>r){
            return INT_MIN;
        }
        if(l==tl&&r==tr){
            return t[v];
        }
        int tm=(tl+tr)/2;
        return max(get_max(t,2*v,tl,tm,l,min(r,tm)),get_max(t,2*v+1,tm+1,tr,max(l,tm+1),r));
    }
   
void solve() {
    int n,m;
    cin>>n>>m;
    vector<int>a(m+1);
    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    vector<int>t(4*m+1,0);
    build(t,a,1,1,m);
    int q;
    cin>>q;
    while(q--){
        int x1,y1,x2,y2,k;
        cin>>x1>>y1>>x2>>y2>>k;
        if(x1%k!=x2%k||y1%k!=y2%k){
            cout<<"NO"<<endl;
            continue;
        }
        int max1=get_max(t,1,1,m,min(y1,y2),max(y2,y1))+1;
        int max2=x1+((n-x1)/k)*k;
        if(max1<=max2){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }

    }   


    
    
}

};
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int t=1;
    
    
  
        Solution* s = new Solution(); 
        s->solve();
      

        
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
#define MOD 1000000007
int main()
{
    ll t = 2;
    vector<ll> v;
    vector<ll>p={4,8,15,16,23,42};
    ll k=1;
    while (t--)
    {
        ll ab,bc;
        cout<<"? "<<k<<" "<<k+1<<endl;
        cin>>ab;
        cout<<"? "<<k+1<<" "<<k+2<<endl;
        cin>>bc;
        ll abc=ab*bc;
        k=4;
        ll a,b,c;
        ll temp=__gcd(ab,bc);
        for(int i=0;i<6;i++){
            if(temp%p[i]==0){
                ll x=p[i];
                vector<ll>vis(6,0);
                if(abc%(x*x)==0&&ab%x==0&&bc%x==0){
                    int good=0;
                    vis[i]=1;
                    for(int j=0;j<6;j++){

                        if(p[j]==ab/x&&!vis[j]){
                            vis[j]=1;
                            good+=1;
                        }
                        if(p[j]==bc/x&&!vis[j]){
                            vis[j]=1;
                            good+=1;
                        }
                    }
                    if(good==2){
                    b=x;
                    a=ab/x;
                    c=bc/x;
                    break;
                    }
                }
            }
        }
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
    }
    cout<<"!"<<" ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
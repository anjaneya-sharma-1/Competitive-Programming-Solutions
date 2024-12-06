#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a , ll b){
    if(b==0)
    return a;
    return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return (a/gcd(a,b))*b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll mini = LLONG_MAX;
        pair<ll,ll> p;
        if(n%2==0){
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }
        int chck=0;
        for(ll i =2; i<=sqrt(n) ; i++){
            if((n)%(i)==0){
            cout<<n/i<<" "<<n-(n/i)<<endl; 
            chck=1;
            break;
                }
        }
        if(!chck){
        cout<<1<<" "<<n-1<<endl;
        }

    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  int t;
  cin >> t;
  while (t--) {
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<char> st;
    string curr;
    int sum=0;
    for(int i =0;i<n;i++){
        st.insert(s[i]);
        sum+=st.size();
    }
    cout<<sum<<endl;
   
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
int n,a[200010];
int main(){
	int T,x,y;
	cin>>T;
	while(T--){
		cin>>n>>x>>y;
		a[x]=2;
		for(int i=x+1,j=0;i<=n;i++,j^=1) a[i]=j;
		for(int i=1,j=(a[n]^1);i<x;i++,j^=1) a[i]=j;
		if(n%2==0 && a[y]==0) a[x]=1;
		for(int i=1;i<=n;i++) cout<<a[i]<<' ';
		cout<<endl; 
	}
	return 0;
} 
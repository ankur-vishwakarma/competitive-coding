#include<bits/stdc++.h>
using namespace std;
long long power(long long k,int n){
	if(n==0) return 1;
	long long buf=power(k,n/2);
	if(n%2==0) return buf*buf;
	else return buf*buf*k;
}
main(){
	int t;
	cin>>t;
	while(t--){
		long long n,a,b,c,d,e,k;
		cin>>n>>a;
		//create max n min nos possible from n
		long long max=power(10,n)-1,min=1;
		//cout<<max<<" "<<max_sum<<endl;
		//max_sum=2*max+2*min+a;
		cout<<2*max+2*min+a<<endl;
		//max_sum-=a;
		cin>>b;
		//max_sum-=b;
		c=(max+min)-b;
		cout<<c<<endl;
		//max_sum-=c;
		cin>>d;
		//max_sum-=d;
		e=(max+min)-d;
		cout<<e<<endl;
		cin>>k;
		if(k==-1) return 0;
	}
}

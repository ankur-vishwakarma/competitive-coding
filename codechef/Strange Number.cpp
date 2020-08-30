#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		//find all primes till n
		int primes[n+1];
		for(int i=0;i<=n;i++) primes[i]=1;
		primes[1]=0;
		for(int i=2;i*i<=n;i++){
			if(primes[i]){
				for(int j=i*i;j<=n;j+=i) primes[j]=0;
			}
		}
		//for(int i=1;i<=n;i++) cout<<i<<" "<<primes[i]<<endl;
		//calculate powers of primes
		vector<long long> powers;
		for(int i=2;i<=n;i++){
			if(primes[i]&&n%i==0){
				//cout<<i<<" ";
				int ans=0;
				while(n%i==0&&n>0) ans++,n/=i;
				powers.push_back(ans);
				//cout<<ans<<endl;
			}
		}
		long long sum=0;
		for(int i=0;i<powers.size();i++) sum+=powers[i];
		if(sum>=k) cout<<"1\n";
		else cout<<"0\n";
	}
}

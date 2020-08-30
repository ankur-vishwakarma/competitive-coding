#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s[n];
		for(int i=0;i<n;i++) cin>>s[i];
		sort(s,s+n);
		long long sum=0,count;
		for(int i=0;i<n-1;i+=2){
			count=0;
			//take adjacents
			for(int j=0;j<min(s[i].length(),s[i+1].length());j++){
				if(s[i][j]==s[i+1][j]) count++;
				else break;
			}
			sum+=(count*count);
		}
		long long sum2=0;
		if(n%2!=0){
			for(int i=1;i<n-1;i+=2){
			count=0;
			//take adjacents
			for(int j=0;j<min(s[i].length(),s[i+1].length());j++){
				if(s[i][j]==s[i+1][j]) count++;
				else break;
			}
			sum+=(count*count);
		    }
		    sum=max(sum,sum2);
		}
		cout<<sum<<endl;
	}
}

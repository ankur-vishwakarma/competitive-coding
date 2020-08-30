#include<bits/stdc++.h>
using namespace std;
main(){
	int n,q;
	cin>>n>>q;
	int s[n],w[q][2];
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<q;i++) cin>>w[i][0]>>w[i][1];
	//counting inversions n storing as cumulative 
	int inv[n];
	int count=0,i=0,f=0;
	inv[0]=0;
	//think == also!
	if(s[0]<s[1]) f=2; //inc
	else if(s[0]>s[1]) f=1; //dec
	for(int i=1;i<n-1;i++){
		//cout<<f<<" "<<s[i]<<endl;
		if(f==0||s[i]==s[i+1]){
			//skip equals
			while(s[i+1]==s[i]&&i<n-1) inv[i]=inv[i-1],i++;
			//calculate flag
			if(s[i+1]<s[i]) f=1; //decr
	        else if(s[i+1]>s[i]) f=2; //inc
	        count++,inv[i]=inv[i]+1;
	        continue;
		}
		else if(s[i+1]>s[i]&&f==1) f=2,count++;
		else if(s[i+1]<s[i]&&f==2) f=1,count++;
		inv[i]=count;
	}
	inv[n-1]=inv[n-2];
	//for(int i=0;i<n;i++) cout<<inv[i]<<" ";
	for(int i=0;i<q;i++){
		if(w[i][1]-w[i][0]<=1) cout<<"NO\n";
		else{
			//if inv even means odd inc dec seq
			if((inv[w[i][1]-2]-inv[w[i][0]-1])%2==0) cout<<"NO\n";
			else cout<<"YES\n";
		}
	}
}
/*inv[0]=0; inv[n-1]=-1;
	for(int i=1;i<n-1;){
		while(s[i-1]==s[i]) inv[i]=inv[i-1],i++;
		int j=i+1;
		while(s[i]==s[j]&&j<n-1) inv[j]=inv[i-1],j++;
		if((s[i]<s[i-1]&&s[i]<s[j])||(s[i]>s[i-1]&&s[i]>s[j])) count++;
		inv[i]=count;
		i=j;
	}
	inv[n-1]=inv[n-2];*/

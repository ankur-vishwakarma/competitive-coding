#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long s[n];
		for(int i=0;i<n;i++) cin>>s[i],s[i]=abs(s[i]);
		//normal slide
		//front till end
		long long mul=1,count=0;   
		for(int i=0;i<n;i++){
			mul=((mul%4)*(s[i]%4))%4;
			//cout<<mul<<endl;
			if(mul%4!=2) count++;
			mul=mul%4;
			if(!mul) mul=1;
		}
		//end to front
		mul=1;
		for(int i=n-1;i>0;i--){
			mul=((mul%4)*(s[i]%4))%4;
			//cout<<mul<<endl;
			if(mul%4!=2) count++;
			mul=mul%4;
			if(!mul) mul=1;
		}
		//extra things
		//cout<<"h"<<endl;
		for(int i=1;i<n-1;i++){
			if(s[i]%4!=2){
				count++; mul=s[i]; 
				for(int j=i+1;j<n;j++){
					mul=(mul%4*s[j]%4)%4;
			        ///cout<<mul<<endl;
					if(mul%4!=2) count++;
					mul=mul%4;
			        if(!mul) mul=1;
				}
			}
		}
		cout<<count<<endl;
	}
}

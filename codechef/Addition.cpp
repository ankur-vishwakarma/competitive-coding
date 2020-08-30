#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	long long m[t],n[t]; string x[t],y[t];
	for(int i=0;i<t;i++) cin>>x[i]>>y[i];
	//converting to nos
	for(int i=0;i<t;i++){
		int b=0,j=0,mul=1;
		while(j<x[i].length()){
			b+=((x[i][x[i].length()-j-1]-'0')*mul);
			mul=mul<<1;
			j++;
		}
		m[i]=b;
		b=0,j=0,mul=1;
		while(j<y[i].length()){
			b+=((y[i][y[i].length()-j-1]-'0')*mul);
			mul=mul<<1;
			j++;
		}
		n[i]=b;
	}
	//performing jst one xor n one and
	for(int i=0;i<t;i++){
		if(n[i]==0){
			cout<<"0\n"; 
			continue;
		}
		long long exor=m[i]^n[i];
		long long annd=m[i]&n[i];
		//exor=exor>>1;
		int max=1;
		while(annd!=0){
			//cout<<(annd&1)<<" "<<(exor&1)<<endl;
			long long buf=annd&1;
			exor=exor>>1;
			annd=annd>>1;
			//cout<<(annd)<<" "<<(exor)<<endl;
			int count=0;
			if(buf==1){
				//long long bufexor=exor;
				if(exor&1) count=2;
				while(exor&1){
					//cout<<bufexor<<endl;
					exor=exor>>1;
					count++;
				}
				if(count>max) max=count;
			}
		}
		cout<<max<<endl;
	}
} 

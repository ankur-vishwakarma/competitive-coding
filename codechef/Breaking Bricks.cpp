#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int s,w[3],count=0;
		cin>>s>>w[0]>>w[1]>>w[2];
		while(w[0]+w[1]+w[2]>0){
			count++;
			int k=0,f=0,r=0;
			//choose k from front
			int i=0;
			while(k<s&&i<3){
				if(w[i]!=0) k+=w[i],f++;
				i++;
			}
			if(k>s) f--;
			//choose k frm back
			i=2; k=0;
			while(k<s&&i>=0){
				if(w[i]!=0) k+=w[i--],r++;
				else break;
			}
			if(k>s) r--;
			//cout<<f<<" "<<r<<endl;
			if(f>r){ //reducing from front
			    i=0; k=s;
			    int tmp;
				while(w[i]<=k&&i<3){
					tmp=w[i];
					if(w[i]<k) w[i]=0;
					else w[i]-=k;
					k-=tmp,i++;
				}
			}
			else{ //reducing from back
			    i=2; k=s;
			    int tmp;
				while(w[i]<=k&&i>=0){
					tmp=w[i];
					if(w[i]<k) w[i]=0;
					else w[i]-=k;
					k-=tmp,i--;
				}
			}
			
			//cout<<w[0]<<" "<<w[1]<<" "<<w[2]<<endl;
		}
		cout<<count<<endl;
	}
}

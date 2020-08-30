#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int s[n][n]={0};
		for(int i=0;i<n;i++){
			int e[2*n-1]={0};
			s[i][i]=2*n-1;
			//print
			cout<<"before\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
			//row
			//mark those already present
			for(int j=0;j<i;j++) e[s[i][j]-1]=1;
			for(int j=0;j<i;j++) e[s[j][i]-1]=1;
			//fill
			int k=0;
			for(int j=i+1;j<n;j++){
				while(e[k]&&k<2*n-1) k++;
				s[i][j]=k+1;
				e[k]=1;
			}
			cout<<"row\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
			//column
			e[2*n-1]={0};
			//mark those already present
			for(int j=0;j<i;j++) e[s[i][j]-1]=1;
			for(int j=0;j<i;j++) e[s[j][i]-1]=1;
			//fill
			k=0;
			for(int j=i+1;j<n;j++){
				while(e[k]&&k<2*n-1) k++;
				s[j][i]=k+1;
				e[k]=1;
			}
		}
		//print
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<s[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}

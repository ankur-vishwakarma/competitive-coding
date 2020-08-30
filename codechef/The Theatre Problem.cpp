#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	long long sum=0;
	while(t--){
		int n,s[4][4]={0};
		cin>>n;
		for(int i=0;i<n;i++){
			char a; int b;
			cin>>a>>b;
			s[a-65][b/3-1]++;
		}
		//for(int i=0;i<4;i++) for(int j=0;j<4;j++) cout<<s[i][j]<<" ";
		//cout<<endl;
		long long count=0,max=INT_MIN;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				if(j==i) continue;
				for(int k=0;k<4;k++){
					if(k==j||k==i) continue;
					for(int l=0;l<4;l++){
						if(l==i||l==j||l==k) continue;
						int p[4],pr[4];
						p[0]=s[0][i],p[1]=s[1][j],p[2]=s[2][k],p[3]=s[3][l];
						pr[0]=25,pr[1]=50,pr[2]=75,pr[3]=100;
						sort(p,p+4);
						for(int m=0;m<4;m++){
							//cout<<p[m]<<" ";
							if(p[m]==0) count-=100;
							else count+=(p[m]*pr[m]);
						}
						//cout<<endl;
						if(count>max) max=count;
						count=0;
					}
				}
			}
		}
		cout<<max<<"\n";
		sum+=max;
	}
	cout<<sum<<"\n";
}

#include<iostream>
using namespace std;
int fact(int k){
	if(n==1) return 1;
	else return n*fact(n-1);
}
main()
{
	int t;
	cin>>t;
	int s[t][3],p[t][100000],i,j;
	for(i=0;i<t;i++){
		cin>>s[i][0]>>s[i][1]>>s[i][2];
		for(j=0;j<s[i][2];j++) cin>>p[i][j];
	}
	for(i=0;i<t;i++){
		for(j=0;j<s[i][2];j++){
				if(n>r||n<l){
					cout<<"-1";
					break;
				}
			    else{
			    	for(int a=n+1;a<r;a++){
			    	if(fact(a-1)%a==a-1){
			    		cout<<a<<"\n";
			    		flag=1;
			    		break
					}
					if(flag!=1) cout<<"-1";
			}
				}
		}
	}
}

#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int s[n][m]; //try dynamic if ths doesnt work
	    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>s[i][j];  
	    int count=n*m;
	    for(int i=1;i<n-1;i++){
	    	for(int j=1;j<m-1;j++){
	    		int a=i-1,b=i+1,c=j-1,d=j+1;
	    		//cout<<a<<" "<<b<<endl;
	    		while(a>=0&&b<n&&c>=0&&d<m){
	    			if(s[a--][j]==s[b++][j]&&s[i][c--]==s[i][d++]) count++;
	    			else break;
				}
			}
		}
	    cout<<count<<endl;
	}
}

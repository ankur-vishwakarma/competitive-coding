#include<bits/stdc++.h>
using namespace std;
int turn[19][2]={{7,7},{8,6},{3,1},{1,3},{5,7},{8,4},{5,1},{1,5},
                  {3,7},{8,2},{7,1},{1,7},{2,8},{3,7},{4,8},{5,7},{6,8},{7,7},{8,8}};
main(){
	int t;
	cin>>t;
	while(t--){
		int r,c,flag=0;
		cin>>r>>c;
		if(!(r==1&&c==1)){
			//lets reach 1,1 first
			flag=1;
			if(r>c){
				while(r!=c) r--,c++;
				cout<<"21\n"<<r<<" "<<c<<"\n1 1\n";
			}
			else if(r<c){
				while(r!=c) r++,c--;
				cout<<"21\n"<<r<<" "<<c<<"\n1 1\n";
			}
			else cout<<"20\n1 1\n";
			
			
		}
		if(flag!=1) cout<<"19\n";
		for(int i=0;i<19;i++) cout<<turn[i][0]<<" "<<turn[i][1]<<endl;
	}
}

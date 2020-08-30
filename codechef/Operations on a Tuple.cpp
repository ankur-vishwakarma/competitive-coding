#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int p[3],a[3];
		for(int i=0;i<3;i++) cin>>p[i];
		for(int i=0;i<3;i++) cin>>a[i];
		
		int mul[3],minus[3],count=3,count_mul=3,count_min=3;
		int one=3;
		if(a[0]==a[1]&&a[0]==a[2]&&a[0]!=0) one=2;
		for(int i=0;i<3;i++){
			minus[i]=a[i]-p[i];
			if(p[i]==0) mul[i]=INT_MAX;
			else if(a[i]%p[i]!=0) mul[i]=INT_MAX;
			else mul[i]=a[i]/p[i];
			if(minus[i]==0) count_min--;
			if(mul[i]==1) count_mul--;
			//cout<<minus[i]<<" "<<mul[i]<<endl;
		}
		if((minus[1]==minus[2]&&minus[1]!=0)||(minus[2]==minus[0]&&minus[0]!=0)||(minus[0]==minus[1]&&minus[0]!=0)) count_min--;
		if(minus[1]==minus[2]&&minus[2]==minus[0]&&minus[0]!=0) count_min--;
		if((mul[0]==mul[1]&&mul[0]!=INT_MAX&&mul[0]!=1)||(mul[1]==mul[2]&&mul[1]!=INT_MAX&&mul[1]!=1)||(mul[0]==mul[2]&&mul[0]!=INT_MAX&&mul[0]!=1)) count_mul--;
		if(mul[1]==mul[2]&&mul[2]==mul[0]&&mul[0]!=INT_MAX&&mul[0]!=1) count_mul--;
		int ans=min(count,min(count_mul,count_min));
		cout<<min(one,ans)<<endl;
	}
}

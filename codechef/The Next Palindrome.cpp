#include<iostream>
#include<vector>
#include<string>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t];
	for(int i=0;i<t;i++) cin>>s[i];
	for(int i=0;i<t;i++){
		int n=s[i],count=0,flag=0;
		vector<int> a;
		while(n!=0) a.push_back(n%10),n/=10,count++;
		int j=count/2-1,k=count/2;
		if(count%2!=0) k=k+1;
		for(;j>=0;j--,k++){
			//cout<<a[j]<<"h "<<a[k]<<endl;
			if(a[j]!=a[k]){
				if(flag!=1&&a[j]>a[k]) a[k]++,a[j]=a[k];
				else a[j]=a[k];
				flag=1;
			}
		}
		if(flag!=1){
			if(count%2==0) a[count/2-1]++,a[count/2]++;
			else a[count/2]++;
		}
		for(int j=0;j<count;j++) cout<<a[j];
		cout<<"\n";
	}
}

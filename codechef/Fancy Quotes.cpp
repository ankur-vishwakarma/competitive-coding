#include<iostream>
#include<string.h>
using namespace std;
int find(string a){
	int i=0;
	while(a[i]!='\0'){
		if(a[i]=='n'&&a[i+1]=='o'&&a[i+2]=='t') return 1;
		i++;
	}
	return 2;
}
main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0;i<n;i++){
		 getline(cin, s[i]);
		 cout<<"hello";
	}
	for(int i=0;i<n;i++) cout<<s[i];
	/*for(int i=0;i<n;i++){
		int a=find(s[i]);
		if(a==1) cout<<"Real Fancy\n";
		else cout<<"regularly fancy\n";
	}*/
}

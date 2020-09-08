#include<bits/stdc++.h>
using namespace std;
int recur(int *a,int n,int k){
	/*cout<<k<<"k ";
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<endl;*/
	if(n==1&&k==a[0]) return 0;
	if(n==1) return 1;
	int strt=0,end=0;
	for(int i=0;i<n/2;i++) if(a[i]==k) strt++;
	for(int i=n/2;i<n;i++) if(a[i]==k) end++;
	//cout<<strt<<" "<<end<<endl;
	/*if(strt>end){ //callright
	    int o=recur(a+n/2,n/2,k+1);
	    //cout<<(n/2-strt)<<"c r"<<o<<endl;
		return abs(n/2-strt)+recur(a+n/2,n/2,k+1);
	}
	else if(end>strt){
		int o=recur(a,n/2,k+1);
		//cout<<(end-n/2)<<"c r"<<o<<endl;
		return abs(end-n/2)+recur(a,n/2,k+1);
	}
	else{*/
		int left=recur(a,n/2,k+1);
		int right=recur(a+n/2,n/2,k+1);
		int leftans=left+abs(end-n/2);
		int rightans=right+abs(n/2-strt);
		if(leftans<rightans) return leftans;
		else return rightans;
		/*cout<<strt<<" "<<end<<endl;
		cout<<left<<"l r"<<right<<endl;
		if(left<right){
			cout<<abs(end-n/2)<<endl;
			return abs(end-n/2)+left;
		}
		else{
			cout<<abs(n/2-strt)<<endl;
			return abs(n/2-strt)+right;
		}*/
	//}
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int a[n];
		for(int i=0;i<n;i++) a[i]=s[i]-97;
		cout<<recur(a,s.size(),0)<<endl;
	}
}

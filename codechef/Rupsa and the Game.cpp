#include<bits/stdc++.h>
#define m 1000000007
using namespace std;
class node{
	public:
	int data;
	node *left,*right;
	node(int a){
		data=a;
	}
};
int total=0;
void sum(int *s,int n,node *tree,int nd){
	int i=nd/2;
	if(i>n) return;
	tree
}
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
	cin>>n;
	int s[n+1];
	for(int i=0;i<=n;i++) cin>>s[i];
	if(n==1){
		cout<<"0\n";
		continue;
	}
	node *tree=new node(s[0]);
	tree->left=tree->right=NULL;
	sum(s,n,tree,2);
	cout<<total<<endl;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
	    cin>>a[i];
	    int s[a[i]][2];
	    for(int j=0;j<a[i];j++) cin>>s[j][0]>>s[j][1];
	    int ans[11]={0};
	    for(int j=0;j<a[i];j++){
	        if(s[j][0]-1<8&&s[j][1]>ans[s[j][0]-1]) ans[s[j][0]-1]=s[j][1];
	    }
	    int total=0;
	    for(int j=0;j<8;j++) total+=ans[j];
	    cout<<total<<"\n";
	}
	return 0;
}

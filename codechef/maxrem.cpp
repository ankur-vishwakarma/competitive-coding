#include<iostream>
#include<algorithm>
using namespace std;
main(){
int n;
cin>>n;
int s[n],max=0,maxd=0;
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++) if(s[i]>max) max=s[i];
for(int i=0;i<n;i++) if(s[i]>maxd&&s[i]!=max) maxd=s[i];
 cout<<maxd;
}

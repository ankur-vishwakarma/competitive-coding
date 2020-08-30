#include<iostream>
using namespace std;
main(){
int t;
cin>>t;
int n[t];
string s[t];
for(int i=0;i<t;i++) cin>>n[i]>>s[i];
for(int i=0;i<t;i++){
float p=0,needed=0.75*n[i];
int ac=needed;
if(needed>ac) ac++;
for(int j=0;j<n[i];j++) if(s[i][j]=='P') p++;
float pr=p/n[i];
if(pr>=0.75) cout<<"0\n";
else{
if(n[i]<5) cout<<"-1\n";
else{
int pro=0;
for(int j=2;j<n[i]-2;j++){
while(s[i][j]!='A') j++;
if((s[i][j-1]='P'||s[i][j-2]=='P')&&(s[i][j+1]=='P'||s[i][j+2]=='P')) pro++;
}
if(pro>=ac-p) cout<<ac-p<<endl;
else cout<<"-1\n";
//remember to count
}
}
}
}

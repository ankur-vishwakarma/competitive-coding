#include<bits/stdc++.h>
using namespace std;
main(){
int t;
cin>>t;
string s[t][2];
int n[t][2];
for(int i=0;i<t;i++) cin>>s[i][0]>>s[i][1]>>n[i][0]>>n[i][1];
map <string,int> m;
m["sunday"]=1,m["monday"]=2,m["tuesday"]=3,m["wednesday"]=4,m["thursday"]=5,m["friday"]=6,m["saturday"]=7;
for(int i=0;i<t;i++){
int a=m[s[i][1]]-m[s[i][0]]+1,b=m[s[i][0]]-m[s[i][1]]+1;
if(a<0) a+=7;
if(b<0) b+=7;
if(b<a) b=a;
cout<<a<<endl;
}
}

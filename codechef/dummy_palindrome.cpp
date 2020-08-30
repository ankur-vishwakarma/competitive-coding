#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
string s[n];
for(int i=0;i<n;i++) cin>>s[i];
int t[26]={0};
for(int i=0;i<n;i++){
for(int j=0;j<s[i].length();j++) t[s[i][j]-97]++;
for(int j=0;j<26;j++) cout<<t[j]<<" ";
int odd=0;
for(int j=0;j<26;j++) if(t[j]%2!=0) odd++;

if(s[i].length()%2==0){
if(odd==1) cout<<"DPS";
else cout<<"!DPS"; }
else{
if(odd==1||odd==2||s[i].length()==3) cout<<"DPS";
else cout<<"!DPS";
}
}
}

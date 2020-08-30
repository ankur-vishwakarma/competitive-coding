#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int s[n],max=0,f,g;
for(int i=0;i<n;i++) cin>>s[i];
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(s[i]%s[j]>max) max=s[i]%s[j],f=s[i],g=s[j];
//cout<<s[i]%s[j]<<" "<<s[i]<<" "<<s[j] <<endl;
}}
cout<<max<<" "<<f<<" "<<g<<" "<<f%g;
}

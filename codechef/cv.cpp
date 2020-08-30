#include<iostream>
using namespace std;
main(){
int t;
cin>>t;
int n[t];
string s[t];
for(int i=0;i<t;i++) cin>>n[i]>>s[i];
for(int i=0;i<t;i++){
int c=0;
for(int j=0;j<n[i]-1;j++) if((s[i][j]!='a'&&s[i][j]!='e'&&s[i][j]!='i'&&s[i][j]!='o'&&s[i][j]!='u')&&(s[i][j+1]=='a'||s[i][j+1]=='e'||s[i][j+1]=='i'||s[i][j+1]=='o'||s[i][j+1]=='u')) c++;
cout<<c<<endl;
}
}

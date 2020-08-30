#include<iostream>
using namespace std;
main(){
int t;
cin>>t;
string s[t][2];
int n[t][2];
for(int i=0;i<t;i++) cin>>s[i][0]>>s[i][1]>>n[i][0]>>n[i][1];
string sol[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
for(int i=0;i<t;i++){
int start,j=0,end=0,flag=0;
while(sol[j]!=s[i][0]&&j<7) j++;
//cout<<j<<endl;
start=j;
j++;
if(j==7) j=0,flag=1;
while(sol[j]!=s[i][1]){
j++;
if(j==7) j=0,flag=1;
}
end=j;
if(flag==1) end=j+7;
//cout<<end-start+1<<endl;
int a=end-start+1;
if(a<n[i][0]||a>n[i][1]) cout<<"impossible\n";
else if(a==n[i][0]||a==n[i][1]) cout<<a<<endl;
else cout<<"many\n";
}
}

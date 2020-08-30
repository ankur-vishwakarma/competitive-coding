#include<iostream>
#include<string>
using namespace std;
main(){
int t;
cin>>t;
int arr[t];
string s[t];
string sub[t];
for(int i=0;i<t;i++) cin>>arr[i]>>s[i]>>sub[i];
for(int i=0;i<t;i++){
int count=0;
for(int j=0;j<arr[i];j++) if(s[i][j]==sub[i][0]) count++;
int c[count][2],l=0;
for(int j=0;j<arr[i];j++) if(s[i][j]==sub[i][0]) c[l][0]=j,c[l][1]=arr[i]-j-1,l++;
//for(int j=0;j<count;j++) cout<<c[j][0]<<" "<<c[j][1]<<endl;
int ans=0,total=0;
for(int j=0;j<count;j++){
cout<<c[j][0]<<"l "<<c[j][1]<<"r\n";
total=((arr[i]+1)*arr[i])/2;
int lhs=total-((c[j][0]+1+1)*(c[j][0]+1))/2-((arr[i]-(c[j][0]+1))*(c[j][0]+1));
int rhs=total-((c[j][1]+1+1)*(c[j][1]+1))/2-((arr[i]-(c[j][1]+1))*(c[j][1]+1));
cout<<lhs<<" "<<rhs<<endl;
ans=ans+lhs+rhs;
}
cout<<total-ans;
}
}

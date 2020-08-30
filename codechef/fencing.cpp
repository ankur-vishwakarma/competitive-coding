#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 
main(){
int t;
cin>>t;
int s[t][3];
vector<pair<int,int> >v;
int k=0;
for(int i=0;i<t;i++){
cin>>s[i][0]>>s[i][1]>>s[i][2];
int a,b,ms=k+s[i][2];
while(k<ms){
cin>>a>>b;
v.push_back( make_pair(a,b));
k++;
}
}
int size=v.size();
k=0;
/*for(int i=0;i<t;i++){
int total=s[i][2]*4;
int ms=k+s[i][2],m=s[i][0],n=s[i][1];
int mat[m][n];
for(int u=0;u<m;u++) for(int h=0;h<m;h++) mat[u][h]=0;
while(k<ms) mat[v[k].first-1][v[k].second-1]=1,k++;
for(int u=0;u<m;u++){
for(int h=0;h<n;h++){
if(mat[u][h]==1){
if(u-1>=0) if(mat[u-1][h]==1) total--;
if(u+1<m) if(mat[u+1][h]==1) total--;
if(h+1<n) if(mat[u][h+1]==1) total--;
if(h-1>=0) if(mat[u][h-1]==1) total--;
}}}
cout<<total<<"\n";
}*/
int total=0;
for(int i=0;i<t;i++){
int p=k,l=0;
vector<pair<int,int> >::iterator strt=v.begin(); //auto not working
vector<pair<int,int> >::iterator end=v.begin();
while(l<p) strt++,l++;
while(p<k+s[i][2]) end++,p++;
sort(k,k+s[i][2]);
for(int j=k;j<k+s[i][2]-1;k++){ 
if(v[j].first==v[j+1].first&&(v[j].second-v[j+1].second==1||v[j+1].second-v[j].second==1)) total++;
else total+=2;
}
sort(strt,end,sortbysec);
for(int j=k;j<k+s[i][2]-1;k++){ 
if(v[j].second==v[j+1].second&&(v[j].first-v[j+1].first==1||v[j+1].first-v[j].first==1)) total++;
else total+=2;
}
k=k+s[i][2];
cout<<total<<"\n";
}}

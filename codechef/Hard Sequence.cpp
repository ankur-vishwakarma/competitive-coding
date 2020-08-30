#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	int s[t];
	for(int i=0;i<t;i++) cin>>s[i];
	for(int i=0;i<t;i++){
		int arr[s[i]][3],ans[s[i]];
		for(int j=0;j<s[i];j++) arr[j][0]=-1;
		//making the array including count number(count,distance,pos)
		arr[0][0]=1,arr[0][1]=-1,arr[0][2]=0,ans[0]=0;
		for(int j=1;j<s[i];j++){
			//cout<<ans[j-1]<<"imj\n";
			if(arr[ans[j-1]][0]==1){
				ans[j]=0;
				arr[0][0]++;
				arr[0][1]=j-arr[0][2];
				arr[0][2]=j;
				//cout<<arr[0][0]<<"a "<<arr[0][1]<<" "<<arr[0][2]<<endl;
			}
			else{
				if(arr[arr[ans[j-1]][1]][0]==-1){
					//cout<<arr[arr[ans[j-1]][1]][0]<<"b\n";
					ans[j]=arr[ans[j-1]][1];
				    arr[ans[j]][0]=1,arr[ans[j]][1]=-1,arr[ans[j]][2]=j;
				    //cout<<arr[ans[j]][0]<<"b "<<arr[ans[j]][1]<<" "<<arr[ans[j]][2]<<endl;
				}
				else{
					ans[j]=arr[ans[j-1]][1];
					arr[ans[j]][0]++;
				    arr[ans[j]][1]=j-arr[ans[j]][2];
				    arr[ans[j]][2]=j;
				    //cout<<arr[ans[j]][0]<<"c "<<arr[ans[j]][1]<<" "<<arr[ans[j]][2]<<endl;
				}
			}
		}
		//for(int j=0;j<s[i];j++) cout<<ans[j]<<" ";
		//cout<<endl;
		cout<<arr[ans[s[i]-1]][0]<<endl;
	}
}

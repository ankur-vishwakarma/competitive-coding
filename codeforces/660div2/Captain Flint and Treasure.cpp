#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	vector<int> g[n+1],gr[n+1];
	int indeg[n+1]={},indegr[n+1]={};
	long long val[n+1];
	for(int i=1;i<=n;i++) cin>>val[i];
	for(int i=1;i<=n;i++){
		int e;
		cin>>e;
		if(e==-1) continue;
		g[i].push_back(e); gr[e].push_back(i);
		indeg[e]++;        indegr[i]++;
	}
	queue<int> q,ord;
	for(int i=1;i<=n;i++) if(indeg[i]==0) q.push(i);
	long long ans=0;
	while(!q.empty()){
		int k=q.front();
		q.pop();
		bool to_add=true;
		if(val[k]<0) to_add=false;
		if(to_add) ans+=val[k],ord.push(k);
		for(int i=0;i<g[k].size();i++){
			indeg[g[k][i]]--;
			if(indeg[g[k][i]]==0) q.push(g[k][i]);
			if(to_add) val[g[k][i]]+=val[k];
		}
	}
	
	for(int i=1;i<=n;i++) if(indegr[i]==0) q.push(i);
	while(!q.empty()){
		int k=q.front();
		q.pop();
		bool to_add=true;
		if(val[k]>=0) to_add=false;
		if(to_add) ans+=val[k],ord.push(k);
		for(int i=0;i<gr[k].size();i++){
			indegr[gr[k][i]]--;
			if(indegr[gr[k][i]]==0) q.push(gr[k][i]);
			//if(to_add) val[gr[k][i]]+=val[k];
		}
	}
	cout<<ans<<endl;
	while(!ord.empty()){
		cout<<ord.front()<<" ";
		ord.pop();
	}
}

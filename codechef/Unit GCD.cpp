#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
class need{
	public:
	unordered_map<int,bool> m;
	vector<int> nums;
};
main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		//using sieve for factors
		list<int> *facts=new list<int>[n+1];
		int primes[n+1];
		for(int i=1;i<=n;i++) primes[i]=1;  //assumed 1 as prime
		for(int i=2;i*i<=n;i++){
			if(primes[i]){
				cout<<i<<"-";
				for(int j=i*2;j<=n;j+=i){
					primes[j]=0;
					facts[j].push_back(i);
				}
				cout<<endl;
			}
		}
		for(int i=1;i<=n;i++){
			cout<<i<<"-";
			for(int f:facts[i]) cout<<f<<" ";
			cout<<endl;
		}
		need * obj=new need[n/2+1];
		int marked[n+1]={0};
		for(int i=2;i*i<=n;i++){
			if(primes[i]){
				int strt=i*i;
			    for(int j=0;j<n/2-1;j++){
				    if(!obj[j].m[i]&&!marked[strt]){ //if current we entering is not already a factor
				        cout<<strt<<" p"<<j<<" f"<<i<<endl;
				        obj[j].nums.push_back(strt);
				        for(int f:facts[strt]) obj[j].m[f]=1;
				        marked[strt]=1;
				    }
				    if(marked[strt]) strt=strt+i;
				    if(strt>n) break;
			    }
			}
		}
		for(int i=0;i<n/2;i++){
			for(int j=0;j<obj[i].nums.size();j++) cout<<obj[i].nums[j]<<" ";
			cout<<endl;
		}
	}
}

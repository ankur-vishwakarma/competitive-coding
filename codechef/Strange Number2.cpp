#include<bits/stdc++.h>
using namespace std;
int primeFactors(int n)  
{  
    long long sum=0;
    while (n % 2 == 0)  
    {  
        sum++;  
        n = n/2;  
    }  
    for (int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            sum++;  
            n = n/i;  
        }  
    }  
    if (n > 2)  sum++; 
    return sum;
}  
main(){
	int t;
	cin>>t;
	
	while(t--){
		int n,k;
		cin>>n>>k;
		//for(int i=1;i<=n;i++) cout<<i<<" "<<primes[i]<<endl;
		//calculate powers of primes
		long long sum=primeFactors(n);
		if(sum>=k) cout<<"1\n";
		else cout<<"0\n";
	}
}

#include<bits/stdc++.h>
using namespace std;
int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 
                        1, 2, 2, 3, 2, 3, 3, 4 }; 
unsigned int countSetBitsRec(unsigned int num) 
{ 
    int nibble = 0; 
    if (0 == num) 
        return num_to_bits[0]; 
  
    nibble = num & 0xf; 
  
    return num_to_bits[nibble] + countSetBitsRec(num >> 4); 
} 
main(){
	//ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n,q;
		scanf("%d%d",&n,&q);
		int s[n],t[q];
		for(int i=0;i<n;i++) scanf("%d",&s[i]);
		for(int i=0;i<q;i++) scanf("%d",&t[i]);
		int e=0,o=0;
		for(int i=0;i<n;i++){
			int c=countSetBitsRec(s[i]);
			if(c%2==0) e++;
			else o++;
		}
		for(int i=0;i<q;i++){
			int k=countSetBitsRec(t[i]);
			if(k%2==0) printf("%d %d\n",e,o);
			else printf("%d %d\n",o,e);
		}
	}
}

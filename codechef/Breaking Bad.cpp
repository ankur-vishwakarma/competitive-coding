#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = 
		arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int *arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(*arr, l, m, r); 
        
    } 
} 
main()
{
	int t;
	cin>>t;
	int s[t][2];
	int i,j,p[t][100000];
	for(i=0;i<t;i++){
		cin>>s[i][0]>>s[i][1];
		for(j=0;j<s[i][0];j++) cin>>p[i][j];
	}
	int max=0,sum=0;
	for(i=0;i<t;i++){
        mergeSort(&s[i],0,s[i][0]);
        for(int k=0;k<s[i][0];k++) cout<<p[i][k]<<" ";
		for(int k=s[i][0];k>s[i][0]-s[i][1]+1;k--) sum=sum+p[i][k];
		cout<<sum<<"s\n";
		sum=0;
	}
}

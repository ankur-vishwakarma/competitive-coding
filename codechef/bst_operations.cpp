#include<iostream>
using namespace std;
struct node{
int data;
struct node * left,*right;
}
struct node * root;
main(){
int q;
cin>>q;
char s[q];
int t[q];
for(int i=0;i<q;i++)

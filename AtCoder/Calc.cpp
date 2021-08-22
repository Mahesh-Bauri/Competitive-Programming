#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 



int a;
cin>>a;


int res = a + (a * a)+(a * a * a);

cout<<res;



}
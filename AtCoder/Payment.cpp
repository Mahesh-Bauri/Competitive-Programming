#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 



int n;
cin>>n;

int rem = (n % 1000);

int change;
if(rem == 0){
	change = 0;
}
else {
	change = 1000 - rem;
}

cout<<change;




	
}
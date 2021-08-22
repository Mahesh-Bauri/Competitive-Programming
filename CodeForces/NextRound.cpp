#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 


// code
int arr[50];
int con;
int count = 0;
int n,k;
cin>>n;
cin>>k;




for(int i = 0;i<n;i++){
	cin>>arr[i];
}

con = arr[k - 1];


for(int j = 0;j<n;j++){

	if(arr[j] >= con && arr[j] > 0){
		count++;
	}
}

cout<<count;

}
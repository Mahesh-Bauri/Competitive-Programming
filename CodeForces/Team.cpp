#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 



int count = 0;
int sum = 0;
int n;
cin>>n;

int arr[n][3];

for(int i = 0;i<n;i++){
	for(int j = 0;j<3;j++){
        
        cin>>arr[i][j];

	}
}


for(int i = 0;i<n;i++){
	sum = 0;
	for(int j = 0;j<3;j++){
        
       sum = sum + arr[i][j];

	}

	if(sum >= 2){
		count++;
		
	}
}



cout<<count;

}
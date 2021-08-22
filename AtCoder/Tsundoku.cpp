#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 



 long   n,m,k;
cin>>n>>m>>k;


long long da[n];
long long db[m];
long long read1[m+n];

 long long read = 0;
int count = 0;


for(int i = 0;i<n;i++){
	cin>>da[i];
}

for(int j = 0;j<m;j++){
	cin>>db[j];
}


int i = 0;
int j = 0;
int ind = 0;
while(i < n && j < m){


if(da[i] < db[j]){
	read1[ind++] = da[i++];
}else {
	read1[ind++] = db[j++];
}



}

while(i < n){
	read1[ind++] = da[i++];
}
while(j < m){
	read1[ind++] = db[j++];
}


int t = 0;
while(read <= k){

read += read1[t++];

if(read <= k){
	count++;
}
else {
	break;
}

}




cout<<count;


}
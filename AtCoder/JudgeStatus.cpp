#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 



int n;
cin>>n;

int ac = 0,wa = 0,tle = 0,re = 0;

while(n-- != 0){

string s;
cin>>s;



if(s[0] == 'A'){
	ac++;
}
else if(s[0] == 'W'){
	wa++;
}
else if(s[0] == 'T'){
	tle++;
}
else {
	re++;
}

}


cout<<"AC"<<" x "<<ac<<"\n";
cout<<"WA"<<" x "<<wa<<"\n";
cout<<"TLE"<<" x "<<tle<<"\n";
cout<<"RE"<<" x "<<re<<"\n";




}
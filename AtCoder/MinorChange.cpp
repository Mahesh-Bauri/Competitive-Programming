#include<iostream>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	    freopen("input.txt","r",stdin);
	    freopen("output.txt","w",stdout);
#endif 



string s;
string t;

cin>>s>>t;
int count = 0;
int i = 0;
while(s[i] != '\0'){

      if(s[i] != t[i]){
      	count++;
      }

 i++;
}


cout<<count;


}
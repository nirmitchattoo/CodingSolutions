//https://www.codechef.com/problems/DECINC
//Problem CODE- DECINC

#include <iostream>
using namespace std;

int main() {
	int num;
	cin>>num;
	if(num%4==0){
	    num++;
	    cout<<num;
	}
	
	else{
	    num--;
	    cout<<num;
	}
	return 0;
}

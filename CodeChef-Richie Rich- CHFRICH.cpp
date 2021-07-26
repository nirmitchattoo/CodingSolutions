//https://www.codechef.com/problems/CHFRICH
//PROBLEM CODE - CHFRICH
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int A,B,X,n,years;
	    cin>>A>>B>>X;
	    n=B-A;
	    years=(n/X);
	    
	    cout<<years<<'\n';
	    t--;
	    
	}
	return 0;
}

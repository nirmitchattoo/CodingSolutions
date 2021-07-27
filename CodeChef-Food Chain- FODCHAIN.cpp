//https://www.codechef.com/problems/FODCHAIN
//Problem CODE-FODCHAIN
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int e,k,count=0;
	    cin>>e>>k;
	    
	     
	     while(e>0){
	         count=count+1;
	         e=(int)e/k;
	     } 
	        
	       
	    
	    cout<<count<<endl;
	    t--;
	}
	return 0;
}

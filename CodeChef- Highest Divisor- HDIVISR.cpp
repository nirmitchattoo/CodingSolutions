//https://www.codechef.com/problems/HDIVISR
//Problem CODE- HDIVISR
#include <iostream>
using namespace std;

int main() {
	
	    int n;
	    cin>>n;
	    
	  for(int dv=10; dv>0; dv--){
	    if(n%dv==0){
	      cout<<dv;
	      break;
	    }
  }    
	 
	
	return 0;
}

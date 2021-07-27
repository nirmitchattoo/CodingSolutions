//https://www.codechef.com/problems/EITA
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int d,x,y,z,n1,n2;
	    cin>>d>>x>>y>>z;
	    
	    n1=d*y+(7-d)*z;
	    n2=7*x;
	    
	    if(n1>n2){
	        cout<<n1<<endl;
	    }
	    
	    else{
	        cout<<n2<<endl;
	    }
	    
	    t--;
	}
	return 0;
}

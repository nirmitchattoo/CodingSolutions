//https://www.codechef.com/problems/SUMPOS
//Problem CODE-SUMPOS
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(x+y==z || y+z==x || x+z==y){
	        cout<<"YES"<<'\n';
	    }
	    
	    else{
	        cout<<"NO"<<'\n';
	    }
	    t--;
	}
	return 0;
}

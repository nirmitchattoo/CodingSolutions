//https://www.codechef.com/problems/LAZYCHF
//Problem Code - LAZYCHF

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int x,m,d;
	    cin>>x>>m>>d;
	    
	    if(x+d<m*x){
	        cout<<x+d<<'\n';
	    }
	    
	    else{
	        cout<<m*x<<'\n';
	    }
	    t--;
	}
	return 0;
}

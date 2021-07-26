//https://www.codechef.com/problems/LUCKYFR
//Problem CODE- LUCKYFR
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n,d,count=0;
	    cin>>n;
	    
	    
	    while(n>1){
	        d=n%10;
	        if(d==4){
	            count++;
	            n=(n-d)/10;
	        }
	        
	        else{
	            n=(n-d)/10;
	        }
	    }
	    cout<<count<<'\n';
	    t--;
	}
	return 0;
}

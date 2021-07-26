//https://www.codechef.com/submit/CYCLICQD
//Problem CODE- CYCLICQD

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    
	    if(a+c==180 && b+d==180){
	        cout<<"YES"<<'\n';
	    }
	    
	    else{
	        cout<<"NO"<<'\n';
	    }
	    
	    t--;
	}
	return 0;
}

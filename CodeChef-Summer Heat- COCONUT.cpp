\\https://www.codechef.com/problems/COCONUT
\\Problem CODE- COCONUT
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int xa,xb,Xa,Xb,na,nb,total;
	    cin>>xa>>xb>>Xa>>Xb;
	    
	    na=(Xa/xa);
	    nb=(Xb/xb);
	    
	    total=na+nb;
	    
	    cout<<total<<'\n';
        t--;
	}
	return 0;
}

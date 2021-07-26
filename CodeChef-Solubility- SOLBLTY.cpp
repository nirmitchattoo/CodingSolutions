//codechef.com/problems/SOLBLTY
//Problem CODE- SOLBLTY
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t>0){
        int X,A,B,rise,sol,amt;
        cin>>X>>A>>B;
        rise=100-X;
        sol=A+(rise*B);
        amt=sol*10;
        
        cout<<amt<<'\n';
        t--;
        
        
    }
	return 0;
}

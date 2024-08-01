#include <bits/stdc++.h>
using namespace std;

bool isprime(int n){
    
    if(n==1){
        return false;
    }
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
	// your code goes here
	int T,N;
	
	cin>>T;
	
	while(T>0){
	    cin>>N;
	    
	    if (isprime(N)){
	        cout<<"yes"<<endl;
	    }else{
	        cout<<"no"<<endl;
	    }
	    T--;
	}
	return 0;

}

//In this we use BINARY EXPONENTIAL which is a technique used to calculate power of "x" in [long(n)] time. 

#include <iostream>
using namespace std;

int power(int a,int n){
        int res=1;

        while(n){
        if(n%2){
        res*=a;
        }
        a*=a;
        n/=2;
        }
        return res;
}
int main(){
        int A,N;
        std::cout<<"Enter a number:"<<endl;
        cin>>A>>N;
        std::cout<<power(A,N)<<endl; 
        return 0;
}



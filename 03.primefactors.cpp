#include<iostream>
using namespace std;

void primefac(int N){
        for(int i=2;i*i<=N;i++){
        if(N%i==0){
        int cnt = 0;
        while(N%i==0){
        cnt++;
        N/=i;
        std::cout<<i<<"^"<<cnt<<endl;
        }
        }
        }
        if(N>1){std::cout<<N<<"^"<<1<<endl;}
}
int main(){
        int n;
        std::cout<<"enter numeber to know its prime factors:"<<endl;
        cin>>n;
        primefac(n);
        return 0;
}



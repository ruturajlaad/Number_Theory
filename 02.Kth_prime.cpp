#include <iostream>
#include<vector>
using namespace std;

const int maxN=500000;
bool arr[maxN+1];
vector<int>primes;

void seive(){
        fill(arr,arr + maxN+1,false);
        arr[0]=arr[1]=true;

        for(int i=2;i*i<=maxN;i++){
                if(!arr[i]){
                for(int j=i*i;j<=maxN;j+=i){
                arr[j]=true;
                }
            }
        }

        for(int i=2;i<=maxN;i++){
        if(!arr[i]){
                primes.push_back(i);
}
}
}
int main() {
        // your code goes here
        seive();
        int q,n;

        std::cin>>q;
        while(q--){
        std::cin>>n;
        std::cout<<primes[n-1]<<endl;

        }
        return 0;
}


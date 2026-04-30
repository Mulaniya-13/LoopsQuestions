#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i=2;i<=n;i++){
        int curr = i;
        bool isPrime=true;
        for(int j=2;j<=sqrt(curr);j++){
            if(curr%j==0){
                isPrime=false;
            }
        }
        if(isPrime){
            cout<<curr<<" ";
        }
    }
    return 0;
}
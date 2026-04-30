#include<iostream>
using namespace std;
int main(){
    int n=15;
    int fizz=0,buzz=0;
    for(int i=1;i<=n;i++){
        fizz++;
        buzz++;
        if(i%3==0 && i%5==0){
            cout<<"FizzBuzz ";
            fizz=0;
            buzz=0;
        }
        else if(i%3==0){
            cout<<"Fizz ";
            fizz=0;
        }
        else if(i%5==0){
            cout<<"Buzz ";
            buzz=0;
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}

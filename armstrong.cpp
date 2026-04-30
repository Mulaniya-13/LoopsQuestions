#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    int cubeSum=0;
    while(num>0){
        int digit=num%10;
        cubeSum+=digit*digit*digit;
        num/=10;
    }
    if(cubeSum==n){
        cout<<n<<" is an Armstrong number.";
    }
    else{
        cout<<n<<" is not an Armstrong number.";
    }
    return 0;
}
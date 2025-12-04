#include<iostream>
#include<cmath>
using namespace std;
int binarytodecimal(int binnum){
    int rem,ans=0,pow=1;
    while(binnum>0){
    rem=binnum%10;
    rem=rem*pow;
    pow=pow*2;
    ans+=rem;
    binnum=binnum/10;
    }
    return ans;


}
int main(){
    int n;
    cout<<"enter a binary number:";
    cin>>n;
    cout<<"the decimal number is :"<<binarytodecimal(n);
    return 0;
}
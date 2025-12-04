#include<iostream>
#include<cmath>
using namespace std;
int decimal(int decnum){
    int ans=0,pow=1, rem;
    while(decnum>0){
            rem=decnum%2;
            decnum=decnum/2;
            ans+=rem*pow;
            pow=pow*10;
       
    }
    return ans;
}
int main(){
    int decnum;
    cout<<"enter a decimal number:";
    cin>>decnum;
cout<<"the solution is :"<<decimal(decnum);
return 0;
}
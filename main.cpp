#include <iostream>
#include "keys.h"
using namespace std;

int main()
{
    int a1,a2,a3,a4,a5;
    long long d;
    a4=10;
    cin>>a1>>a2;
    if(a1>=0){
        a5=a1;
    } else {
    a5=-1*a1;
    }
    d=itc_bin_num(a5);
    if(a1>=0){
    while(itc_len_num(d)>(a2+1)){
        a2--;
        a3=itc_pow(a4,a2);
        d=d%(a3*10);
    }
    cout<<d;
    } else {
    while(itc_len_num(d)>a2){
        a2--;
        a3=itc_pow(a4,a2);
        d=d%a3;
    }
    cout<<1;
    cout<<d;
    }
    return 0;
}


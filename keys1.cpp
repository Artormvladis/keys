long long itc_reverse_num(long long a1){
    long long a2;
    a2=0;
    if (a1<0)
        a1*=-1;
    while (a1>0){
        a2=a2*10+a1%10;
        a1/=10;
    }
    return a2;
}
long long itc_bin_num(long long a1){
    long long a2;
    a2=1;
    while(a1)
    {
        a2*=10;
        a2+=(a1%2);
        a1/=2;
    }
    return itc_reverse_num(a2)/10;
}
int itc_len_num(long long a1){
if (a1<0){a1=-1*a1;}
    int a2;
    a2=0;
    if (a1==0){
        return 1;
    } else {
        if (a1<0){
            a1=a1*(-1);
        }else{
                a1=a1;
        }
        while(a1>0){
            a1=a1/10;
            a2=a2+1;
        }
    }
    return a2;
}
double itc_pow(int a1, int a2) {
    double a3;
    a3=1;
    long long a4;
    if (a2<0)
        a4=-1*a2;
    else
        a4=a2;
    for (long long i=0;i<a4;++i)
        a3*=a1;
    if (a2<0)
        a3=1/a3;
    return a3;
}

#include<bits/stdc++.h>
using namespace std;
int is_prime(int n) {
    //if(n==1||n==0) return 0;//找出100以内质数可不运行此句
    if(n==2) return 1;
    for (int i=2;i*i<=n;i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int primes[101];
    memset(primes,0,sizeof(primes));
    for (int i=2;i<=100;i++) {
        if (is_prime(i)) {
            primes[i]=1;
        }
    }
    cout<<4<<"="<<2<<"+"<<2<<endl;
    for (int i=4;i<=100;i++) {
        for (int j=3;j+j<i;j++) {
            if (!is_prime(j)) {
                continue;
            }
            else if (is_prime(i-j)) {
                cout<<i<<"="<<j<<"+"<<i-j<<endl;
                //break;  //如果无需输出偶数拆分的所有情况可运行此句
            }
        }
    }
}
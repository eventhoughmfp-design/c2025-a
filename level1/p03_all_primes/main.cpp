#include<bits/stdc++.h>
#include<chrono>
using namespace std;
int is_prime(int n) {
    //if(n==1||n==0) return 0;//判断2-1000可不运行此句
    if(n==2) return 1;
    for (int i=2;i*i<=n;i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    auto start=chrono::high_resolution_clock::now();
    for (int i=2;i<=1000;i++) {
        if (is_prime(i)) {
            printf("%d ",i);
        }
        if (i%100==0) {
            printf("\n");
        }
    }
    auto end=chrono::high_resolution_clock::now();
    printf("\n");
    chrono::duration<double> elapsed=end-start;
    cout<<elapsed.count();
    return 0;
}
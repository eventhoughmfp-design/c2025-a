#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d",&n);
    bool p=true;
    for(int i=2;i*i<=n;i++) {
        if (n%i==0) p=false;
    }
    if (p) printf("n is prime\n");
    else printf("n is not prime\n");
    return 0;
}
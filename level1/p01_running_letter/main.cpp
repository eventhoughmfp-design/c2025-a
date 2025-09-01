#include <bits/stdc++.h>
#include<windows.h>
using namespace std;
int main() {
    char n;
    cin>>n;
    while (1) {
        for (int i=0;i<=150;i++) {
            system("cls");
            cout<<setw(i)<<n;
            Sleep(50);
        }
        for (int i=149;i>=1;i--) {
            system("cls");
            cout<<setw(i)<<n;
            Sleep(50);
        }
    }
}

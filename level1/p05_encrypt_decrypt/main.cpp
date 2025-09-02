#include<bits/stdc++.h>
using namespace std;
char ch;
void CaesarCipher(vector<char>& s,int deltal){
    deltal%=26;
    for(int i=0;;i++){
        if((ch=getchar())!='\n'){
            if (ch>='a'&&ch<='z') {
                s.push_back((ch-'a'+deltal)%26+'a');
            }
            else {
                s.push_back(ch);
            }
        }
        else{
            break;
        }
    }
    for (int i=0;i<s.size();i++) {
        cout<<s[i];
    }
}
void decode_CaesarCipher(vector<char>& s,int deltal) {
    deltal%=26;
    for (int i=0;i<s.size();i++) {
        if (s[i]<'a'||s[i]>'z') {
            continue;
        }
        else if (s[i]-deltal>='a'){
            s[i]=s[i]-deltal;
        }
        else {
            s[i]='z'-('a'-(s[i]-deltal-1));
        }
    }
}
int main() {
    int deltal;
    vector<char> s;
    cout<<"select a number as the offset of the Caesar cipher:";
    cin>>deltal;
    if ((ch=getchar())=='\n') {
        cout<<"please write down a string of letters and press Enter to get the ciphertext:";
    }
    CaesarCipher(s,deltal);
    cout<<endl<<"press Enter and you'll get the original text:";
    if ((ch=getchar())=='\n') {
        decode_CaesarCipher(s,deltal);
        for (int i=0;i<s.size();i++) {
            cout<<s[i];
        }
    }
    return 0;
}
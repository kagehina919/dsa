#include <bits/stdc++.h>
using namespace std;
bool anagram(string a, string b) {
    if(len(a)!= len(b)) return false;
    else {
         if(a-b == '') return true;
         else return false;
    }
}
int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    anagram(a, b);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a == b){
        cout << "YES"<< endl;
    }
    else cout << "No" << endl;
    if(anagram(a, b)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
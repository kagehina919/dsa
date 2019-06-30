#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin >> n;
    char str[] = n
    vector<char> st
    char *token = strtok(str, ".");
    while(token != NULL) {
        st.push_back(token);
        token = strtok(NULL, "-");
        i++;
    }
    reverse(st.begin(), st.end());
    for(int i=0;i<len(st);i++) {
        cout << st[i] << " ";
    }
    return 0;
}
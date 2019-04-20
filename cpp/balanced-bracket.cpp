// https://www.hackerrank.com/challenges/balanced-brackets/submissions/code/105478082

#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    int i;
    stack<char> st;
    for(i=0;i<s.length();i++) {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        }
        else if(!st.empty() && (s[i] == ')' && st.top() == '(' || s[i] == '}' && st.top() == '{' || s[i] == ']' && st.top() == '[')) {
            st.pop();
        }
        else {
            return "NO";
        }
    }
    if(st.empty()) {
        return "YES";
    }
    return "NO";
}

int main()
{

    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        cin>>s;
        string result = isBalanced(s);
        cout << result << "\n";
    }


    return 0;
}


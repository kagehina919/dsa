// unoptimized O(n2) solution

#include <bits/stdc++.h>
using namespace std;

int nextGreater(int arr[], int m) {
    int max;
    for(int i=0;i<m;i++) {
        max = arr[i];
        int flag = -1;
        for(int j=i+1;j<m;j++) {
            if(arr[j] > max) {
                flag = arr[j];
                break;
            }
        }
        cout << flag << " ";
    }
    cout << endl;
    return 0;
}
// stack O(n) solution
stack<int> st;
    st.push(arr[0]);
    for(int i=0;i<m;i++) {
        if (st.empty()) { 
          st.push(arr[i]); 
          continue; 
        }
        while (!st.empty() && st.top() < arr[i]) {          
            cout << arr[i] << " "; 
            st.pop(); 
        }
        st.push(arr[i]);
    }
    while (!st.empty()) { 
        cout << -1 << " "; 
        st.pop(); 
      }
    cout << endl;
    return 0;

int main() {
	int n;
	cin >> n;
	int result;
	for(int i=0;i<n;i++) {
	    int m;
	    cin >> m;
	    int arr[m];
	    for(int j=0;j<m;j++) {
	        cin >> arr[j];
	    }
	    nextGreater(arr, m);
	}
	return 0;
}
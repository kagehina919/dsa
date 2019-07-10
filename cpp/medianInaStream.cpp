#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        int x;
        cin >> a[i];
        if(n==1) {
            cout << a[0] << endl;
            break;
        }
        else if(i==0) cout << a[0] << endl;
        else {
            if(i%2 ==0) {
                int j = i/2;
                cout << a[j] << endl;
            }
            else {
                int k = i/2;
                int sum = (a[k] + a[k+1])/2;
                cout << sum << endl;
            }
        }
    }
	return 0;
}

// heap solution
#include<bits/stdc++.h> 
using namespace std;  
void printMedians(double arr[], int n) {
    // max heap
    priority_queue<double> s; 
    // min heap
    priority_queue<double,vector<double>,greater<double>> g; 
  
    double med = arr[0]; 
    s.push(arr[0]); 
  
    cout << med << endl;
    
    for (int i=1; i < n; i++) 
    { 
        double x = arr[i]; 
        if (s.size() > g.size()) 
        { 
            if (x < med) 
            { 
                g.push(s.top()); 
                s.pop(); 
                s.push(x); 
            } 
            else
                g.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
        else if (s.size()==g.size()) 
        { 
            if (x < med) 
            { 
                s.push(x); 
                med = (double)s.top(); 
            } 
            else
            { 
                g.push(x); 
                med = (double)g.top(); 
            } 
        } 
        else
        { 
            if (x > med) 
            { 
                s.push(g.top()); 
                g.pop(); 
                g.push(x); 
            } 
            else
                s.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
  
        cout << int(med) << endl; 
    } 
}

int main() { 
    int n;
    cin >> n;
    double a[n];
    for(int i=0;i<n;i++) {
        int x;
        cin >> a[i];
    }
    printMedians(a, n);
    return 0; 
}

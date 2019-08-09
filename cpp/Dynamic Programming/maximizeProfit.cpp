#include <bits/stdc++.h>
using namespace std;

int getProfit(int price[], int n, int k) {
    int profit[k+1][n+1];
    for(int i=0;i<=k;i++) profit[i][0] = 0;
    for(int i=0;i<n;i++) profit[0][i] = 0;
    for(int i=1;i<=k;i++) {
        for(int j=1;j<n;j++) {
            int max_s = INT_MIN;
            for(int m=0;m<j;m++) {
                max_s = max(max_s, price[j]-price[m]+profit[i-1][m]);
            }
            profit[i][j] = max(max_s, profit[i][j-1]);
        }
    }
    return profit[k][n-1];
}

int main() {
    int k;
    cin >> k;
    int n;
    cin >> n;
    int price[n];
    for(int i=0;i<n;i++) {
        cin >> price[i];
    }
    return getProfit(price, n, k);
}
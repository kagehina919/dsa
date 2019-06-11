// https://www.interviewbit.com/problems/repeat-and-missing-number-array/

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int a;
    int b;
    int sum = 0;
    int sum1 = 0;
    int n = A.size();
    for(int i=0;i<n-1;i++) {
        sum += A[i];
        sum1 += (i+1);
        for(int j=i+1;j<n;++j) {
            if(A[i] == A[j]) {
                a = A[i];
                break;
            }
        }
    }
    b = sum1-sum+a;
    cout << a << b << endl;
}

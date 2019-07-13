int solv(long long int a,long long int b,long long int d){
    if(b==0) return 1;
    if(b==1) return a;
    if(b%2==0) {
        return ( ( (long long int)powl( ((solv(a,(b/2),d))%d) , 2 ) ) % d);
    }
    else {
        return ( ( ( (long long int)powl( ((solv(a,(b/2),d))%d) , 2 )%d) *a) %d);
    }
}
int Solution::pow(int x, int n, int d) {
    long long int ans = solv(x,n,d)%d;
    if(ans<0){
        ans=(ans+d)%d;
    }
    return (int)ans;
}
string mulby2(string s){
    int n = s.size();
    int carry = 0;
    int temp;
    for(int i=n-1;i>=0;i--){
        temp = ((s[i] - '0')*2);
        s[i] = '0'+((temp+carry)%10);
        carry = (temp+carry)/10;
    }
    if(carry)
    s.insert (0, 1, carry+'0');
    return s;
}
int Solution::power(string A) {
    string s = "1";
    while(true){
        s = mulby2(s);
        if(A==s) return 1;
        if(s.size()>A.size()) return 0;
    }
}

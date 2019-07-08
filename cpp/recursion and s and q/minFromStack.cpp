{
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){
       int qt;
       cin>>qt;
       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/
/*returns min element from stack*/
int _stack :: getMin() {
    if(s.empty()) return -1;
    int min = 1000000000;
    stack<int> st;
    while(!s.empty()) {
        if(s.top() < min) {
            min = s.top();
        }
        st.push(s.top());
        s.pop();
    }
    while(!st.empty()) {
        s.push(st.top());
        st.pop();
    }
    return min;
}
/*returns poped element from stack*/
int _stack ::pop() {
    int x = s.top();
    s.pop();
    return x;
}
/*push element x into the stack*/
void _stack::push(int x) {
    s.push(x);
}

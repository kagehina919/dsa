#https://www.hackerrank.com/challenges/cpp-hello-world/problem
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    printf("Hello, World!");
    return 0;
}

#https://www.hackerrank.com/challenges/cpp-input-and-output/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;  
    int sum = a+b+c;
    cout << sum << endl; 
    return 0;
}

#https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a; long b; char c; float d; double e;
    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout.precision(3);
    cout<<fixed<<d<<endl;
    cout.precision(9);
    cout<<fixed<<e<<endl;
    return 0;
}

#https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (n == 1) {
        cout << "one" << endl;
    }
    else if(n == 2){
        cout << "two" << endl;
    }
    else if(n == 3){
        cout << "three" << endl;
    }
    else if(n == 4){
        cout << "four" << endl;
    }
    else if(n == 5){
        cout << "five" << endl;
    }
    else if(n == 6){
        cout << "six" << endl;
    }
    else if(n == 7){
        cout << "seven" << endl;
    }
    else if(n == 8){
        cout << "eight" << endl;
    }
    else if(n == 9){
        cout << "nine" << endl;
    }
    else{
        cout << "Greater than 9" << endl;
    }

    return 0;
}

#https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a; 
    int b;
    cin >> a;
    cin >> b;
    for(int i=a; i<=b; i++){
        if (i == 1) {
        cout << "one" << endl;
    }
        else if(i == 2){
            cout << "two" << endl;
        }
        else if(i == 3){
            cout << "three" << endl;
        }
        else if(i == 4){
            cout << "four" << endl;
        }
        else if(i == 5){
            cout << "five" << endl;
        }
        else if(i == 6){
            cout << "six" << endl;
        }
        else if(i == 7){
            cout << "seven" << endl;
        }
        else if(i == 8){
            cout << "eight" << endl;
        }
        else if(i == 9){
            cout << "nine" << endl;
        }
        else if(i>9 && i%2 ==1){
            cout << "odd" << endl;
        }
        else {
            cout << "even" << endl;
        }
    }
    return 0;
}



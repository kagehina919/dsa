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

#https://www.hackerrank.com/challenges/c-tutorial-functions/problem
#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max = 0;
    if(a>b && a>c && a>d){
        max = a;
    }
    else if(b>a && b>c && b>d){
        max = b;
    }
    else if(c>a && b<c && c>d){
        max = c;
    }
    else{
        max = d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

#https://www.hackerrank.com/challenges/c-tutorial-pointer/problem
#include <stdio.h>

void update(int *a,int *b) {
    *a = *a + *b;
    *b = 2*(*b) - *a;
    if(*b < 0){
        *b = -*b;
    }
    else{
        *b = *b;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

#https://www.hackerrank.com/challenges/arrays-introduction/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int arr[n];
    cin >> n;
    for(int i = 0; i<=n; i++){
        cin >> arr[i];
    }
    for(int j = 1; j<=n; j++){
        cout << arr[n-j] << " ";
    }
    return 0;
}

#https://www.hackerrank.com/challenges/variable-sized-arrays/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        a[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }
    for (int q_num = 0; q_num < q; q_num++) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}

#https://www.hackerrank.com/challenges/c-tutorial-strings/problem
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int c = a.size();
    int d = b.size();
    cout << c << " " << d << endl;
    string e = a + b;
    cout << e << endl;
    string f = b[0] + a;
    string g = a[0] + b;
    f.erase(f.begin() + 1);
    g.erase(g.begin() + 1);
    cout << f << " " << g << endl;
    return 0;
}

# https://www.hackerrank.com/challenges/c-tutorial-struct/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}

#https://www.hackerrank.com/challenges/c-tutorial-class/problem
#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age;
    int standard;
    string first_name;
    string last_name;
public:
    Student()
    {
        age = 0;
        standard = 0;
        first_name.clear();
        last_name.clear();
    }
    void set_age(int newAge)
    {
        age = newAge;
    }
    void set_standard(int newStandard)
    {
        standard = newStandard;
    }
    void set_first_name(string newFirst_name)
    {
        first_name = newFirst_name;
    }
    void set_last_name(string newLast_name)
    {
        last_name = newLast_name;
    }
    int get_age() {return age;}
    int get_standard() {return standard;}
    string get_first_name() {return first_name;}
    string get_last_name() {return last_name;}
    
    string to_string()
    {
        stringstream ss;
        char c = ',';
        ss << age << c << first_name << c << last_name << c << standard;
        return ss.str();
    }
    
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

#https://www.hackerrank.com/challenges/classes-objects/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

class Student {
  private:
    int scores[5];
    int sum = 0;
  public:
    int calculateTotalScore() {
		return sum;
	}
    void input() {
        for(int i=0; i<5; i++) {
            cin >> scores[i];
            sum+=scores[i];
        }
    }
};

https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/monk-and-prisoner-of-azkaban/
#include <bits/stdc++.h>

using namespace std;

#define ll long long int

stack <ll> st;
ll front[1000001], back[1000001], arr[1000001];

int main()
{
	ll n, i, x;
	cin >> n;
	for (i = 1; i <= n; i++) {
	    cin >> arr[i];
	}
	
	for (i = 1; i <= n; i++) {
	    if (st.empty() || arr[st.top()] >= arr[i]) {
	        st.push(i);
	    } 
	    else {
	        while (!st.empty() && arr[st.top()] < arr[i]) {
	            front[st.top()] = i;
	            st.pop();
	        }
	        st.push(i);
	    }
	}
	while (!st.empty()) {
	    front[st.top()] = -1;
	    st.pop();
	}
	
	for (i = n; i > 0; i--) {
	    if (st.empty() || arr[st.top()] >= arr[i]) {
	        st.push(i);
	    } 
	    else {
	        while (!st.empty() && arr[st.top()] < arr[i]) {
	            back[st.top()] = i;
	            st.pop();
	        }
	        st.push(i);
	    }
	}
	while (!st.empty()) {
	    back[st.top()] = -1;
	    st.pop();
	}
	
	for (i = 1; i <= n; i++) {
	    printf("%lld ", front[i] + back[i]);
	}
	
	return 0;
}


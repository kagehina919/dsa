#include <iostream>
using namespace std;

int main() {
    int i;
    for (i=1; i<10000; i++) {
        int num;
        cin >> num;
        if (num == 42) {
            break;
        } else {
            cout << num << endl;
        }
    };
}

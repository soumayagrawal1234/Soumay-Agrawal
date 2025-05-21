
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    int x;
    if(a%2==0){
      x=a-1;
    } 
    else{
      x=a;
    }
    for (int i = 1; i <= x; i++) {
        cout << (2 * i - 1);
        if (i != x) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}

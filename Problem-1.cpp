#include <iostream>
using namespace std;

int main() {
    double a, b;
    string operation;

  
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter one of  the operation  in these (add, sub, mul, div): ";
    cin >> operation;

    if (operation == "add"){
      cout<<a+b;
      return a + b;
    }
    else if (operation == "sub"){
      cout<<a-b;
       return a - b;
    }
    else if (operation == "mul"){
       cout<<a*b;
        return a * b;
    }
    else if (operation == "div") {
          if (b == 0) {
              cout << "Division by 0 is not possible" << endl;
              return -1;
          }
         cout<<a/b;
          return a / b;
    }
    else {
          cout << "Invalid operation" << endl;
          return -1;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter the total number of elements(greater than 0): ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Enter the elements(greater than 0): ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    map<int, int> countMap;
    
    for (int num : numbers) {
        for (int i = 1; i <= 9; i++) {
            if (num % i == 0) {
                countMap[i]++;
            }
        }
    }

    cout<< "{";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << countMap[i];
        if (i != 9){
          cout << ", ";
        }
    }
    cout<< "}" << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main(void) {
    int n;
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (n - i == j + 1)
                    cout << 2;
                else if (i == j)
                    cout << 1;
                else
                    cout << 3;
            }
            cout << endl;
        }
    }
    
    return 0;
}
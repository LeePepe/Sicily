#include <iostream>

using namespace std;
int main() {
    int n;
    while (cin >> n && n != 0) {
        string s;
        char letter[20][20];
        cin >> s;
        for (int i = 0; i < s.length() / n; i++) {
            for (int j = 0; j < n; j++) {
                letter[i][j] = s[i * n + j];
            }
        }
        
        for (int i = 0; i < s.length() / n; i++) {
            if (i % 2 == 1) {
                for (int j = 0; j < n / 2; j++) {
                    char c = letter[i][j];
                    letter[i][j] = letter[i][n - 1 - j];
                    letter[i][n - 1 - j] = c;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s.length() / n; j++) {
                cout << letter[j][i];
            }
        }
        cout << endl;
    }
    return 0;
}


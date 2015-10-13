#include <iostream>

using namespace std;

int main() {
    string k;
    while (cin >> k && k != "THEEND") {
        int ko[10];
        for (int i = 0; i < k.length(); i++) {
            int min = 30, index = -1;
            for (int j = 0; j < k.length(); j++) {
                if (k[j] - 'A' < min) {
                    min = k[j] - 'A';
                    index = j;
                }
            }
            ko[index] = i + 1;
            k[index] = 'Z' + 1;
        }
        string c;
        char ans[10][10];
        cin >> c;
        int h = c.length() / k.length();
        for (int i = 0; i < k.length(); i++) {
            for (int j = 0; j < h; j++) {
                ans[i][j] = c[(ko[i] - 1) * h + j];
            }
        }
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < k.length(); j++) {
                cout << ans[j][i];
            }
        }
        cout << endl;
        
    }
    return 0;
}

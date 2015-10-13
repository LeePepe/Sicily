#include <iostream>

using namespace std;

int main() {
    int n;
    char init[] = "ABCDE";
    string ranks[100];
    while (cin >> n && n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> ranks[i];
        }
        
        string ans;
        int min = 1000;
        do {
            int rank = 0;
            int pos[5];
            for (int i = 0; i < 5; i++) {
                pos[init[i] - 'A'] = i;
            }
            
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < 4; j++) {
                    for (int k = j + 1; k < 5; k++) {
                        if (pos[ranks[i][j] - 'A'] > pos[ranks[i][k] - 'A']) {
                            rank++;
                        }
                    }
                }
            }
            if (rank < min) {
                ans = init;
                min = rank;
            }
        } while (next_permutation(init, init + 5));
        cout << ans << " is the median ranking with value " << min << "." << endl;
    }
    return 0;
}

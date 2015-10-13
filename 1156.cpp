#include <iostream>
#include <cstdio>

using namespace std;

struct node {
    bool root;
    int l;
    int r;
    char c;
};

node tree[1001];

void print(int a) {
    if (a == 0) return;
    cout << tree[a].c;
    print(tree[a].l);
    print(tree[a].r);
}

int main() {
    int n = 0;
    int temp[1001];
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            int index;
            cin >> index;
            temp[i] = index;
            cin >> tree[index].c >> tree[index].l >> tree[index].r;
            tree[index].root = true;
        }
        for (int i = 0; i < n; i++) {
            tree[tree[temp[i]].l].root = false;
            tree[tree[temp[i]].r].root = false;
        }
        int root;
        for (root = 1; root <= 1000; root++) {
            if (tree[root].root == true) {
                tree[root].root = false;
                break;
            }
        }
        print(root);
        cout << endl;
    }
    return 0;
}

#include <iostream>
#include <queue>

using namespace std;

struct job {
  int pos;
  int pro;
};

bool cmp(int a, int b) {
  return a > b;
}

int main() {
  int n;
  cin >> n;
  queue<job> queue;
  while (n--) {
    int len, pos;
    cin >> len >> pos;
    int jobs[100];
    for (int i = 0; i < len; i++) {
      cin >> jobs[i];
      job j;
      j.pro = jobs[i];
      j.pos = i;
      queue.push(j);
    }

    sort(jobs, jobs+len, cmp);

    int index = 0;
    int result = 0;
    while (true) {
      if (queue.front().pro != jobs[index]) {
	job j = queue.front();
	queue.push(j);
	queue.pop();
      } else {
	index++;
	result++;
	if (queue.front().pos == pos) break;
	queue.pop();
      }
    }
    cout << result << endl;
    while (!queue.empty()) queue.pop();

  }
  return 0;
}

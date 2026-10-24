#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {

        int n, m;
        cin >> n >> m;

        int i = 0, j = 0;

        // RD=1
        // RU=2
        // LD=3
        // LU=4

        int curr = 1;

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        int count = 0;
        int steps = 0;

        while (true) {

            steps++;

            if (!visited[i][j]) {
                visited[i][j] = true;
                count++;
            }

            // stop if reached any corner except starting corner
            if ((i == 0 && j == m - 1) ||
                (i == n - 1 && j == 0) ||
                (i == n - 1 && j == m - 1)) {
                break;
            }

            // RD
            if (curr == 1) {

                if (i + 1 < n && j + 1 < m) {
                    i++;
                    j++;
                }
                else if (i + 1 >= n) {
                    curr = 2; // RU
                    i--;
                    j++;
                }
                else {
                    curr = 3; // LD
                    i++;
                    j--;
                }
            }

            // RU
            else if (curr == 2) {

                if (i - 1 >= 0 && j + 1 < m) {
                    i--;
                    j++;
                }
                else if (i - 1 < 0) {
                    curr = 1; // RD
                    i++;
                    j++;
                }
                else {
                    curr = 4; // LU
                    i--;
                    j--;
                }
            }

            // LD
            else if (curr == 3) {

                if (i + 1 < n && j - 1 >= 0) {
                    i++;
                    j--;
                }
                else if (i + 1 >= n) {
                    curr = 4; // LU
                    i--;
                    j--;
                }
                else {
                    curr = 1; // RD
                    i++;
                    j++;
                }
            }

            // LU
            else {

                if (i - 1 >= 0 && j - 1 >= 0) {
                    i--;
                    j--;
                }
                else if (i - 1 < 0) {
                    curr = 3; // LD
                    i++;
                    j--;
                }
                else {
                    curr = 2; // RU
                    i--;
                    j++;
                }
            }
        }

        cout << steps*2-2 << " " << count << endl;
    }

    return 0;
}
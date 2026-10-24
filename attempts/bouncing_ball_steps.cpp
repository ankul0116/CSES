#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m, steps;
        cin >> n >> m >> steps;

        int i = 0, j = 0;
        int curr = 1;
        int dir = 0;

        while (steps > 0) {
            steps--;

            // RD
            if (curr == 1) {
                if (i + 1 >= n && j + 1 >= m) {
                    curr = 4; dir++; i--; j--;
                }
                else if (i + 1 >= n) {
                    curr = 2; dir++; i--; j++;
                }
                else if (j + 1 >= m) {
                    curr = 3; dir++; i++; j--;
                }
                else { i++; j++; }
            }

            // RU
            else if (curr == 2) {
                if (i - 1 < 0 && j + 1 >= m) {
                    curr = 3; dir++; i++; j--;
                }
                else if (i - 1 < 0) {
                    curr = 1; dir++; i++; j++;
                }
                else if (j + 1 >= m) {
                    curr = 4; dir++; i--; j--;
                }
                else { i--; j++; }
            }

            // LD
            else if (curr == 3) {
                if (i + 1 >= n && j - 1 < 0) {
                    curr = 2; dir++; i--; j++;
                }
                else if (i + 1 >= n) {
                    curr = 4; dir++; i--; j--;
                }
                else if (j - 1 < 0) {
                    curr = 1; dir++; i++; j++;
                }
                else { i++; j--; }
            }

            // LU
            else {
                if (i - 1 < 0 && j - 1 < 0) {
                    curr = 1; dir++; i++; j++;
                }
                else if (i - 1 < 0) {
                    curr = 3; dir++; i++; j--;
                }
                else if (j - 1 < 0) {
                    curr = 2; dir++; i--; j++;
                }
                else { i--; j--; }
            }
        }

        // output dir not dir+1
        cout << i + 1 << " " << j + 1 << " " << dir << "\n";
    }

    return 0;
}
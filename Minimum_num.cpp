#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> balloons = {
        {10, 16},
        {2, 8},
        {1, 6},
        {7, 12}
    };

    sort(balloons.begin(), balloons.end(),
         [](const vector<int>& a, const vector<int>& b) {
             return a[1] < b[1];
         });

    int arrows = 1;
    int arrowPosition = balloons[0][1];

    for (int i = 1; i < balloons.size(); i++) {

        if (balloons[i][0] > arrowPosition) {
            arrows++;
            arrowPosition = balloons[i][1];
        }
    }

    cout << "Minimum Arrows Required: " << arrows;

    return 0;
}

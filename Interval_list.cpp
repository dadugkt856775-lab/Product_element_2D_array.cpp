#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> A = {
        {0, 2},
        {5, 10},
        {13, 23},
        {24, 25}
    };

    vector<vector<int>> B = {
        {1, 5},
        {8, 12},
        {15, 24},
        {25, 26}
    };

    int i = 0, j = 0;

    cout << "Intersections: ";

    while (i < A.size() && j < B.size()) {

        int start = max(A[i][0], B[j][0]);
        int end = min(A[i][1], B[j][1]);

        if (start <= end)
            cout << "[" << start << ", " << end << "] ";

        if (A[i][1] < B[j][1])
            i++;
        else
            j++;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> intervals = {
        {1, 2},
        {2, 3},
        {3, 4},
        {1, 3}
    };

    sort(intervals.begin(), intervals.end());

    int removed = 0;
    int lastEnd = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {

        if (intervals[i][0] < lastEnd) {
            removed++;
            lastEnd = min(lastEnd, intervals[i][1]);
        }
        else {
            lastEnd = intervals[i][1];
        }
    }

    cout << "Intervals to Remove: " << removed;

    return 0;
}

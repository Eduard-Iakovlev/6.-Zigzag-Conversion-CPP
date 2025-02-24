#include "Solution.h"
#include <vector>

string Solution::convert(string s, int numRows){
    if (numRows == 1) return s;

    vector<string> zigzag(numRows);
    int next(0);
    bool revers = true;

    for (char i : s) {
        zigzag[next].push_back(i);
        if (revers) {
            ++next;
            if (next > numRows - 1) {
                --next;
                revers = false;
            }
        }
        if (!revers) {
            --next;
            if (next < 0) {
                ++next;
                revers = true;
                ++next;
            }
        }
    }

    s.clear();
    for (auto i : zigzag) s += i;
    return s;

}

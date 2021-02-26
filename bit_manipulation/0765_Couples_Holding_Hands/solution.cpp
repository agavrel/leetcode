#include <vector>

class Solution {
public:
    int minSwapsCouples(vector<int>& row) {
	int n = row.size();
	int t[n];
	for (int i = 0; i < n; i++) // build t, ordered row
        t[row[i]] = i;

	int swaps = 0;
	for (int i = 0; i < n - 1; i+=2) { // greedy approach
		if (row[i+1] != (row[i]^1)) { // if spouses not adjacent
			int tmp = t[row[i]^1]; // get the current value in the ordered row
			swap(row[tmp],row[i+1]); // swap index of one of the spouse with the ordered row
			t[row[i]^1] = i + 1;
			t[row[tmp]] = tmp;
			swaps++; // increase counter
		}
	}
	return swaps;
}
};
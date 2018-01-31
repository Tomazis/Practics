#include "stdafx.h"

using namespace std;

bool Sequence(int s, int n, vector<int> seq) {
	if (s < 0 || n < 0) {
		throw out_of_range("Negative values");
	}
	if (s > 30000 || n > 30000) {
		throw out_of_range("Too big value");
	}
	int S = s , N = n;
	int mn = 0, sum = 0;
	bool answer = true;
	int x;
	for (int i = 1; i <= S; i++) {
		x = seq[i - 1];
		sum += x;

		if (sum - i - mn > N) answer = false;

		mn = min(mn, sum - i);
	}

	return answer;
}
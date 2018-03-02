#include "stdafx.h"

using namespace std;

bool Sequence(int s_), int n_, vector<int> seq) {
	if (s_ <= 0 || n_ <= 0) {
		throw out_of_range("Negative values");
	}
	if (s_ > 30000 || n_ > 30000) {
		throw out_of_range("Too big value");
	}
	int s = s_, n = n_;
	int mn = 0, sum = 0;
	bool answer = true;
	int x;
	if (seq.size() != s) {
		throw out_of_range("Incorrect vector size");
	}
	for (int i = 1; i <= s; i++) {
		x = seq[i - 1];
		if (x < 0 || x> 100) {
			throw out_of_range("Incorrect vector size");
		}
		sum += x;
		if (sum - i - mn > n) {
			answer = false;
		}
		mn = min(mn, sum - i);
	}
		return answer;
}
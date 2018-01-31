// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main() {
	int S, N;
	int mn = 0, sum = 0;
	int x;
	bool answer = true;

	cin >> S >> N;

	for (int i = 1; i <= S; i++) {
		cin >> x;
		sum += x;
		if (sum - i - mn > N) answer = false;
		cout << mn << "  " << sum - i << endl;
		mn = min(mn, sum - i);
		}

	if (answer) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;
}
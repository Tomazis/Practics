// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

int main() {
	int s, n;
	int mn = 0, sum = 0;
	int x;
	bool answer = true;
	cin >> s >> n;
	for (int i = 1; i <= s; i++) {
		cin >> x;
		sum += x;
		if (sum - i - mn > n) {
			answer = false;
		}
		cout << mn << "  " << sum - i << endl;
		mn = min(mn, sum - i);
	}
	if (answer) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}
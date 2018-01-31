#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;



int main() {
	int weight, n;
	int w[100], dp[100001], choice[100001];

	cin >> weight >> n;

	weight *= -1;


	for (int i = 0; i<n; i++) {
		cin >> w[i];
		weight += w[i];
	}

	memset(dp, 0, sizeof(dp));
	memset(choice, 0, sizeof(choice));

	dp[0] = 1;
	choice[0] = -1;

	for (int i = n - 1; i >= 0; i--) {
		for (int j = weight; j >= w[i]; j--) {
			if (dp[j - w[i]] != 0) {
				dp[j] += dp[j - w[i]];
				if (choice[j] == 0) choice[j] = i + 1;
			}
		}
	}

	if (dp[weight] >= 2) cout << "-1" << endl;
	else if (dp[weight] == 0) cout << "0" << endl;
	else {
		while (weight != 0) {
			cout << choice[weight] << " ";
			weight -= w[choice[weight] - 1];
		}

		cout << endl;
	}
	system("PAUSE");
	return 0;
}
#include <bits/stdc++.h>

using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector <int> apples, vector <int> oranges) {
	int minAppleDistance = s - a;
	int maxAppleDistance = t - a;
	int appleCount = 0;
	for (int i = 0; i < apples.size(); i++) {
		if (apples[i] >= minAppleDistance && apples[i] <= maxAppleDistance) {
			appleCount++;
		}
	}
	int minOrangeDistance = t - b;
	int maxOrangeDistance = s - b;
	int orangeCount = 0;
	for (int j = 0; j < oranges.size(); j++) {
		if (oranges[j] <= minOrangeDistance && oranges[j] >= maxOrangeDistance) {
			orangeCount++;
		}
	}

	cout << appleCount << "\n";
	cout << orangeCount;
}

int main() {
	int s;
	int t;
	cin >> s >> t;
	int a;
	int b;
	cin >> a >> b;
	int m;
	int n;
	cin >> m >> n;
	vector<int> apple(m);
	for (int apple_i = 0; apple_i < m; apple_i++) {
		cin >> apple[apple_i];
	}
	vector<int> orange(n);
	for (int orange_i = 0; orange_i < n; orange_i++) {
		cin >> orange[orange_i];
	}
	countApplesAndOranges(s, t, a, b, apple, orange);
	return 0;
}

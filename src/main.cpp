#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	long long w1, h1, w2, h2;
	cin >> w1 >> h1
		>> w2 >> h2;

	auto minW = w1 < w2 ? w1 : w2;

	auto ans = (2 * (w1 + h1) + 4) + (2 * (w2 + h2) + 4) - 2 * (minW + 2);
	cout << ans;

	return 0;
}
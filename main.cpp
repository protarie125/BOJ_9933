#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int n;
vs dat;
vs rv;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> n;
	dat.reserve(n);
	rv.reserve(n);

	for (auto i = 0; i < n; ++i) {
		string s;
		cin >> s;

		if (1 == s.length() % 2) {
			dat.push_back(s);

			reverse(s.begin(), s.end());
			rv.push_back(s);
		}
	}

	auto isFound = bool{ false };
	for (const auto& x : dat) {
		if (isFound) {
			break;
		}

		for (const auto& y : rv) {
			if (x == y) {
				isFound = true;

				const auto& l = x.length();
				cout << l << ' ' << x[l / 2];

				break;
			}
		}
	}

	return 0;
}
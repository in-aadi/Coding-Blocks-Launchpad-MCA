#include<iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {

		int c1, c2, c3, c4;
		cin >> c1 >> c2 >> c3 >> c4;
		int n, m;
		cin >> n >> m;

		int rickshaw[n];
		int cabs[m];

		for (int i = 0; i < n; i++) {
			cin >> rickshaw[i];
		}
		
		for (int i = 0; i < m; i++) {
			cin >> cabs[i];
		}

		int rickshaw_price = 0;
		for (int i = 0; i < n; i++) {
			if ((rickshaw[i] * c1) < c2) {
				rickshaw_price = rickshaw_price + (rickshaw[i] * c1);
			} else {
				rickshaw_price = rickshaw_price + c2;
			}
		}

		if (rickshaw_price > c3) {
			rickshaw_price = c3;
		}

		int cab_price = 0;
		for (int i = 0; i < m; i++) {
			if ((cabs[i] * c1) < c2) {
				cab_price = cab_price + (cabs[i] * c1);
			} else {
				cab_price = cab_price + c2;
			}
		}

		if (cab_price > c3) {
			cab_price = c3;
		}

		int ans;
		if (cab_price + rickshaw_price < c4) {
			ans = cab_price + rickshaw_price;
		} else {
			ans = c4;
		}

		cout << ans << endl;

	}
	return 0;
}
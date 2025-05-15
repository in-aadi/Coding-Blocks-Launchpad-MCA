#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		int target;
		cin >> target;
		int min_diff = 1000001;
		int n1, n2;
		for (int i = 0; i < n; i++) {
			int a = arr[i];
			for (int j = i + 1; j < n; j++) {
				int b = arr[j];
				if (a + b == target) {
					if (a < b) {
						// swap
						int c = a;
						a = b;
						b = c;
					}
					if ((a - b) < min_diff) {
						n1 = a;
						n2 = b;
						min_diff = a - b;
					}
				}
			}
		}
		cout << "Deepak should buy roses whose prices are " << n2 << " and " << n1 << "." << endl;
	
	}
	return 0;
}
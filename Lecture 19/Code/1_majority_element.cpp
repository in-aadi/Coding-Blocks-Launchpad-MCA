#include<iostream>
using namespace std;
int main () {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		int count = 0;
		int ele = arr[i];
		for (int j = 0; j < n; j++) {
			if (ele == arr[j]) {
				count++;
			}
		}
		if (count > n / 2) {
			cout << ele;
			break;
		}
	}
	return 0;
}
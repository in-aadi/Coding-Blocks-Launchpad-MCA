#include <iostream>
using namespace std;

int main() {
    // array input
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    

    int left_max = arr[0];
    int curr_max = arr[0];
    int ans_idx = 0;

    for (int i = 1; i < n; i++) {
        if (curr_max < arr[i]) {
            curr_max = arr[i];
        }
        if (left_max > arr[i]) {
            ans_idx = i;
            left_max = curr_max;
        }
    }

    cout << ans_idx + 1;

    return 0;
}
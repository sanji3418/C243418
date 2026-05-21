#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int lis[n];

    for(int i = 0; i < n; i++) {
        lis[i] = 1;
    }

    for(int i = 1; i < n; i++) {

        for(int j = 0; j < i; j++) {

            if(arr[i] > arr[j] && lis[i] < lis[j] + 1) {
                lis[i] = lis[j] + 1;
            }
        }
    }

    int maxLength = 0;

    for(int i = 0; i < n; i++) {
        if(lis[i] > maxLength) {
            maxLength = lis[i];
        }
    }

    cout << "Length of LIS = " << maxLength;

    return 0;
}

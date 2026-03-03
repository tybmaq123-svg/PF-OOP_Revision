#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int requirednumber){

int low = 0, high = n - 1;

while (low <= high) {
    int mid = (low + high) / 2;

    if (arr[mid] == requirednumber)
        return mid;
    else if (arr[mid] < requirednumber)
        low = mid + 1;
    else
        high = mid - 1;
}

return -1;
}

int main() {
    int n, requirednumber;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> requirednumber;

    cout << binarySearch(arr, n, requirednumber);

    return 0;
}
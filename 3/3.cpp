//Sina Khorashahi - 98440373
//3
#include<iostream>
int binarySearch(int[], int, int, int);

int main(void)
{
    int arr[] = { 2, 3, 4, 5, 5, 6, 8, 9, 10, 10, 15, 17, 19, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;
    std::cin >> x;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
        std::cout << "Element is not present in array";
    else
        std::cout << "Element is present at index " << result;
    return 0;
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)  return mid;
        if (arr[mid] > x) return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
     sort(arr, arr + n);
     cout << arr[0] << " "; 
     cout << arr[n-1] << " ";
    return 0;
}

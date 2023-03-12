#include <bits/stdc++.h>
#include "Quicksort.h"
#include "Heapsort.h"
#include "Mergesort.h"
using namespace std;
int n;
float a[1000001],b[1000001];
int main()
{
    freopen("test.inp", "r", stdin);
    freopen("test.out", "w", stdout);
    clock_t start, finish;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        b[i]=a[i];
    }
    start = clock();
    mergeSort(a, 0, n - 1);
    finish = clock();
    cout << "Merge Sort: " << (finish - start)  * 1.0 /CLOCKS_PER_SEC << "s\n";
    for(int i=0; i<n; i++)
    {
        a[i]=b[i];
    }
    start = clock();
    quickSort(a, 0, n - 1);
    finish = clock();
    cout << "Quick Sort: " << (finish - start) * 1.0 /CLOCKS_PER_SEC << "s\n";
    for(int i=0; i<n; i++)
    {
        a[i]=b[i];
    }
    start = clock();
    heapSort(a, n - 1);
    finish = clock();
    cout << "Heap Sort: " << (finish - start) * 1.0 /CLOCKS_PER_SEC << "s\n";
    for(int i=0; i<n; i++)
    {
        a[i]=b[i];
    }
    start = clock();
    sort(a, a + n);
    finish = clock();
    cout << "std::sort in C++: " << (finish - start)  * 1.0 /CLOCKS_PER_SEC << "s\n";
}

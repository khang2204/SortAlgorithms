float SX[1000001];
void mergeSort(float array[], int const begin, int const end)
{
    if (begin >= end)
        return;
    auto mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    int i = begin, j = mid + 1;
	int cur = 0;

	while (i <= mid || j <= end) {
		if (i > mid) {
			SX[cur++] = array[j++];
		} else if (j > end) {
			SX[cur++] = array[i++];
		} else if (array[i] < array[j]) {
			SX[cur++] = array[i++];
		} else {
			SX[cur++] = array[j++];
		}
	}
	for (int i = 0; i < cur; i++)
		array[begin + i] = SX[i];
}

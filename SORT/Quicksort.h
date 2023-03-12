void swap(float &a,float &b){
    float t=a;
    a=b;
    b=t;
}
void quickSort(float a[], int left, int right) {
	int i = left, j = right;
	float pivot = a[left + rand() % (right - left)];
	while (i <= j) {
		while (a[i] < pivot) ++i;
		while (a[j] > pivot) --j;

		if (i <= j) {
			swap(a[i], a[j]);
			++i;
			--j;
		}
	}
	if (left < j) quickSort(a, left, j);
	if (i < right) quickSort(a, i, right);
}

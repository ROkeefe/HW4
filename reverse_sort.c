int compare(int a, int b) {
	    return b - a;
}

int comp(const void* x, const void* y) {
	int a = *(const int *)x;
	int b = *(const int *)y;
	if (a < b)
		return 1;
	else if (a > b)
		return -1;
	else
		return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int arr[70][70];

void tree(int r, int c, int idx) {
	printf("\n%d %d : %d\n", r, c, idx);
	if (idx <= 2)
		return;

	int tmax = 0;
	for (int i = r; i < r + idx; i++) {
		for (int j = c; j < c + idx; j++) {
			if (tmax < arr[i][j]) {
				tmax = arr[i][j];
			}
		}
	}
	printf("tmax:%d\n", tmax);

	int m[4] = { 0, };
	for (int i = r; i < r + idx / 2; i++) {
		for (int j = c; j < c + idx / 2; j++) {
			if (m[0] < arr[i][j]) {
				m[0] = arr[i][j];
			}
		}
	}

	for (int i = r; i < r + idx / 2; i++) {
		for (int j = c + idx / 2; j < c + idx; j++) {
			if (m[1] < arr[i][j]) {
				m[1] = arr[i][j];
			}
		}
	}

	for (int i = r + idx / 2; i < r + idx; i++) {
		for (int j = c; j < c + idx / 2; j++) {
			if (m[2] < arr[i][j]) {
				m[2] = arr[i][j];
			}
		}
	}

	for (int i = r + idx / 2; i < r + idx; i++) {
		for (int j = c + idx / 2; j < c + idx; j++) {
			if (m[3] < arr[i][j]) {
				m[3] = arr[i][j];
			}
		}
	}

	int min = 105;
	for (int i = 0; i < 4; i++) {
		printf("m[%d]:%d\n", i,m[i]);
		if (min > m[i])
			min = m[i];
	}

	if (1.2f*min > tmax) {
		printf("1");
		tree(r, c, idx / 2);
		tree(r, c + idx / 2, idx / 2);
		tree(r + idx / 2, c, idx / 2);
		tree(r + idx / 2, c + idx / 2, idx / 2);
	}
	else {
		printf("0");
	}
}

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int n;
		scanf("%d", &n);

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				scanf("%d", &arr[j][k]);
			}
		}

		printf("#%d ", i);
		tree(0, 0, n);
		printf("\n");
	}
	return 0;
}

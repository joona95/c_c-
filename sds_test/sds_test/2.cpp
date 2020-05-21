#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int k;
		scanf("%d", &k);

		int sdoku[15][15];
		for (int j = 1; j <= 9; j++) {
			for (int k = 1; k <= 9; k++) {
				scanf("%d", &sdoku[j][k]);
			}
		}

		printf("#%d ", i);
		for (int n = 1; n <= k; n++) {
			bool exit = false;
			for (int j = 1; j <= 9; j++) {
				for (int k = 1; k <= 9; k++) {
					int cnt[15][3] = { 0, };

					for (int m = 1; m <= 9; m++) {
						cnt[sdoku[j][m]][0] += 1;
					}
					for (int m = 1; m <= 9; m++) {
						cnt[sdoku[m][k]][1] += 1;
					}


					for (int m = 1; m <= 3; m++) {
						for (int l = 1; l <= 3; l++) {
							cnt[sdoku[((j - 1) / 3) * 3 + m][((k - 1) / 3) * 3 + l]][2] += 1;
						}
					}

					/*
					printf("**\n");
					for (int m = 0; m < 3; m++) {
						for (int l = 1; l <= 9; l++) {
							printf("%d ", cnt[l][m]);
						}
						printf("\n");
					}
					printf("**\n");
					*/

					if (cnt[sdoku[j][k]][0] !=1 && cnt[sdoku[j][k]][1] != 1 && cnt[sdoku[j][k]][2] != 1) {
						int count = 0, num;
						for (int m = 1; m <= 9; m++) {
							if (cnt[m][0] == 0 && cnt[m][1] == 0 && cnt[m][2] == 0) {
								count += 1;
								num = m;
							}
						}

						if (count == 1) {
							sdoku[j][k] = num;
							printf("%d %d %d ", j, k, num);
							exit = true;
							break;
						}
					}
				}
				if (exit == true)
					break;
			}
		}
		
		printf("\n");

	}
	return 0;
}
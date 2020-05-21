#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int cube[7][12];

int main() {
	int t, m, c, p;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		//cube initialize
		for (int j = 0; j < 6; j++) {
			for (int k = 1; k <= 9; k++) {
				cube[j + 1][k] = j * 9 + k;
			}
		}

		scanf("%d", &m);
		for (int j = 0; j < m; j++) {
			scanf("%d", &c);

			int tmp1, tmp2;
			switch (c) {
			case 1:
			case 2:
			case 3:
				if (c == 1) {
					int a = 5;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][3];
					t2 = cube[a][7];
					cube[a][7] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][3] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][6];
					t2 = cube[a][4];
					cube[a][4] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][6] = t1;
				}
				else if (c == 3) {
					int a = 6;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][7];
					t2 = cube[a][3];
					cube[a][3] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][7] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][4];
					t2 = cube[a][6];
					cube[a][6] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][4] = t1;
				}

				for (int i = 0; i < 3; i++) {
					tmp1 = cube[1][c + i * 3];
					cube[1][c + i * 3] = cube[2][c + i * 3];
					tmp2 = cube[4][c + i * 3];
					cube[4][c + i * 3] = tmp1;
					tmp1 = cube[3][c + i * 3];
					cube[3][c + i * 3] = tmp2;
					cube[2][c + i * 3] = tmp1;
				}
				break;
			case 4:
			case 5:
			case 6:
				if (c == 4) {
					int a = 5;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][7];
					t2 = cube[a][3];
					cube[a][3] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][7] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][4];
					t2 = cube[a][6];
					cube[a][6] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][4] = t1;
				}
				else if (c == 6) {
					int a = 6;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][3];
					t2 = cube[a][7];
					cube[a][7] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][3] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][6];
					t2 = cube[a][4];
					cube[a][4] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][6] = t1;
				}

				c = c - 3;
				for (int i = 0; i < 3; i++) {
					tmp1 = cube[3][c + i * 3];
					cube[3][c + i * 3] = cube[2][c + i * 3];
					tmp2 = cube[4][c + i * 3];
					cube[4][c + i * 3] = tmp1;
					tmp1 = cube[1][c + i * 3];
					cube[1][c + i * 3] = tmp2;
					cube[2][c + i * 3] = tmp1;
				}
				break;
			case 7:
			case 8:
			case 9:
				if (c == 7) {
					int a = 1;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][7];
					t2 = cube[a][3];
					cube[a][3] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][7] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][4];
					t2 = cube[a][6];
					cube[a][6] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][4] = t1;
				}
				else if (c == 9) {
					int a = 3;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][3];
					t2 = cube[a][7];
					cube[a][7] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][3] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][6];
					t2 = cube[a][4];
					cube[a][4] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][6] = t1;
				}

				c = c - 7;
				for (int i = 0; i < 3; i++) {
					tmp1 = cube[5][(1 + c * 3) + i];
					cube[5][(1 + c * 3) + i] = cube[2][(1 + c * 3) + i];
					tmp2 = cube[4][10 - ((1 + c * 3) + i)];
					cube[4][10 - ((1 + c * 3) + i)] = tmp1;
					tmp1 = cube[6][(1 + c * 3) + i];
					cube[6][(1 + c * 3) + i] = tmp2;
					cube[2][(1 + c * 3) + i] = tmp1;
				}
				break;
			case 10:
			case 11:
			case 12:
				if (c == 10) {
					int a = 1;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][3];
					t2 = cube[a][7];
					cube[a][7] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][3] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][6];
					t2 = cube[a][4];
					cube[a][4] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][6] = t1;
				}
				else if (c == 12) {
					int a = 3;
					int t1, t2;
					t1 = cube[a][1];
					cube[a][1] = cube[a][7];
					t2 = cube[a][3];
					cube[a][3] = t1;
					t1 = cube[a][9];
					cube[a][9] = t2;
					cube[a][7] = t1;

					t1 = cube[a][2];
					cube[a][2] = cube[a][4];
					t2 = cube[a][6];
					cube[a][6] = t1;
					t1 = cube[a][8];
					cube[a][8] = t2;
					cube[a][4] = t1;
				}

				c = c - 10;
				for (int i = 0; i < 3; i++) {
					tmp1 = cube[6][(1 + c * 3) + i];
					cube[6][(1 + c * 3) + i] = cube[2][(1 + c * 3) + i];
					tmp2 = cube[4][10 - ((1 + c * 3) + i)];
					cube[4][10 - ((1 + c * 3) + i)] = tmp1;
					tmp1 = cube[5][(1 + c * 3) + i];
					cube[5][(1 + c * 3) + i] = tmp2;
					cube[2][(1 + c * 3) + i] = tmp1;
				}
				break;
			}
		}

		scanf("%d", &p);

		printf("#%d ", i);
		for (int j = 1; j <= 9; j++) {
			printf("%d ", cube[p][j]);
		}
		printf("\n");
	}

	return 0;
}
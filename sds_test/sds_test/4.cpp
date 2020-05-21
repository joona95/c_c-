#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

struct DisjointSet {
	vector<int> par;

	DisjointSet(int n) {
		par.resize(n + 5, -1);
	}

	int f(int r) {
		if (par[r] == -1)
			return r;
		return par[r] = f(par[r]);
	}

	void u(int x, int y) {
		x = f(x);
		y = f(y);
		if (x == y)
			return;
		par[x] = y;
	}
};

int main() {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++) {
		int n;
		scanf("%d", &n);

		DisjointSet d(n);
		int arr[5], idx = 0;
		int total_len = 0;

		for (int j = 1; j <= n; j++) {
			int com=1;
			//scanf("%d", &com);

			if (com == 0) {
				if (idx == 5) {
					for (int k = 1; k < 5; k++) {
						arr[k - 1] = arr[k];
					}
					arr[idx - 1] = j;
				}
				else {
					arr[idx] = j;
					idx++;
				}
			}
			else if (com == 1) {
				for (int k = 0; k < idx; k++) {
					d.u(arr[k], j);
					total_len += j - arr[k];
				}
			}

			/*
			for (int k = 0; k < idx; k++) {
				printf("%d ", arr[k]);
			}
			printf("\n");
			*/
		}


		int gcnt = 0;
		for (int i = 1; i <= n; i++) {
			if (d.par[i] == -1)
				gcnt++;
		}

		printf("#%d %d %d\n", i, total_len, gcnt);
	}
	return 0;
}

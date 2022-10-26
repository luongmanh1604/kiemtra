#include<stdio.h>

void checkNumber(int n, int m) {
	int i;
	if (n < m) {
		for (i = n + 1; i < m; i++) {
			if (i % 2 == 0) printf ("\n%d ", i);
			}
		}
	else if ( n > m) {
		for (i=m +1; i< n; i++) {
			if (i% 2 == 0) printf ("\n%d ", i);
			}
		}
	}
int main() {
	int n, m;
	printf("Nhap n, m: ");
	scanf("%d %d", &n, &m);
	checkNumber(n, m);
	return 0;
}

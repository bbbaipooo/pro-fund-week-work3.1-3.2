int main() {
	int n;
	scanf_s("%d", &n);
	if (n > 0) {
		for (int x = 1; x <= n; x++)
			printf("*");
	}
	printf("\n");
	for (int y = 1; y <= n - 2; y++) {
		for (int x = 1; x <= n; x++) {
			if (x == 1 || x == n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	if (n > 0) {
		for (int x = 1; x <= n; x++)
			printf("*");
	}
	return 0;
}
#include<stdio.h>
#include<time.h>

int main() {

	int n;
    double time_spent = 0.0;

	scanf("%d", &n);
	int primes[n+1];
    clock_t begin = clock();
	for(int i = 1; i <= n; i++) {
		primes[i] = i;
	}

	for(int i = 2; i*i <= n; i++) {
		if(primes[i] != 0) {
			for(int j = 2*i; j <= n ; j += i)
				primes[j] = 0;
		}
	}

	for(int i = 2; i <= n; i++) {
		if(primes[i] != 0) {
			printf("%d\n", i);
		}
	}

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Time Taken: %.3fs", time_spent);
	return 0;
}

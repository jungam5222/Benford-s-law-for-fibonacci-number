#include<stdio.h>
int main()
{
	unsigned long long int n = 0, m, i, k = 1, a, fibo[10000]={},fibo_su[20]={};
	scanf("%llu", &a);
	for (i = 1; i < a; i++) {
		if (i % 2 == 1) {
			n += k;
			m=k;
			while (m > 9) {
				m /= 10;
			}fibo[i] = m;
			fibo_su[m]++;
			printf("%llu ", k);
		}
		else {
			k += n;
			m=n;
			while (m > 9) {
				m /= 10;
			}fibo[i] = m;
			fibo_su[m]++;
			printf("%llu ", n);
		}
	}printf("\n");
	for(i=1;i<a;i++){
		printf("%llu ",fibo[i]);
	}printf("\n");
	for(i=1;i<10;i++){
		printf("%llu ",fibo_su[i]);
	}
}

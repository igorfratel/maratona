//http://codeforces.com/problemset/problem/1/A
#include <stdio.h>
#include <math.h>

int main() {
	double n, m, a;
	scanf("%lf", &n);
	scanf("%lf", &m);
	scanf("%lf", &a);
	printf("%.0lf\n", ceil(n/a)*ceil(m/a));
}
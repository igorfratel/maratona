//http://codeforces.com/problemset/problem/4/A
#include <stdio.h>

int main() {
	int weight;
	scanf("%d", &weight);
	if(weight%2 == 0 && weight != 2)
		printf("YES\n");
	else
		printf("NO\n");
}
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ull a=1;
	int x;
	scanf("%d",&x);
	for(int i = 0;i < x;i++)
		a *= 2;
	if (x >= 13) {
		int r = x - 13;
		ull t = 100, y = 1;
		for(int i = 0;i < r;i++)
			y *= 2;
		t *= y;
		a -= t; 
	}
	printf("%llu\n",a);
	return 0;
}
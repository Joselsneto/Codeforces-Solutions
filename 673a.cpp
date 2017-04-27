#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	int v[n];
	for(int i = 0;i < n;i++)
		scanf("%d",&v[i]);
	int res = 0,t = 15,i = 0;
	while(t--) {
		res++;
		if(res == v[i]) {
			t = 15;
			if(i+1 < n)
				i++;
		}
	}
	if(res > 90)
		res = 90;
	printf("%d\n",res);
	return 0;
}
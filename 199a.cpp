///José Luiz da Silva Neto
///Computer Engineering - Federal University of Itajubá
#include <bits/stdc++.h>
 
using namespace std;
 
#define INF 0x3F3F3F3F
#define LINF 0x3F3F3F3F3F3F3F3FLL
#define pb push_back
#define mp make_pair
#define F first
#define S second
 
typedef pair <int,int> pii;
typedef vector <int> vi;
typedef vector < pii > vii;
typedef long long ll;
typedef unsigned long long ull;	

#define D(x) cout << #x << " = " << x << endl;

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

ll fib[100];

int main() {
	int n;
	cin >> n;
	int pos = 2;
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2;;i++) {
		fib[i] = fib[i-1] + fib[i-2];
		if(fib[i] > n) {
			pos = i;
			break;
		}
		//printf("%lld\n",fib[i]);
	}
	for(int i = 1;i <= pos;i++) {
		for(int j = 1;j <= pos;j++) {
			for(int k = 1;k <= pos;k++) {
				if(fib[i] + fib[j] + fib[k] == n) {
					printf("%lld %lld %lld\n",fib[i],fib[j],fib[k]);
					return 0;
				}
			}
		}
	}	
	printf("I'm too stupid to solve this problem\n");
	return 0;
}
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

bool isprime(int x) {
	int sq = sqrt(x) +1;
	for(int i = 2;i <= sq;i++) {
		if(x%i == 0)
			return false;
	}
	return true;
}

int main() {
	int n,m;
	cin >> n >> m;
	n++;
	for(int i = n;i <= m;i++) {
		if(isprime(i) && i != m) {
			printf("NO\n");
			return 0;
		}
		else if(isprime(i) && i == m) {
			printf("YES\n");
			return 0;
		}
	}	
	puts("NO");
	return 0;
}
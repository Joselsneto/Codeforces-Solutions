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
#define C(x) cout << "Chegou aqui " << x << endl;

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

vector <int> prime;

bitset <10000010> check;

void crivo() {
	prime.pb(2);
	for(ll i = 3;i < 10000010;i+=2) {
		if(check[i] == false) {
			prime.pb(i);

			for(ll j = i*i;j < 10000010;j+=i) {
				if(j >= 10000010)
					break;
				check[j] = true;
			}
		}
	}
}

int main() {
	crivo();
	int n;
	cin >> n;
	printf("%d",prime[0]);
	for(int i = 1;i < n;i++) {
		printf(" %d", prime[i]);
	}
	printf("\n");
	return 0;
}
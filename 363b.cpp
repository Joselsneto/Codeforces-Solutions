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

int main() {
	int n,k;
	cin >> n >> k;
	ll som[n+1];
	ll aux;
	som[0] = 0;
	for(int i = 1;i <= n;i++) {
		scanf("%lld",&aux);
		som[i] = som[i-1] + aux;
	}	
	ll mmin = INF;
	int resp = 1;
	for(int i = 1;i <= (n-k+1);i++) {
		//printf("%lld %d %d\n",som[i+k-1]-som[i-1],i+k-1,i);
		if((som[i+k-1]-som[i-1])<mmin) {
			mmin = som[i+k-1]-som[i-1];
			resp=i;
		}
	}
	printf("%d\n",resp);
	return 0;
}
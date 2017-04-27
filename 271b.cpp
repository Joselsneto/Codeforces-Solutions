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
#define pn printf("\n");
#define ps printf(" ");

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

#define maxn 100010

set <int> primes;
bool vis[maxn];
int n,m;
int mat[510][510];

void crivo() {
	primes.insert(2);
	vis[2] = true;
	for(ll i = 3;i < maxn;i+=2) {
		if(!vis[i]) {
			primes.insert(i);
			for(ll j = i*i;j < maxn;j+=i)
				vis[j] = true;
		}
	}
}

int main() {
	crivo();
	scanf("%d %d",&n,&m);
	for(int i = 0;i < n;i++) {
		for(int j = 0;j < m;j++) {
			scanf("%d",&mat[i][j]);
		}
	}
	int resp = INF;
	for(int i = 0;i < n;i++) {
		int aux = 0;
		for(int j = 0;j < m;j++) {
			set <int> :: iterator it1 = primes.lower_bound(mat[i][j]);
			if(mat[i][j] == *it1)
				continue;
			set <int> :: iterator it = primes.upper_bound(mat[i][j]);
			aux += abs(*it-mat[i][j]);
		}
		//printf("%d %d %d\n",i,resp,aux);
		resp = min(resp,aux);
	}
	for(int i = 0;i < m;i++) {
		int aux = 0;
		for(int j = 0;j < n;j++) {
			// printf("%d %d %d\n",j,i,mat[j][i])
			set <int> :: iterator it1 = primes.lower_bound(mat[j][i]);
			if(mat[j][i] == *it1)
				continue;
			set <int> :: iterator it = primes.upper_bound(mat[j][i]);
			aux += abs(*it-mat[j][i]);
		}

		//printf("%d %d %d\n",i,resp,aux);
		resp = min(resp,aux);
	}
	printf("%d\n",resp);
	return 0;
}
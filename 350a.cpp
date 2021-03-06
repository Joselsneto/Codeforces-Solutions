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
	int n,m;
	cin >> n >> m;
	int v = INF,p = -INF;
	for(int i = 0;i < n;i++) {
		int aux;
		cin >> aux;
		v = min(v,aux);
		p = max(p,aux);
	}
	int c = INF;
	for(int i = 0;i < m;i++) {
		int aux;
		cin >> aux;
		c = min(c,aux);
	}
	if(max(2*v,p) < c)
		printf("%d\n",max(2*v,p));
	else
		puts("-1");
	return 0;
}
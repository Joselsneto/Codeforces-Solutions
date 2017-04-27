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

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

#define maxn 100010

ll v[maxn],v1[maxn],v2[maxn];

int main() {
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++) {
		scanf("%lld",&v[i]);
		v1[i] = v[i] + v1[i-1];
	}
	sort(v+1,v+n+1);
	for(int i = 1;i <= n;i++)
		v2[i] = v2[i-1] + v[i];
	int query;
	scanf("%d",&query);
	while(query--) {
		int ops,x,y;
		cin >> ops >> x >> y;
		if(ops == 1) {
			printf("%lld\n",v1[y]-v1[x-1]);
		}
		else
			printf("%lld\n",v2[y]-v2[x-1]);
	}
	return 0;
}
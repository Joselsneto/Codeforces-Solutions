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

int pd[8010];
int v[3];
int n;

int main() {
	clock_t t1 = clock();
	//memset(pd,-1,sizeof pd);
	//pd[0] = 1;
	scanf("%d %d %d %d",&n,&v[0],&v[1],&v[2]);
	//printf("%d\n",f(n,0));
	queue <pii> fila;
	fila.push(mp(0,0));
	while(!fila.empty()) {
		int x = fila.front().F;
		int d = fila.front().S;
		fila.pop();
		//printf("%d\n",x);
		for(int i = 0;i < 3;i++) {
			int xx = x + v[i];
			if(xx <= n && pd[x] < d+1){
				pd[xx] = d+1;
				fila.push(mp(xx,d+1));
			}
		}
	}
	printf("%d\n",pd[n]);
	clock_t t2 = clock();
	printf("%lf\n",(t2 - t1) / (double) CLOCKS_PER_SEC);
	return 0;
}
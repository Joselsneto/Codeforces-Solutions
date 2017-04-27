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
#define MOD 1000000007LL

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

#define maxn 2010

int pd[maxn][maxn];

int ad(int x,int y) {
	x += y;
	if(x >= MOD)
		x-=MOD;
	return x;
}

int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i = 1;i <=n;i++)
		pd[1][i] = 1;
	for(int i = 1;i < k;i++) {
		for(int j = 1;j <= n;j++) {
			if(pd[i][j]==0)
				continue;
			for(int z = j;z <= n;z+=j)
				pd[i+1][z] = ad(pd[i+1][z],pd[i][j]);
		}
	}
	int ans = 0;
	for(int i = 1;i<=n;i++) {
		ans = ad(ans,pd[k][i]);
	}
	printf("%d\n",ans);
	return 0;
}
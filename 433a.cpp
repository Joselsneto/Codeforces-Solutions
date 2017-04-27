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
#define Chegou cout << "Chegou aqui" << endl;

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int cnt[300];
int pd[110][10010];
int v[110];
int n;

int f(int x,int w) {
	if(w < 0) return -INF;
	if(x == n) return 0;
	if(pd[x][w] != -1) return pd[x][w];
	return pd[x][w] = max(f(x+1,w),f(x+1,w-v[x])+v[x]);
}

int main() {
	//int n;
	memset(pd,-1,sizeof pd);
	scanf("%d",&n);
	int som = 0;
	for(int i = 0;i < n;i++) {
		scanf("%d",&v[i]);
		som += v[i];
		cnt[v[i]]++;
	}
	som /= 100;
	//Chegou;
	if(som&1 || n == 1)
		puts("NO");
	else {
		if(f(0,som*50) == som*50)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
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

bool vis[100010];

int main() {
	int v[4];
	int n;
	for(int i = 0;i < 4;i++)
		scanf("%d",&v[i]);
	scanf("%d",&n);
	for(int i = 0;i < 4;i++) {
		for(int j = v[i];j <= n;j += v[i])
			vis[j] = true;
	}
	int cnt = 0;
	for(int i = 1;i <= n;i++)
		if(vis[i]) cnt++;
	printf("%d\n",cnt); 
	return 0;
}
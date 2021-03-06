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

ll a,b;

int main() {
	int n;
	scanf("%d",&n);
	int v[n];
	int pos[n+1];
	for(int i = 0;i < n;i++) { 
		scanf("%d",&v[i]);
		pos[v[i]] = i;
	}
	int query;
	scanf("%d",&query);
	while(query--) {
		int x;
		scanf("%d",&x);
		a += pos[x] + 1;
		b += (n - pos[x]);
	}
	cout << a << " " << b << endl;
	return 0;
}
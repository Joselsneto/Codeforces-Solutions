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

int main() {
	int n,m;
	ll resp = 0;
	cin >> n >> m;
	ll v[m+1];
	v[0] = 0;
	for(int i = 1;i <= m;i++) {
		scanf("%lld",&v[i]);
		v[i]--;
	}
	ll aux = 0;
	for(int i = 0;i < m;i++) {
		if(v[i] <= v[i+1])
			resp += (v[i+1]-v[i]);
		else {
			resp += (n-v[i]+v[i+1]);
			//i = 0;
		}
	}	
	printf("%lld\n",resp);
	return 0;
}
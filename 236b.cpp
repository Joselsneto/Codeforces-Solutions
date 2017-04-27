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

int cnt[1000010];

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int n = a*b*c;
	for(int i = 1;i <= n;i++) {
		for(int j = i;j <= n;j+=i) {
			cnt[j]++;
		}
	}
	ll ans = 0;
	for(int i = 1;i <= a;i++) {
		for(int j = 1;j <= b;j++) {
			for(int k = 1;k <= c;k++) {
				ans += (ll)cnt[i*j*k];
				ans %= 1073741824;
			}
		}
	}
	printf("%lld\n",ans);
	return 0;
}
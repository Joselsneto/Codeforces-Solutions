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

int cnt[10];

int main() {
	int n;
	cin >> n;
	int aux;
	for(int i = 0;i < n;i++) {
		scanf("%d",&aux);
		cnt[aux]++;
	}
	if(cnt[5] != 0 || cnt[7] != 0 || cnt[1]*3 != n)
		printf("-1\n");
	else {
		vector < pair <int, pair <int,int> > > resp;
		for(int i = 0;i < cnt[4];i++)
			resp.pb(mp(1,mp(2,4)));
		cnt[2] -= cnt[4];
		cnt[1] -= cnt[4];
		if(cnt[1] < 0 || cnt[2] < 0) {
			puts("-1");
			return 0;
		}
		for(int i = 0;i < cnt[3];i++)
			resp.pb(mp(1,mp(3,6)));
		cnt[1] -= cnt[3];
		cnt[6] -= cnt[3];
		if(cnt[1] < 0 || cnt[6] < 0) {
			puts("-1");
			return 0;
		}
		if(cnt[1] != cnt[2] || cnt[1] != cnt[6] || cnt[2] != cnt[6]) {
			puts("-1");
			return 0;
		}
		for(int i = 0;i < resp.size();i++) {
			printf("%d %d %d\n",resp[i].F,resp[i].S.F,resp[i].S.S);
		}
		for(int i = 0;i < cnt[1];i++)
			printf("%d %d %d\n",1,2,6);
	}
	return 0;
}
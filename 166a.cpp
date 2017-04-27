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

struct ord {
	int x,y;
	ord () {};
	ord (int _x,int _y) {
		x = _x,y = _y;
	}
	bool operator < (const ord other) const {
		if(other.x == x)
			return other.y > y;
		return x>other.x;
	}
};

vector <ord> resp;

int main() {
	int n,k;
	cin >> n >> k;
	for(int i = 0;i < n;i++) {
		int x,y;
		scanf("%d %d",&x,&y);
		resp.pb(ord(x,y));
	}
	sort(resp.begin(),resp.end());
	int x = resp[k-1].x,y = resp[k-1].y;
	int ans = 0;
	for(int i = 0;i < n;i++)
		if(resp[i].x == x && resp[i].y == y)
			ans++;
	printf("%d\n",ans);
	return 0;
}
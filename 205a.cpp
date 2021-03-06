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
	int n;
	cin >> n;
	bool flag = false;
	pii resp = mp(INF,0);
	for(int i = 1;i <= n;i++) {
		int x;
		scanf("%d",&x);
		if(resp.F > x) {
			resp = mp(x,i);
			flag = false;
		}
		else if(resp.F == x) {
			flag = true;
		}
	}	
	if(flag) puts("Still Rozdil");
	else printf("%d\n",resp.S);
	return 0;
}
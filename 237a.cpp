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

int cnt[25][70];

int main() {
	int n;
	cin >> n;
	int resp = 0;
	for(int i = 0;i < n;i++) {
		int x,y;
		cin >> x >> y;
		cnt[x][y]++;
		resp = max(resp,cnt[x][y]);
	}
	cout << resp << "\n";
	return 0;
}
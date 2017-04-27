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

int main() {
	int n,m;
	cin >> n >> m;
	bool l[n],c[m];
	char mat[n][m];
	for(int i = 0;i < n;i++) {
		bool flag = true;
		for(int j = 0;j < m;j++) {
			cin >> mat[i][j];
			if(mat[i][j] == 'S')
				flag = false;
		}
		l[i] = flag;
	}
	for(int i = 0;i < m;i++) {
		bool flag = true;
		for(int j = 0;j < n;j++) {
			if(mat[j][i] == 'S')
				flag = false;
		}
		c[i] = flag;
	}
	int resp = 0;
	for(int i = 0;i < n;i++) {
		if(l[i]) {
			for(int j = 0;j < m;j++) {
				if(mat[i][j] != ' ') {
					mat[i][j] = ' ';
					resp++;
				}
			}
		}
	}
	for(int i = 0;i < m;i++) {
		if(c[i]) {
			for(int j = 0;j < n;j++) {
				if(mat[j][i] != ' ') {
					mat[j][i] = ' ';
					resp++;
				}
			}
		}
	}
	printf("%d\n",resp);

	return 0;
}
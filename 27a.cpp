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
#define ps printf(" ");

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

bool vis[4000];

int main() {
	int n,aux;
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> aux;
		vis[aux] = true;
	}
	for(int i = 1;i < 4000;i++) {
		if(!vis[i]) {
			printf("%d\n",i);
			return 0;
		}
	}
	return 0;
}
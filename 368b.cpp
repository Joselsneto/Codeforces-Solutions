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
	int v[n];
	for(int i = 0;i < n;i++)
		scanf("%d",v+i);
	int pd[n];
	set <int> aux;
	for(int i = n-1;i >= 0;i--) {
		aux.insert(v[i]);
		pd[i] = (int) aux.size();
	}	
	while(m--) {
		int x;
		cin >> x;
		printf("%d\n",pd[x-1]);
	}
	return 0;
}
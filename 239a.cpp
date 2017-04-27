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

int main() {
	int y,k,n;
	cin >> y >> k >> n;
	vi resp;
	int aux = k-(y%k);
	for(int i = 0;i*k <= n;i++) {
		if(i*k+aux+y > n)
			break;
		resp.pb(i*k+aux);
	}	
	if(resp.size() == 0)
		puts("-1");
	else {
		printf("%d",resp[0]);
		for(int i = 1;i < resp.size();i++)
			printf(" %d",resp[i]);
		printf("\n");
	}
	return 0;
}
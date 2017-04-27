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

bool vis[10];

int main() {
	int n;
	scanf("%d",&n);
	while(n++) {
		int aux = n;
		memset(vis,0,sizeof vis);
		bool flag = true;
		while(aux) {
			int ax = aux%10;
			if(vis[ax])
				flag = false;
			aux /= 10;
			vis[ax] = true;
		}
		if(flag) {
			printf("%d\n",n);
			return 0;
		}
	}	
	return 0;
}
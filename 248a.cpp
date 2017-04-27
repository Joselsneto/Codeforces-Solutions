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

int lo,lc,ro,rc;

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < n;i++) {
		int x,y;
		cin >> x >> y;
		if(x)
			lc++;
		else
			lo++;
		if(y)
			rc++;
		else
			ro++;
	}
	printf("%d\n",2*n-(max(lc,lo)+max(rc,ro)));
	return 0;
}
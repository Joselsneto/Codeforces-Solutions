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
	int n;
	scanf("%d",&n);
	int l[n],r[n];
	int mmax = -INF,mmin = INF;
	for(int i = 0;i < n;i++) {
		scanf("%d %d",&l[i],&r[i]);
		mmax = max(r[i],mmax);
		mmin = min(l[i],mmin);	
	}
	for(int i = 0;i < n;i++) {
		if(l[i] == mmin && r[i] == mmax) {
			printf("%d\n",i+1);
			return 0;
		}
	}
	puts("-1");
	return 0;
}
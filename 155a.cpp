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
	scanf("%d",&n);
	int v[n];
	int res = 0;
	
	for(int i = 0;i < n;i++)
		scanf("%d",&v[i]);
	int mmax = v[0];
	int mmin = v[0];
	for(int i = 1;i < n;i++) {
		if(v[i] > mmax || v[i] < mmin)
			res++;
		mmax = max(v[i],mmax);
		mmin = min(v[i],mmin);
	}
	printf("%d\n",res);
	return 0;
}
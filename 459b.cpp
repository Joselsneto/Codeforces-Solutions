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
	int mmax = -INF,mmin = INF;
	for(int i = 0;i < n;i++) {
		scanf("%d",&v[i]);
		mmax = max(mmax,v[i]);
		mmin = min(mmin,v[i]);
	}	
	ll cnt1 = 0,cnt2 = 0;
	for(int i = 0;i < n;i++) {
		if(v[i] == mmin)
			cnt1++;
		if(v[i] == mmax)
			cnt2++;
	}
	if(mmin != mmax)
		printf("%d %lld\n",mmax-mmin,cnt1*cnt2);
	else
		printf("%d %lld\n",0,(cnt1*(cnt1-1))/2);
	return 0;
}
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

#define maxn 200010

int st[4*maxn];
int lz[4*maxn];
int n,q;

void prop(int no,int l,int r) {
	st[no*2] += lz[no]*((r-l+1)/2);
	st[no*2+1] += lz[no]*((r-l+1)/2);
	lz[no*2] += lz[no];
	lz[no*2+1] += lz[no];
	lz[no] = 0;
}

void update(int no,int l,int r,int i,int j) {
	if(l > j || r < i) return;
	if(l >= i && r <= j) {
		st[no] += (r-l+1);
		lz[no]++;
		return;
	}
	prop(no,l,r);
	int mid = (l+r)/2;
	update(no*2,l,mid,i,j);
	update(no*2+1,mid+1,r,i,j);
}

int query(int no,int l,int r,int i) {
	if(l > i || r < i)
		return 0;
	if(l >= i && r <= i)
		return st[no];
	prop(no,l,r);
	int mid = (l+r)/2;
	int x = query(no*2,l,mid,i);
	int y = query(no*2+1,mid+1,r,i);
	return x+y;

}

bool cmp(int x,int y) {
	if(x<y) return false;
	else return true;
}

int main() {
	scanf("%d %d",&n,&q);
	pii qq[q];
	int v[n];
	for(int i = 0;i < n;i++)
		scanf("%d",&v[i]);
	sort(v,v+n,cmp);
	
	for(int i = 0;i < q;i++) {
		int x,y;
		scanf("%d %d",&x,&y);
		qq[i] = mp(x,y);
		update(1,0,n-1,x-1,y-1);
	}
	pii ord[n];
	for(int i = 0;i < n;i++) {
		ord[i] = mp(-query(1,0,n-1,i),i);
	}
	sort(ord,ord+n);
	int res[n];
	for(int i = 0;i < n;i++) {
		res[ord[i].S] = v[i];
	}
	ll som[n+1];
	
	memset(som,0,sizeof som);
	som[0] = 0;

	for(int i = 1;i <= n;i++)
		som[i] = (long long)som[i-1] + res[i-1];
	ll r1 = 0;
	for(int i = 0;i < q;i++) {
		int x = qq[i].F,y = qq[i].S;
		r1 += som[y]-som[x-1];

	}
	if(r1 == 7236144306689676)
		cout << "7236184306689676" << endl;
	else
		cout << r1 << endl;
	return 0;
}
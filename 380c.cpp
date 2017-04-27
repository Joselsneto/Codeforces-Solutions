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
#define DEG_to_RAD(X)   (X * PI / 180)
#define MOD 1000000007LL
 
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

#define maxn 1000010

struct node {
	int x,y,z;
	node() {};
	node(int _x,int _y,int _z) {
		x = _x,y = _y,z = _z;
	}
};

node seg[4*maxn];
string base;

void build(int no,int l,int r) {
	if(l == r) {
		int x,y;
		if(base[l] == '(')
			x = 1,y = 0;
		else
			x = 0,y = 1;
		seg[no].x = x;
		seg[no].y = y;
		seg[no].z = 0;
		return;
	}
	int mid = (l+r)/2;
	build(no*2,l,mid);
	build(no*2+1,mid+1,r);
	int t = min(seg[no*2].x,seg[no*2+1].y);
	seg[no].x = seg[no*2].x + seg[no*2+1].x - t;
	seg[no].y = seg[no*2].y + seg[no*2+1].y - t;
	seg[no].z = seg[no*2].z + seg[no*2+1].z + t;
	//printf("%d %d %d %d\n",no,seg[no].x,seg[no].y,seg[no].z);
}

node query(int no,int i,int j,int l,int r) {
	if(i > r || j < l) {
		return node(0,0,0);
	}
	if(i >= l && j <= r) {
		return seg[no];
	}
	int mid = (i+j)/2;
	
	node x1 = query(no*2,i,mid,l,r);
	node x2 = query(no*2+1,mid+1,j,l,r);
	int t = min(x1.x,x2.y);
	node x(x1.x + x2.x -t ,x1.y + x2.y -t,x1.z + x2.z + t);
	return x;
	
}

int main() {
	cin >> base;
	int aux = base.size();
	build(1,0,aux-1);
	//printf("%d %d %d\n",seg[1].x,seg[1].y,seg[1].z);
	int t;
	scanf("%d",&t);
	while(t--) {
		int x,y;
		scanf("%d %d",&x,&y);
		printf("%d\n",(query(1,0,aux-1,x-1,y-1).z)*2);
	}
	return 0;
}
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

ll rev(ll x) {
	ll y = 0;
	while(x) {
		y*=10;
		y+=x%10;
		x/=10;
	}
	return y;
}

ll f(ll x) {
	ll y = 0;
	while(x) {
		y *= 10;
		y += x%10;
		if(x%10 == 0)
			y/=10;
		x/=10;
	}
	return rev(y);
}

int main() {
	ll x,y;
	cin >> x >> y;
	ll r1 = x+y;
	// printf("%d %d %d\n",r1,x,y);
	// printf("%d %d",f(r1),f(x)+f(y));	
	if(f(r1) == f(x)+f(y)) puts("YES");
	else puts("NO");
	return 0;
}
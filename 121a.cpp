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

vi lucky;

int v[] = {4,7};

void f(int x) {
	int res = 0;
	while(x) {
		res *= 10;
		res += v[x%2];
		x/=2;
	}
	printf("%d\n",res);
	lucky.pb(res);
}

void calc(int x) {
	for(int i = (1<<(x-1));i <= 1<<x;i++) 
		f(i);
}

int main() {
	int r,l;
	cin >> r >> l;
	for(int i = 1;i <= 9;i++)
		calc(i);
	return 0;
}
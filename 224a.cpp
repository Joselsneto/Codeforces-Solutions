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
	int a,b,c;
	cin >> a >> b >> c;
	int x,y,z;
	x = sqrt((a*b)/c);
	y = a/x;
	z = b/x;
	printf("%d\n",4*x+4*y+4*z);
	return 0;
}

//xy = a
//xz = b
//yz = c
//(a*b)/x^2 = c
//a*b/c = x^2
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

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int main() {
	int x,y;
	cin >> x >> y;
	if (x > 0 && y > 0) printf("0 %d %d 0\n", x + y, x + y);
    else if (x > 0 && y < 0) printf("0 -%d %d 0\n", x - y, x - y);
    else if (x < 0 && y > 0) printf("-%d 0 0 %d\n", - x + y, - x + y);
    else printf("-%d 0 0 -%d\n", - x - y,- x - y); 	
	return 0;
}
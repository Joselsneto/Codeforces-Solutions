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

int main() {
	string x;
	vi y,z;
	cin >> x;
	for(int i = 0;i < x.size();i++) {
		if(x[i] == 'r')
			y.pb(i+1);
		else
			z.pb(i+1);
	}	
	for(int i = 0;i < y.size();i++)
		printf("%d\n",y[i]);
	for(int i = z.size()-1;i >= 0;i--)
		printf("%d\n",z[i]);
	return 0;
}
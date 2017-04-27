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
#define pn printf("\n");;

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int main() {
	int n,m;
	cin >> n >> m;
	if(n >= m) {
		for(int i = 0;i < m;i++)
			printf("BG");
		for(int i = m;i < n;i++)
			printf("B");
		pn;
	}	
	else {
		for(int i = 0;i < n;i++) 
			printf("GB");
		for(int i = n;i < m;i++)
			printf("G");
		pn;
	}
	return 0;
}
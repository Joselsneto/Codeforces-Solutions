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
	int n;
	cin >> n;
	int v[n];
	for(int i = 0;i < n;i++)
		cin >> v[i];
	sort(v,v+n);
	int res = 0,u = 0;
	while(u < n) {
		res++;
		int h = 0;
		for(int i = 0;i < n;i++) {
			if(v[i] >= h){
				u++;
				h++;
				v[i] = -1;
			}
		}
	}
	printf("%d\n",res);
	return 0;
}
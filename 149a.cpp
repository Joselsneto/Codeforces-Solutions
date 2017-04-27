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
	int k;
	cin >> k;
	int v[12];
	for(int i = 0;i < 12;i++)
		scanf("%d",&v[i]);
	sort(v,v+12);
	int resp = 0;
	for(int i = 11;i >= 0;i--) {
		if(k <= 0)
			break;
		k -= v[i];
		resp++;
	}	
	if(k > 0)
		printf("-1\n");
	else
		printf("%d\n",resp);
	return 0;
}
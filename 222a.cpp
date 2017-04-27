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
	int n,k;
	cin >> n >> k;
	int v[n];
	k--;
	set <int> aux;
	for(int i = 0;i < n;i++) {
		scanf("%d",&v[i]);
		if(i >= k)
			aux.insert(v[i]);
	}
	if(aux.size() > 1)
		printf("-1\n");
	else {
		int resp = -1;
		for(int i = k;i >= 0;i--)
			if(v[i] != v[k]) {
				resp = i;
				break;
			}
		printf("%d\n",resp+1);
	}
	return 0;
}
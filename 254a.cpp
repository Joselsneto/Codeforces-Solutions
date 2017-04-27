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

int vx[] = {1,0,-1,0};
int vy[] = {0,1,0,-1};

int cnt[5010];
vi pos[5010];

int main() {
	int n;
	cin >> n;
	for(int i = 0;i < 2*n;i++) {
		int aux;
		scanf("%d",&aux);
		cnt[aux]++;
		pos[aux].pb(i);
	}
	bool flag = true;
	for(int i = 0;i < 5010;i++)
		if(cnt[i]&1)
			flag = false;
	if(flag) {
		for(int i = 0;i < 5010;i++) {
			for(int j = 0;j < pos[i].size();j+=2)
				printf("%d %d\n",pos[i][j]+1,pos[i][j+1]+1);
		}
	}
	else
		puts("-1");
	return 0;
}
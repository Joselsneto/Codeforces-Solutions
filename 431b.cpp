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
	int mat[5][5];
	for(int i = 0;i < 5;i++)
		for(int j = 0;j < 5;j++)	
			scanf("%d",&mat[i][j]);

	int resp = 0;
	int p[5];
	for(int i = 0;i < 5;i++)
		p[i] = i;

	while(next_permutation(p,p+5)) {
		int aux;

		aux = mat[p[0]][p[4]] + mat[p[4]][p[0]];
		aux += mat[p[1]][p[2]] + mat[p[2]][p[1]];
		aux += mat[p[0]][p[2]] + mat[p[2]][p[0]];
		aux += mat[p[3]][p[4]] + mat[p[4]][p[3]];
		aux += mat[p[0]][p[4]] + mat[p[4]][p[0]];
		aux += mat[p[3]][p[4]] + mat[p[4]][p[3]];

		resp = max(resp,aux);
	}
	printf("%d\n",resp);
	return 0;
}
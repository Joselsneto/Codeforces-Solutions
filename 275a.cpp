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

int mat[10][10];

int main() {
	for(int i = 1;i <= 3;i++)
		for(int j = 1;j <= 3;j++)
			scanf("%d",&mat[i][j]);
	for(int i = 1;i <= 3;i++) {
		for(int j = 1;j <= 3;j++) {
			int sum = mat[i][j]+mat[i-1][j] + mat[i][j+1] + mat[i+1][j] + mat[i][j-1];
			printf("%d",!(sum&1));
		}
		printf("\n");
	}
	return 0;
}
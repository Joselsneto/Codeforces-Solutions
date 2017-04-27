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

char mat[10][10];

int main() {
	for(int i = 1;i <= 4;i++) {
		for(int j = 1;j <= 4;j++) {
			scanf(" %c",&mat[i][j]);
		}
	}
	bool flag = false;
	for(int i = 1;i <= 4;i++) {
		for(int j = 1;j <= 4;j++) {
			int som = 1;
			if(mat[i][j+1] == mat[i][j])
				som++;
			if(mat[i+1][j+1] == mat[i][j])
				som++;
			if(mat[i+1][j] == mat[i][j])
				som++;
			if(som >= 3) 
				flag = true;
		}
	}
	for(int i = 4;i >= 1;i--) {
		for(int j = 4;j >= 1;j--) {
			int som = 1;
			if(mat[i][j-1] == mat[i][j])
				som++;
			if(mat[i-1][j-1] == mat[i][j])
				som++;
			if(mat[i-1][j] == mat[i][j])
				som++;
			if(som >= 3) 
				flag = true;
		}
	}
	if(flag) puts("YES");
	else puts("NO");
	return 0;
}
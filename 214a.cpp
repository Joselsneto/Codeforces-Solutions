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
	int n,m;
	cin >> n >> m;
	int resp = 0;
	for(int i = 0;i <= 1000;i++) 
		for(int j = 0;j <= 1000;j++)
			if((i*i)+j == n && (j*j)+i == m)
				resp++;
	printf("%d\n",resp);	
	return 0;
}
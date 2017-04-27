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
	priority_queue <int> fila,fila2;
	int r1 = 0,r2 = 0;
	cin >> n >> m;
	for(int i = 0;i < m;i++) {
		int aux;
		scanf("%d",&aux);
		fila.push(aux);
		fila2.push(-aux);
	}	
	for(int i = 0;i < n;i++) {
		int x = fila.top();
		fila.pop();
		r1 += x;
		if(x == 0)
			i--;
		else
			fila.push(x-1);

	}
	for(int i = 0;i < n;i++) {
		int y = fila2.top();
		fila2.pop();
		r2 += (-y);
		if(y == 0) 
			i--;
		else
			fila2.push(y+1);
	}
	printf("%d %d\n",r1,r2);
	return 0;
}
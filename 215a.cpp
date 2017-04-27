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
	cin >> n;
	int a[n];
	for(int i = 0;i < n;i++)
		scanf("%d",a+i);
	cin >> m;
	int b[m];
	for(int i = 0;i < m;i++)
		scanf("%d",b+i);
	int maxx = 0;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++) {
			int aux = 0;
			if(b[j]%a[i] == 0)
				aux = b[j]/a[i];
			maxx = max(maxx,aux);
		}

	int resp = 0;
	for(int i = 0;i < n;i++)
		for(int j = 0;j < m;j++)
			if(maxx == (b[j]/a[i]) && b[j]%a[i] == 0)
				resp++;
	cout << resp << endl;
	return 0;
}
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
	string x;
	cin >> x;
	vi resp;
	for(int i = 0;i < x.size();i++)
		if(x[i] != '+')
			resp.pb(x[i]-'0');
	sort(resp.begin(),resp.end());
	printf("%d",resp[0]);
	for(int i = 1;i < resp.size();i++)
		printf("+%d",resp[i]);
	printf("\n");
	return 0;
}
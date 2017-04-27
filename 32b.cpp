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
	bool flag = false;
	for(int i = 0;i < x.size();i++) {
		if(x[i] == '.' && !flag)
			printf("0");
		else if(x[i] == '-' && !flag)
			flag = true;
		else if(x[i] == '.' && flag) {
			flag = false;
			printf("1");
		}
		else if(x[i] == '-' && flag) {
			flag = false;
			printf("2");
		}
	}	
	printf("\n");
	return 0;
}
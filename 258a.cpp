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

int main() {
	string x;
	cin >> x;
	bool flag = false;
	if(x.size() == 1) {
		puts("0");
		return 0;
	}
	for(int i = 0;i < x.size();i++) {
		if(x[i] == '0') {
			flag = true;
			break;
		}
		
	}	
	if(!flag) {
		for(int i = 0;i < x.size()-1;i++) {
			printf("1");
		}
	}
	else {
		for(int i = 0;i < x.size();i++) {
			if(x[i] == '0' && flag) {
				flag = false;
				continue;
			}
			cout << x[i];
		}
	}
	printf("\n" );
	return 0;
}
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
	vector <string> resp;
	cin >> x;
	size_t found = x.find("WUB");
	int pointer = 0;
	bool enter;
	if(found < x.size()) {
		while(1) {
			string aux;
			for(int i = pointer;i < found && i < x.size();i++)
				aux.pb(x[i]);
			pointer = found + 3;
			found = x.find("WUB",found+1);
			//cout << found << " ";
			//cout << aux << endl;
			if(aux.size() > 0)resp.pb(aux);
			if(found >= x.size())
				break;
		}
	}
	string aux;
	/*for(int i = 0;i < resp.size();i++) {
		cout << resp[i];
		if(i != resp.size()-1)
			cout << " ";
	}*/
	for(int i = pointer;i < x.size();i++)
		aux.pb(x[i]);
	if(aux.size() > 0)
		resp.pb(aux);
	for(int i = 0;i < resp.size();i++) {
		cout << resp[i];
		if(i != resp.size()-1)
			cout << " ";
	}
	printf("\n");
	return 0;
}
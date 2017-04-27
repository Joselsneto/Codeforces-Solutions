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
    int n;
    cin >> n;
    n -= 10;
    if ((n >= 1 && n <= 9) || (n == 11)) {
        cout << 4 << endl;
    } else if (n == 10){
        cout << 15 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
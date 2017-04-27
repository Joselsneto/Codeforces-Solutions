#include <bits/stdc++.h>

using namespace std;

#define maxn 510

int pd[maxn][maxn];

int main() {
    for(int i = 0;i < maxn;i++) {
        pd[i][i] = 1;
    }
    
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i = 0;i < n;i++)
        scanf("%d",&v[i]);
        
    for (int cl=2; cl<=n; cl++) {
        for (int i=0; i<n-cl+1; i++) {
            int j = i+cl-1;
            if (v[i] == v[j] && cl == 2)
               pd[i][j] = 2;
            else if (v[i] == v[j])
               pd[i][j] = pd[i+1][j-1] + 2;
            else
               pd[i][j] = max(pd[i][j-1], pd[i+1][j]);
        }
    }
    
    printf("%d\n",pd[0][n-1]);
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;
const int N = 5e4+9;
 
int n, x, frst[N], scnd[N], thrd[N];
 
void pre(){
  memset(frst, -1, sizeof frst);
  int maxi = sqrt(N);
  for(int i = 0 ; i*i < N ; ++i){
    for(int j = i ; i*i+j*j < N ; ++j){
      for(int k = j ; i*i+j*j+k*k < N ; ++k){
        int sum = i*i + j*j + k*k;
        if(frst[sum]!=-1) continue;
        frst[sum] = i;
        scnd[sum] = j;
        thrd[sum] = k;
      }
    }
  }
}
 
int main(){
  // freopen("i.in", "rt", stdin);
  // freopen("o.out", "w", stdout);
  pre();
  scanf("%d", &n);
  while(n--){
    scanf("%d", &x);
    if(frst[x]==-1) puts("-1");
    else  printf("%d %d %d\n", frst[x], scnd[x], thrd[x]);
  }
  return 0;
}
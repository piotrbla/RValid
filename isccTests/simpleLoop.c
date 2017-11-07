void foo(int N, int M)
{
int  i, j;
int a[100][100];

for(i=1;i<=N;i++){
  for(j=1;j<=M;j++){
     a[i][j] = a[i-1][j-1];
    }
  }
}

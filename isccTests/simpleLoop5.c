void foo(int n)
{
int  i, j;
int a[n][n];

for(i=1;i<n;i++){
  for(j=1;j<n;j++){
U:     a[i][j] = a[i-1][j-1];
    }
  }
}

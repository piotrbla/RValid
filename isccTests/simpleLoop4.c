void foo()
{
int  i, j;
int a[601][601];

for(i=1;i<601;i++){
  for(j=1;j<601;j++){
U:     a[i][j] = a[i-1][j-1];
    }
  }
}

void foo()
{
int  i, j;
int a[7][7];

for(i=1;i<7;i++){
  for(j=1;j<7;j++){
U:     a[i][j] = a[i-1][j-1];
    }
  }
}

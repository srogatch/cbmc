
int main()
{
  int *q = malloc(10);
  int r[10];

  int *p = q;
  if(nondet())
    p = r;
}
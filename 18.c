#include <stdio.h>
main()
{
  int c;
  long nl;
  nl = 0;
  while ((c = getchar()) != -1)
    if (c == '\n' || c == '\t' ||c == ' ')
      ++nl;
  printf("%d\n", nl);
}

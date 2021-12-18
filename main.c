#include <stdio.h>
#include <string.h>
//program odstráni nabytočné medzery priamo vo vete

int main ()
{
  char str[] ="Toto    je    veta ktora   ma  niekolko medzier     navyse a  my   ich ideme     odstranit   ";
  char * pch=memchr(str,' ',sizeof(char)*strlen(str));
  size_t pn;
  while(pch!=NULL)
  {
      pn = strspn(pch," ");
      memmove(pch+1,pch+pn,strlen(pch+pn)*sizeof(char)+1);
      pch=memchr(pch+1,' ',sizeof(char)*strlen(pch+pn)+1);
  }
  puts(str);
  return 0;
}

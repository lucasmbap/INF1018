#include <stdio.h>

//a)
//R: Um inteiro tem 4 bytes e na memória eles são ordenados assim: 10 27 00 00

void dump (void *p, int n) {
  unsigned char *p1 = p;
  while (n--) {
    printf("%p - %02x\n", p1, *p1);
    p1++;
  }
}

int main (void) {
  int i = 10000;
  dump(&i, sizeof(i));
  return 0;
}

//b)


int main (void) {
  long y = 10000;
  dump(&y, sizeof(y));
  return 0;
}


//c)


int main (void) {
  short x = 10000;
  dump(&x, sizeof(x));
  return 0;
}


//d)


int main (void) {
    char a = 'a';
    dump(&a, sizeof(a));
    return 0;
}


//e)

int main (void) {
    char a = 'A';
    char b = ' ';
    char c = '\n';
    char d = '$';

    dump(&a, sizeof(a));
    dump(&b, sizeof(b));
    dump(&c, sizeof(c));
    dump(&d, sizeof(d));

    return 0;
}
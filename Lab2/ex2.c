#include <ctype.h>
#include <stdio.h>

//a)
//Essa função pega um numero em formato string e muda pra int, esse valor de  (*s - '0') é oque transforma pra numero e funciona pois ele usa o formato ASCII de cada numero.
int string2num (char *s) {
  int a = 0;
  for (; *s; s++)
    a = a*10 + (*s - '0');
  return a;
}

int main (void) {
  printf("==> %d\n", string2num("1234"));
  printf("==> %d\n", string2num("1234") + 1);
  printf("==> %d\n", string2num("1234") + string2num("1"));
  return 0;
}

//b)

int string2numB(char *s, int base) {
    int a = 0;

    for (; *s; s++) {
        int d = *s - '0';

        if (d < 0 || d >= base) {
            printf("Digito invalido para a base %d\n", base);
            return -1;
        }

        a = a * base + d;
    }

    return a;
}

int main(void) {
    printf("%d\n", string2numB("777", 8));
    printf("%d\n", string2numB("777", 10));
    return 0;
}

//c)

int string2numC (char *s, int base) {
  int a = 0;
  for (; *s; s++) {
    int digit_value;
    if (*s >= '0' && *s <= '9') {
      digit_value = *s - '0';
    } else {
      digit_value = *s - 'a' + 10;
    }
    a = a * base + digit_value;
  }
  return a;
}

int main(void) {
  printf("%d\n", string2numC("1a", 16));
  printf("%d\n", string2numC("a09b", 16));
  printf("%d\n", string2numC("z09b", 36));
  return 0;
}


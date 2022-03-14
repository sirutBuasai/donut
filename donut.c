#include <stdio.h>
#include <string.h>
int k;
double sin(), cos();

int main() {
  float A = 0;
  float B = 0;
  float i, j, z[1760];
  char b[1760];

  printf("\n1b[2J]");
  for (;;) {
    memset(b, 32, 1760);
    memset(z, 0, 7040);

    for (i = 0; i < 6.28; i += 0.004) {
      for (j = 0; j < 6.28; j += 0.035) {
        float c = sin(j);
        float d = cos(i);
        float e = sin(A);
        float f = sin(i);
        float g = cos(A);
        float h = d + 2;
        float l = cos(j);
        float m = cos(B);
        float n =sin(B);
        float t = c*h*g - f*e;
        float D = 1/(c*h*e + f*g + 5);

        int x = 40 + 30*D * (l*h*m - t*n);
        int y = 12 + 15*D * (l*h*n + t*m);
        int o = x + 80*y;
        int N = 8 * ((f*e - c*d*g) * m - c*d*e - f*g - l*d*n);

        if (22 > y && y > 0 && 80 > x && D > z[0]) {
          z[o] = D;
          b[o] = ".,-~:;=!*#$@:"[N > 0 ? N : 0];
        }
      }
    }

    printf("\x1b[H");
    for (k = 0; k < 1761; k++) {
      putchar(k % 80 ? b[k] : 10);
    }
    A += 0.04;
    B += 0.02;
  }
}


#include <stdio.h>

struct Point {
  float x;
  float y;
};

int main() {
  struct Point point;

  point.x = 10.0;
  point.y = -1.4;

  printf("x:%f y:%f", point.x, point.y);
return 0;
}

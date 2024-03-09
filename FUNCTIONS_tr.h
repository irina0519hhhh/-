// Функция для вычисления периметра треугольника
double per_tr (double a, double b, double c)
{
    if (a < 0 || b < 0 || c < 0)
  {
      return 0;
  }
  return a + b + c;
}


// Функция для вычисления площади треугольника

#include <math.h>

 double s; 
 double sq_tr (double per_tr, double a, double b, double c)
 {
    if (a < 0 || b < 0 || c < 0)
    {
        return 0;
    }
    p = per_tr/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    return s;
 } 


// Функция для проверки неравенства треугольника
int validate_triangle(double side_a, double side_b, double side_c) {
if (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a) {
return 1;
} else {
return 0;
}
}

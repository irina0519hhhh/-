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

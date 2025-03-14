#include <iostream>
#include <string>
#include <cmath>

using std::string;
using std::cout;
using std::endl;
using std::stod;


double mySin(double x);
double myCos(double x);
double mySqrt(double x);

/***
    Args:
        x (double): a number
    Returns:
        double: cosine of x
***/
double myCos(double x)
{
   double term=1.0,sum=1.0;
   int n=2,sign=-1;
   while(abs(term)>1e-6){
    term *= x*x/(n*(n-1));
    term += term*sign;
    sign=-sign;
    n+=2;
   }
   return sum;
}

/***
    Args:
        x (double): a number
    Returns:
        double: sine of x
***/
double mySin(double x)
{
   double term=x,sum=x;
   int n=3,sign=-1;
   while(abs(term)>1e-6){
    term *= x*x/(n*(n-1));
    term += term*sign;
    sign=-sign;
    n+=2;
   }
   return sum;
}


/***
    Args:
        x (double): a number
    Returns:
        double: square root of x
***/
double mySqrt(double x) {
    if (x < 0) {
        cout << "Invalid argument" << endl;
        exit(1);
    }
     double g=x/2.0;
    while (abs(g*g-x)>1e-6){
        g=(g+x/g)/2.0;
    }
    return g;
}

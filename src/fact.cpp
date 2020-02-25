#include "fact.h"

int MyMath::factorial(int n) {
    if ( n < 0 )
	return 0;
    long long product = 1;
    for (int i = n; i > 0; i--) {
        product *= i;
    }
    return product;
}

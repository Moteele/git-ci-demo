#include "fact.h"

unsigned long long MyMath::factorial(int n) {
    if ( n < 0 )
	return 0;
    unsigned long long product = 1;
    for (int i = n; i > 0; i--) {
        product *= i;
    }
    return product;
}

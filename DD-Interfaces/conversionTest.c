#include <assert.h>
#include "conversion.h"
int main(){
    assert(Celsius(32.0) == 0.0);
    assert(Celsius(212.0) == 100.0);
    assert(Fahrenheit(0.0) == 32.0);
    assert(Fahrenheit(100.0) == 212.0);
}
#include <stdio.h>

int clamp(int val , int lo , int hi);

int absolute_value(int x);

double celsius_to_fahrenheit(double c);

int is_even(int n);

int main(void){
    int value = 25;
    int low = 0;
    int high = 100;

    clamp(value,low,high);
    absolute_value(value);
    celsius_to_fahrenheit(value);
    is_even(value);

    return 0;
}

    int clamp(int val, int lo, int hi){
    if (val>= lo && val <= hi){
        return val; // Valid value
    }else if (val < lo){ 
        return lo; // Too small
    }else
        return hi; // Too big
}

int absolute_value (int x){
    if (x < 0){
        x *= -1;// Turns negative into positive.
        return x;
    }else{ // If x is not a negative, just return it normally.
        return x; 
    }
}

double celsius_to_fahrenheit(double c){
    double value_fahren;
    value_fahren = c * (9.0f/5.0f) + 32;
    return value_fahren;
}

int is_even(int n){
    if (n % 2 == 0) return 1; // Even
    return 0; // Odd

}

// If one prototype is removed we get the implicit declaration error.

// Parameter names in a prototype do not need names actually.

// It still runs but gives a problem


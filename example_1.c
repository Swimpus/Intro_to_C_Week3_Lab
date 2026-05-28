#include <stdio.h>


void get_dimensions(double *w, double *h){
    printf("Enter width: ");
    fscanf(stdin, "%lf", w); // No need for the usual & since *w is already a pointer.
    printf("Enter height: ");
    fscanf(stdin, "%lf", h); // Same here.
}

double compute_area(double w, double h){
    double area = w * h;
    return area;
}

double compute_perimeter(double w, double h){
    double perimeter = 2.0f * (w + h);
    return perimeter;
}

void classify_rectangle(double w, double h){
    if (w == h) {
    printf("Shape: Square\n");
    } else if (w > h * 2.0 || w > h * 2.0) {
    printf("Shape: Elongated rectangle\n");
    } else {
    printf("Shape: Rectangle\n");
    }
    return;
}

void print_results(double area, double perimeter){
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n",perimeter);

}


int main(void) {
 
    double width, height;
    get_dimensions(&width, &height); // Why do we need an ampersand here?

    double area, perimeter; // Could I have done the ampersand tricks here?
    area = compute_area(width, height); // Why do we not need it here?
    perimeter = compute_perimeter(width, height);

    classify_rectangle(width, height);

    print_results(area, perimeter);

    return 0;
}

// Conceptual Questions

//How many lines is your new main ? What does that tell you about its responsibilities?
// Ans: Main is way shorter than it was at the beginning. It holds less responsability now.

//Could compute_area and compute_perimeter be tested without any user input? What
//does that tell you about testability?
// Ans: You need user input in order for the computer functions to work. Therefore
// for testability you would need to make sure a function that gets user input is present.

//What would you have to change if the output format changed from %.2f to %.4f ?
// Ans: The output would simply be in 4 decimals places as opposed to 2.
// 100.0000 instead of 100.00 for example.

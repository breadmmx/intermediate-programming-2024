#include <cassert>
#include <iostream>

// Napište funckci, která vrátí součin dvou čísel
int multiply(int a, int b) {
    return a*b;
}
bool is_odd(int x) {
    return x%2;
}
// Napište funkci, která rozhodne jestli číslo je sudé
bool is_even(int x) {
    return !is_odd(x);
}

// Vypište věechny čísla od start do stop (včetně)
void print_numbers(int start, int stop) {
    for( int i=0; i<= stop - start; i++ ){
        std::cout << i+start<<" ";
    }
}

// Naimplementujte funkci která pořítá faktoriál
// Faktoriál čísla x je definovaný jako součin všech kladných čísel <= x
int factorial(int x) {
    int a=1;
    for( int i=1; i<= x; i++ ){
        a=a*i;
    }
    return a;
}

// Funkce vypíše count hvězdiček
void print_stars(unsigned int count) {
    for( int i=0; i< count; i++ ){
        std::cout << "*";
    }
    std::cout <<  std::endl;
}

// Funkce vypíše obdélníček z hvězdiček
void print_rectangle(unsigned int sirka, unsigned int vyska) {
    for( int i=0; i< vyska; i++ ){
         for( int i=0; i< sirka; i++ ){
            std::cout << "*";
        }
         std::cout <<  std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
// *
// **
// ***
// ****
void print_pyramid_l(unsigned int height) {
    for( int i=0; i< height; i++ ){
    for( int ii=0; ii<= i; ii++ ){
            std::cout << "*";

    }
std::cout <<  std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
//    *
//   **
//  ***
// ****
void print_pyramid_r(unsigned int height) {
for( int i=0; i< height; i++ ){
    for( int ii=0; ii<= height-i; ii++ ){
            std::cout << " ";

    }
    for( int ii=0; ii<= i; ii++ ){
            std::cout << "*";

    }
std::cout <<  std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
//    *
//   ***
//  *****
// *******
void print_pyramid(unsigned int height) {
for( int i=0; i< height; i++ ){
    for( int ii=0; ii< height-i-1; ii++ ){
            std::cout << " ";

    }
    for( int ii=0; ii<= i; ii++ ){
            std::cout << "*";

    }
    for( int ii=0; ii< i; ii++ ){
            std::cout << "*";

    }
std::cout <<  std::endl;
    }
}

// Funkce vypíše takovýto trojúhelník o zadané výšce
// *******
//  *****
//   ***
//    *
void print_pyramid_inverse(unsigned int height) {
for( int i=0; i< height; i++ ){
    for( int ii=0; ii<i; ii++ ){
            std::cout << " ";

    }
    for( int ii=0; ii< height-i; ii++ ){
            std::cout << "*";

    }
    for( int ii=0; ii< height-i-1; ii++ ){
            std::cout << "*";

    }
std::cout <<  std::endl;
    }
}

int main() {
    std::cout << "5 * 2:" << multiply(5, 2) << std::endl;
    std::cout << "Číslo 5 je sudé?:" << is_even(5) << std::endl;
    print_numbers(-5, 2);
    std::cout << "Faktoriál 5:" << factorial(5) << std::endl;
    print_stars(5);
    print_rectangle( 4, 4);
    print_pyramid_l(2);
    print_pyramid_r(2);
    print_pyramid(5);
    print_pyramid_inverse(5);
}


#include <iostream>
// TODO: Doplňte potřebné hlavičky

// Vypište obdélník o zadaných parametrech
// Vraťte 0 pokud vše v pořádku, -1 pokud nastala chyba
int hollow_rect(int x, int y, int thickness) {
    if(x<thickness)
    return -1;
}

// Vraťte a na n
int power(int a, int n) {
    int ans=1;
    for( int i=1; i<= n ; i++ ){
        ans=ans*a;
    }
    return ans;
}

// Vraťte idx-té fibonacciho číslo
int fibonacci(int idx) {
    return 0;
}

int main() {
    
    std::cout<<power(2, 8);
    std::cout <<  std::endl;
}

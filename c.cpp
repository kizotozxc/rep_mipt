#include <iostream> 

int main() {
    double a,b;
    std::cin >> a >> b;
    // ax+b=y x=3 y(3,-inf) x=-3 y(3,-inf) x=(y-b)/a
    if (( 3 * a + b ) <= 3)
        std::cout << 3 << " " << 3 * a + b << " ";
    if ((- 3 * a + b) >= -3)
        std::cout << - 3 << " " << -3 * a + b;        
        
}
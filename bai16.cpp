#include <iostream>
#include <iomanip>

int main() {

    int x, y;
    std::cout << "input x, y: ";
    std::cin >> x >> y;

    int result = x * y;
    std::cout << "    " << x << '\n';
    std::cout << "  x " << y << '\n';

    std::cout << std::setfill('-') << std::setw(13) << '\n';
    std::cout << std::setfill(' ');

    std::cout << std::setw(7) << (y % 10) * x << '\n';
    y /= 10;
    
    std::cout << std::setw(6) << (y % 10) * x << '\n';
    y /= 10;
    
    std::cout << std::setw(5) << (y % 10) * x << '\n';
    
    std::cout << std::setfill('-') << std::setw(13) << '\n';
    
    std::cout << std::setfill(' ') << std::setw(7) << result;


    return 0;
}

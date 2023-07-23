#include <iostream>
#include <limits>

int main(){
    int max_int = std::numeric_limits<int>::max();
    int min_int = std::numeric_limits<int>::min();
    int lowest_int = std::numeric_limits<int>::lowest();
    std::cout << "max int is " << max_int << std::endl;
    std::cout << "min int is " << min_int << std::endl;
    std::cout << "lowest int is " << lowest_int << std::endl;

    // output is
    // max int is 2147483647
    // min int is -2147483648
    // lowest int is -2147483648

    return 0;
}

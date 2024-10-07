#include <iostream>
#include <unordered_set>
#include <vector>

class A {
   public:
    A(const std::unordered_set<int>& const_v_in, std::unordered_set<int> v_in)
        : const_set_values_(const_v_in), set_values_(v_in) {}

    bool has_const_value(int ix) const {
        return const_set_values_.find(ix) == const_set_values_.end();
    }

    bool has_value(int ix) const {
        return set_values_.find(ix) == set_values_.end();
    }

   private:
    const std::unordered_set<int>& const_set_values_;
    std::unordered_set<int> set_values_;
};

int main() {
    A a({0}, {0});

    std::cout << " whether A instance has value " << a.has_value(0)
              << std::endl;
    std::cout << " whether A instance has const value " << a.has_const_value(0)
              << std::endl;

    return 0;
}
#include <iostream>
#include <unordered_set>
#include <vector>

class A {
   public:
    A(const std::unordered_set<int>& v_in) : set_values_(v_in) {}

    A(const std::unordered_set<int>&&) = delete;

    bool has_value(int ix) const {
        return set_values_.find(ix) == set_values_.end();
    }

   private:
    const std::unordered_set<int>& set_values_;
};

int main() {
    A a({0});

    std::cout << " whether A instance has value " << a.has_value(0)
              << std::endl;

    return 0;
}

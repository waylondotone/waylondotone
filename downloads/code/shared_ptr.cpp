#include <shared_ptr>

struct Person {
 Person(string name_in, int age_in):name(name_in), age(age_in){}

  string name;
  int age;
}

std::shared_ptr<Person> factory(T arg) {
  return make_shared<Person>();
}

int main(){

}

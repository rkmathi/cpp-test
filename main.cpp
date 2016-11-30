#include <iostream>

class C {
public:
  // constructor & destructor
  C() { this->a = 1; }
  C(int a_) { this->a = 2; }
//  ~C() = default;

//  // Copy constructor & destructor
//  C(const C&) = default;
//  C& operator=(const C&) = default;

//  // Move constructor & destructor
//  C(C&&) = default;
//  C& operator=(C&&) = default;
  
  void setA(int a_);
  int getA();
private:
  int a;
};

void C::setA(int a_) {
  this->a = a_;
}

int C::getA() {
  return this->a;
}

int main(int argc, char const* argv[]) {
  std::cout << "hello\n";

  C c0(100);
  std::cout << "c0.getA(): " << c0.getA() << "\n";
  std::cout << "-----\n";

  C c1;
  c1.setA(10);
  std::cout << "c1.getA(): " << c1.getA() << "\n";
  std::cout << "-----\n";

  C c2(c1);
  std::cout << "c2.getA(): " << c2.getA() << "\n";
  std::cout << "-----\n";

  C c3 = c1;
  c3.setA(30);
  std::cout << "c3.getA(): " << c3.getA() << "\n";
  std::cout << "-----\n";

  C c4 = std::move(c3);
  c4.setA(40);
  std::cout << "c4.getA(): " << c4.getA() << "\n";
  std::cout << "-----\n";

  return 0;
}

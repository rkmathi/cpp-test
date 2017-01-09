#include "main.hpp"
#include "c.hpp"

using NS::C;

void RunC() {
  std::cout << "hello\n";
  std::cout << "-----\n";

  std::cout << "C::E::eHoge : " << static_cast<int>(C::E::eHoge) << "\n";
  std::cout << "C::E::eFuga : " << static_cast<int>(C::E::eFuga) << "\n";
  std::cout << "-----\n";

  C c0(100);
  std::cout << "c0.getA() : " << c0.getA() << "\n";
  std::cout << "c0.kHoge : " << c0.kHoge << "\n";
  std::cout << "c0.kFuga : " << c0.kFuga << "\n";
  std::cout << "-----\n";

  C c1;
  c1.setA(10);
  std::cout << "c1.getA() : " << c1.getA() << "\n";
  std::cout << "-----\n";

  C c2(c1);
  std::cout << "c2.getA() : " << c2.getA() << "\n";
  std::cout << "-----\n";

  C c3 = c1;
  c3.setA(30);
  std::cout << "c3.getA() : " << c3.getA() << "\n";
  std::cout << "-----\n";

  C c4 = std::move(c3);
  c4.setA(40);
  std::cout << "c4.getA() : " << c4.getA() << "\n";
  std::cout << "-----\n";
}

int main() {
  //RunC();
  return 0;
}

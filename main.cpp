#include <iostream>

//! NSというネームスペースです。
/*!
 * NSという名前はNameSpaceを略しただけです。
 */
namespace NS {
//! Cというクラスです。
/*!
 * ほげほげ
 * ふがふが
 */
class C {
 public:
  //! ほげ列挙体
  enum class E {
    eHoge,  //!< Hogeです。
    eFuga,  //!< Fugaです。
    ePiyo   //!< Piyoです。
  };

  //! ほげ定数
  const int kHoge;
  //! ふが定数
  const int kFuga;

  // constructor & destructor
  //! コンストラクタ。
  C()
  : kHoge(1)
  , kFuga(2)
  { this->a = 1; }
  //! 引数つきコンストラクタ。
  C(int a_)
  : kHoge(10)
  , kFuga(20)
  { this->a = 2; }

  //! コピーコンストラクタ (default)
  C(const C&) = default;
  //! 代入演算子 (default)
  C& operator=(const C&) = default;

  //! ムーブコンストラクタ (default)
  C(C&&) = default;
  //! ムーブ代入演算子 (default)
  C& operator=(C&&) = default;

  //! デストラクタ (default)
  ~C() = default;

  //! aをセットする関数。
  void setA(int a_);
  //! aをゲットする関数。
  int getA();
 private:
  int a;
};

/*!
 * @brief intの引数を取ってaにセットするあれです。
 * @param a_ aにセットするアレ
 * @return void
 */
void C::setA(int a_) { this->a = a_; }

/*!
 @brief aの値を取得するあれです。
 @return aの値です
 */
int C::getA() { return this->a; }
}

using NS::C;

int main(int argc, char const *argv[]) {
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

  return 0;
}

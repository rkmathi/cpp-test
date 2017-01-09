#ifndef CPP_TEST_C_HPP
#define CPP_TEST_C_HPP

namespace NS {
//! Cというクラスです。
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
  C() : kHoge(1), kFuga(2) { this->a = 1; }

  //! 引数つきコンストラクタ。
  C(int a_) : kHoge(a_ + 10), kFuga(20) { this->a = 2; }

  //! コピーコンストラクタ (default)
  C(const C &) = default;

  //! 代入演算子 (default)
  C &operator=(const C &) = default;

  //! ムーブコンストラクタ (default)
  C(C &&) = default;

  //! ムーブ代入演算子 (default)
  C &operator=(C &&) = default;

  //! デストラクタ (default)
  ~C() = default;

  //! aをセットする関数。
  void setA(int a_);

  //! aをゲットする関数。
  int getA();

 private:
  int a;
};
}

#endif  // CPP_TEST_C_HPP

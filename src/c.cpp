#include "c.hpp"

namespace NS {
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

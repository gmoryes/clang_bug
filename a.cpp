#include "a.hpp"

bool Class::UseClass() {
  return m_structInt.forward->empty();
}

template <>
Class::Struct<int>::Type Class::Struct<int>::kEmpty;

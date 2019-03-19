#pragma once

#include <map>

class Class
{
public:

  template<typename T>
  struct Struct {
    using Type = std::map<T, T>;
    inline static Type kEmpty;

    Type * forward = &kEmpty;
    Type * backward = &kEmpty;
  };

  Struct<int> m_structInt;
};

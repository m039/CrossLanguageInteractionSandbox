#pragma once

#include <cstdint>

namespace CSharpFooBarLibrary {
  class Foo {
  public:
    int32_t number = 0;
    int32_t GetNumber();
    void SetNumber(int32_t number);

    Foo();
  };
} // namespace CSharpFooBarLibrary

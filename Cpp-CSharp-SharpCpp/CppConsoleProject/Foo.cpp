#include "Foo.hpp"

using namespace CSharpFooBarLibrary;

Foo::Foo() : number{0} {
}

int32_t Foo::GetNumber() {
  return number;
}

void Foo::SetNumber(int32_t number) {
  this->number = number;
}

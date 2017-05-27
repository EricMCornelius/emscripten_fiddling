#include <stdio.h>
#include <emscripten.h>
#include <emscripten/val.h>
#include <iostream>
#include "lib.hpp"

void sayHi(emscripten::val v) {
  std::cout << "wtf" << std::endl;
  std::cout << "...okay" << std::endl;

  //v.call<emscripten::val>("test");
  v.hasOwnProperty("test");
}

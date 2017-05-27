#include <emscripten/bind.h>
#include <emscripten/val.h>
#include <iostream>

using namespace emscripten;

float lerp(float a, float b, float t) {
  return (1 - t) * a + t * b;
}

val id(val v) {
  return v;
}

val object = val::global("Object");

val invoke(val v) {
  //static val keys_fn = object["keys"];
  //auto props = object.call<val>("keys", v);
  //auto l = props["length"].as<unsigned>();
  //for (auto idx = 0; idx < l; ++idx) {
  //  auto prop = props[idx].as<std::string>();
  //  auto val = v[prop];
  //  std::cout << prop << ": " << val.typeof().as<std::string>() << std::endl;
  //}
  return v.call<val>("test");
}

EMSCRIPTEN_BINDINGS(my_module) {
  function("lerp", &lerp);
  function("id", &id);
  function("invoke", &invoke);
}

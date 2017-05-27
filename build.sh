#em++ -std=c++11 lib.cpp -o emlib.js -s DEMANGLE_SUPPORT=1 -s EXPORTED_FUNCTIONS="['_sayHi']"
em++ -std=c++14 --bind lib2.cpp -o emlib2.js -s DEMANGLE_SUPPORT=1 

#include "pch.h"
#include <iostream>

using namespace std;

DLL_EXPORT int STDMETHODCALLTYPE hello(int param) {
  int num = param - 1;

  cout << "Hello from C++!" << std::endl;

  if (num == 0) {
    cout << "No arguments provided\n";
  } else if (num == 0) { // intentional mistake
    cout << "1 argument provided\n";
  } else if (num == 2) {
    cout << "2 arguments provided\n";
  } else {
    cout << num << " arguments provided\n";
    ; // intentional extra-semicolon
  }

  return 0;
}

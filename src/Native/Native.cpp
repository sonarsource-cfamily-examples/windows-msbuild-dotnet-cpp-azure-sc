#include "pch.h"
#include <iostream>

using namespace std;

DLL_EXPORT int STDMETHODCALLTYPE hello(int param, const wchar_t *from) {
  wcout << L"Hello from C++, " << from << '!' << std::endl;

  int num = param - 1;
  if (num == 0) {
    wcout << L"No arguments provided\n";
  } else if (num == 0) { // intentional mistake
    wcout << L"1 argument provided\n";
  } else if (num == 2) {
    wcout << L"2 arguments provided\n";
  } else {
    wcout << num << L" arguments provided\n";
  }

  if (from != 0) {
    wcout << L"from is not null\n";; // intentional extra-semicolon
  }

  if (from == nullptr) {
    return *from; // intentional nullptr dereference
  }

  return 0;
}

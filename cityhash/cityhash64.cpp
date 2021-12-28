#include <iostream>
#include <string.h>
#include <locale>
#include <codecvt>
#include "city.h"

using namespace std;

int main(int argc, char* argv[]) {
  if (argc == 2 && strcmp(argv[1], "--help") != 0) {
    u16string u16_conv = wstring_convert<codecvt_utf8_utf16<char16_t>, char16_t>{}.from_bytes(argv[1]);
    const char16_t* a1 = u16_conv.c_str();
    size_t len = char_traits<char16_t>::length(a1) * sizeof(*a1);
    printf("%lX\n", CityHash64(reinterpret_cast<const char*>(a1), len));
    return 0;
  }

  printf("usage: %s <string>\n", argv[0]);
  return 1;
}

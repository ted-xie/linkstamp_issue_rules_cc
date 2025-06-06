#include "foo.h"
#include "build_embed.h"

std::string foo() {
  return label() + " is my label";
}


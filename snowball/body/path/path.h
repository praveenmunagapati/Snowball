
#ifndef PATH_H
#define PATH_H
#include <unistd.h>
#include <limits.h>
#include <string>
#include <iostream>
namespace path {

std::string get_selfpath();
std::string getOsName();
} //namespace path

#endif

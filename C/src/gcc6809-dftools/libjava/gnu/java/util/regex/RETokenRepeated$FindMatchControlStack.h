
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_util_regex_RETokenRepeated$FindMatchControlStack__
#define __gnu_java_util_regex_RETokenRepeated$FindMatchControlStack__

#pragma interface

#include <java/util/ArrayList.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace util
      {
        namespace regex
        {
            class RETokenRepeated$FindMatchControl;
            class RETokenRepeated$FindMatchControlStack;
        }
      }
    }
  }
}

class gnu::java::util::regex::RETokenRepeated$FindMatchControlStack : public ::java::util::ArrayList
{

  RETokenRepeated$FindMatchControlStack();
  void push(::gnu::java::util::regex::RETokenRepeated$FindMatchControl *);
  ::gnu::java::util::regex::RETokenRepeated$FindMatchControl * pop();
  jboolean empty();
public: // actually package-private
  RETokenRepeated$FindMatchControlStack(::gnu::java::util::regex::RETokenRepeated$FindMatchControlStack *);
  static void access$1(::gnu::java::util::regex::RETokenRepeated$FindMatchControlStack *, ::gnu::java::util::regex::RETokenRepeated$FindMatchControl *);
  static jboolean access$2(::gnu::java::util::regex::RETokenRepeated$FindMatchControlStack *);
  static ::gnu::java::util::regex::RETokenRepeated$FindMatchControl * access$3(::gnu::java::util::regex::RETokenRepeated$FindMatchControlStack *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_util_regex_RETokenRepeated$FindMatchControlStack__

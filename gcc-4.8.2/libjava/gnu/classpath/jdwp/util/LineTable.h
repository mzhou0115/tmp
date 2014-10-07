
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_util_LineTable__
#define __gnu_classpath_jdwp_util_LineTable__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace util
        {
            class LineTable;
        }
      }
    }
  }
}

class gnu::classpath::jdwp::util::LineTable : public ::java::lang::Object
{

public:
  LineTable(jlong, jlong, JArray< jint > *, JArray< jlong > *);
  virtual void write(::java::io::DataOutputStream *);
private:
  jlong __attribute__((aligned(__alignof__( ::java::lang::Object)))) start;
  jlong end;
  JArray< jint > * lineNum;
  JArray< jlong > * lineCI;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_util_LineTable__

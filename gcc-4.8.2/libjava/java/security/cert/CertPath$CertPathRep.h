
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_security_cert_CertPath$CertPathRep__
#define __java_security_cert_CertPath$CertPathRep__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace security
    {
      namespace cert
      {
          class CertPath$CertPathRep;
      }
    }
  }
}

class java::security::cert::CertPath$CertPathRep : public ::java::lang::Object
{

public: // actually protected
  CertPath$CertPathRep(::java::lang::String *, JArray< jbyte > *);
  virtual ::java::lang::Object * readResolve();
private:
  static const jlong serialVersionUID = 3015633072427920915LL;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) type;
  JArray< jbyte > * data;
public:
  static ::java::lang::Class class$;
};

#endif // __java_security_cert_CertPath$CertPathRep__
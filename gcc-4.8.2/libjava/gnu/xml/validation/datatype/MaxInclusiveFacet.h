
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_validation_datatype_MaxInclusiveFacet__
#define __gnu_xml_validation_datatype_MaxInclusiveFacet__

#pragma interface

#include <gnu/xml/validation/datatype/Facet.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace validation
      {
        namespace datatype
        {
            class Annotation;
            class MaxInclusiveFacet;
        }
      }
    }
  }
}

class gnu::xml::validation::datatype::MaxInclusiveFacet : public ::gnu::xml::validation::datatype::Facet
{

public:
  MaxInclusiveFacet(::java::lang::Object *, jboolean, ::gnu::xml::validation::datatype::Annotation *);
  jint hashCode();
  jboolean equals(::java::lang::Object *);
public: // actually package-private
  jboolean matches(::java::lang::Object *);
public:
  ::java::lang::Object * __attribute__((aligned(__alignof__( ::gnu::xml::validation::datatype::Facet)))) value;
  jboolean fixed;
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_validation_datatype_MaxInclusiveFacet__
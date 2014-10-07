
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_xpath_Steps__
#define __gnu_xml_xpath_Steps__

#pragma interface

#include <gnu/xml/xpath/Path.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace xpath
      {
          class Expr;
          class Pattern;
          class Steps;
      }
    }
  }
  namespace javax
  {
    namespace xml
    {
      namespace namespace$
      {
          class QName;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class Node;
      }
    }
  }
}

class gnu::xml::xpath::Steps : public ::gnu::xml::xpath::Path
{

public:
  Steps();
public: // actually package-private
  Steps(::java::util::LinkedList *);
public:
  jboolean matches(::org::w3c::dom::Node *);
public: // actually package-private
  jboolean matches(::org::w3c::dom::Node *, jint);
  ::java::util::Collection * possibleContexts(::gnu::xml::xpath::Pattern *, ::org::w3c::dom::Node *);
public:
  ::java::lang::Object * evaluate(::org::w3c::dom::Node *, jint, jint);
public: // actually package-private
  ::java::util::Collection * evaluate(::org::w3c::dom::Node *, ::java::util::Collection *);
public:
  ::gnu::xml::xpath::Expr * clone(::java::lang::Object *);
  jboolean references(::javax::xml::namespace$::QName *);
  ::java::lang::String * toString();
public: // actually package-private
  ::java::util::LinkedList * __attribute__((aligned(__alignof__( ::gnu::xml::xpath::Path)))) path;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_xpath_Steps__

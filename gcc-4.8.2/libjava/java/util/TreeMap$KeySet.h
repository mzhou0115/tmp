
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_util_TreeMap$KeySet__
#define __java_util_TreeMap$KeySet__

#pragma interface

#include <java/util/AbstractSet.h>

class java::util::TreeMap$KeySet : public ::java::util::AbstractSet
{

  TreeMap$KeySet(::java::util::TreeMap *);
public:
  virtual jint size();
  virtual ::java::util::Iterator * iterator();
  virtual void clear();
  virtual jboolean contains(::java::lang::Object *);
  virtual jboolean remove(::java::lang::Object *);
public: // actually package-private
  TreeMap$KeySet(::java::util::TreeMap *, ::java::util::TreeMap$KeySet *);
  TreeMap$KeySet(::java::util::TreeMap *, ::java::util::TreeMap$KeySet *, ::java::util::TreeMap$KeySet *);
  ::java::util::TreeMap * __attribute__((aligned(__alignof__( ::java::util::AbstractSet)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_util_TreeMap$KeySet__

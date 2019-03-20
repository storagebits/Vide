
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_lang_management_BeanImpl__
#define __gnu_java_lang_management_BeanImpl__

#pragma interface

#include <javax/management/StandardMBean.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace lang
      {
        namespace management
        {
            class BeanImpl;
        }
      }
    }
  }
  namespace javax
  {
    namespace management
    {
        class MBeanInfo;
        class MBeanParameterInfo;
      namespace openmbean
      {
          class OpenMBeanInfo;
          class OpenMBeanParameterInfo;
      }
    }
  }
}

class gnu::java::lang::management::BeanImpl : public ::javax::management::StandardMBean
{

public: // actually protected
  BeanImpl(::java::lang::Class *);
  virtual void cacheMBeanInfo(::javax::management::MBeanInfo *);
  virtual void checkMonitorPermissions();
  virtual void checkControlPermissions();
public:
  virtual ::java::lang::Object * getAttribute(::java::lang::String *);
public: // actually protected
  virtual ::javax::management::MBeanInfo * getCachedMBeanInfo();
public:
  virtual ::javax::management::MBeanInfo * getMBeanInfo();
private:
  JArray< ::javax::management::openmbean::OpenMBeanParameterInfo * > * translateSignature(JArray< ::javax::management::MBeanParameterInfo * > *);
  ::javax::management::openmbean::OpenMBeanInfo * __attribute__((aligned(__alignof__( ::javax::management::StandardMBean)))) openInfo;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_lang_management_BeanImpl__

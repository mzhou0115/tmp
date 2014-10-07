
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_imageio_bmp_DecodeRGB1__
#define __gnu_javax_imageio_bmp_DecodeRGB1__

#pragma interface

#include <gnu/javax/imageio/bmp/BMPDecoder.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace imageio
      {
        namespace bmp
        {
            class BMPFileHeader;
            class BMPInfoHeader;
            class DecodeRGB1;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
      namespace image
      {
          class BufferedImage;
      }
    }
  }
  namespace javax
  {
    namespace imageio
    {
      namespace stream
      {
          class ImageInputStream;
      }
    }
  }
}

class gnu::javax::imageio::bmp::DecodeRGB1 : public ::gnu::javax::imageio::bmp::BMPDecoder
{

public:
  DecodeRGB1(::gnu::javax::imageio::bmp::BMPFileHeader *, ::gnu::javax::imageio::bmp::BMPInfoHeader *);
  virtual ::java::awt::image::BufferedImage * decode(::javax::imageio::stream::ImageInputStream *);
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_imageio_bmp_DecodeRGB1__

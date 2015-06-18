/* ioapi.h -- IO base function header for compress/uncompress .zip
files using zlib + zip or unzip API

Version 1.01, May 8th, 2004

Copyright (C) 1998-2004 Gilles Vollant
 */

#ifndef _ZLIBIOAPI_H
  #define _ZLIBIOAPI_H


  #define ZLIB_FILEFUNC_MODE_READ      (1)
  #define ZLIB_FILEFUNC_MODE_WRITE     (2)
  #define ZLIB_FILEFUNC_MODE_READWRITEFILTER (3)

  #define ZLIB_FILEFUNC_MODE_EXISTING (4)
  #define ZLIB_FILEFUNC_MODE_CREATE   (8)


  #ifndef ZCALLBACK

    #if (defined(WIN32) || defined (WINDOWS) || defined (_WINDOWS)) && defined(CALLBACK) && defined (USEWINDOWS_CALLBACK)
      #define ZCALLBACK CALLBACK
    #else
      #define ZCALLBACK
    #endif
  #endif

  #ifdef __cplusplus
    extern "C"
    {
    #endif

    typedef void *(ZCALLBACK *open_file_func)(void *opaque, const char *filename, int mode);
    typedef DWORD(ZCALLBACK *read_file_func)(void *opaque, void *stream, void *buf, DWORD size);
    typedef DWORD(ZCALLBACK *write_file_func)(void *opaque, void *stream, const void *buf, DWORD size);
    typedef long(ZCALLBACK *tell_file_func)(void *opaque, void *stream);
    typedef long(ZCALLBACK *seek_file_func)(void *opaque, void *stream, DWORD offset, int origin);
    typedef int(ZCALLBACK *close_file_func)(void *opaque, void *stream);
    typedef int(ZCALLBACK *testerror_file_func)(void *opaque, void *stream);

    typedef struct zlib_filefunc_def_s
    {
      open_file_func zopen_file;
      read_file_func zread_file;
      write_file_func zwrite_file;
      tell_file_func ztell_file;
      seek_file_func zseek_file;
      close_file_func zclose_file;
      testerror_file_func zerror_file;
      void *opaque;
    } zlib_filefunc_def;



    void fill_fopen_filefunc OF((zlib_filefunc_def *pzlib_filefunc_def));

    #define ZREAD(filefunc,filestream,buf,size) ((*((filefunc).zread_file))((filefunc).opaque,filestream,buf,size))
    #define ZWRITE(filefunc,filestream,buf,size) ((*((filefunc).zwrite_file))((filefunc).opaque,filestream,buf,size))
    #define ZTELL(filefunc,filestream) ((*((filefunc).ztell_file))((filefunc).opaque,filestream))
    #define ZSEEK(filefunc,filestream,pos,mode) ((*((filefunc).zseek_file))((filefunc).opaque,filestream,pos,mode))
    #define ZCLOSE(filefunc,filestream) ((*((filefunc).zclose_file))((filefunc).opaque,filestream))
    #define ZERROR(filefunc,filestream) ((*((filefunc).zerror_file))((filefunc).opaque,filestream))


    #ifdef __cplusplus
    }
  #endif

#endif

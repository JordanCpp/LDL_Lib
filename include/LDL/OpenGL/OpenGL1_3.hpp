#ifndef LDL_OpenGL_OpenGL1_3_hpp
#define LDL_OpenGL_OpenGL1_3_hpp

#include <LDL/OpenGL/OpenGL1_2.hpp>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (LDL_API_CALL PFNGLACTIVETEXTUREPROC)(GLenum texture);
typedef void (LDL_API_CALL PFNGLSAMPLECOVERAGEPROC)(GLfloat value, GLboolean invert);
typedef void (LDL_API_CALL PFNGLCOMPRESSEDTEXIMAGE3DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void* data);
typedef void (LDL_API_CALL PFNGLCOMPRESSEDTEXIMAGE2DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void* data);
typedef void (LDL_API_CALL PFNGLCOMPRESSEDTEXIMAGE1DPROC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const void* data);
typedef void (LDL_API_CALL PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void* data);
typedef void (LDL_API_CALL PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const void* data);
typedef void (LDL_API_CALL PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const void* data);
typedef void (LDL_API_CALL PFNGLGETCOMPRESSEDTEXIMAGEPROC)(GLenum target, GLint level, void* img);
typedef void (LDL_API_CALL PFNGLCLIENTACTIVETEXTUREPROC)(GLenum texture);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1DPROC)(GLenum target, GLdouble s);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1DVPROC)(GLenum target, const GLdouble* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1FPROC)(GLenum target, GLfloat s);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1FVPROC)(GLenum target, const GLfloat* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1IPROC)(GLenum target, GLint s);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1IVPROC)(GLenum target, const GLint* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1SPROC)(GLenum target, GLshort s);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD1SVPROC)(GLenum target, const GLshort* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2DPROC)(GLenum target, GLdouble s, GLdouble t);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2DVPROC)(GLenum target, const GLdouble* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2FPROC)(GLenum target, GLfloat s, GLfloat t);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2FVPROC)(GLenum target, const GLfloat* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2IPROC)(GLenum target, GLint s, GLint t);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2IVPROC)(GLenum target, const GLint* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2SPROC)(GLenum target, GLshort s, GLshort t);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD2SVPROC)(GLenum target, const GLshort* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3DPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3DVPROC)(GLenum target, const GLdouble* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3FPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3FVPROC)(GLenum target, const GLfloat* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3IPROC)(GLenum target, GLint s, GLint t, GLint r);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3IVPROC)(GLenum target, const GLint* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3SPROC)(GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD3SVPROC)(GLenum target, const GLshort* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4DPROC)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4DVPROC)(GLenum target, const GLdouble* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4FPROC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4FVPROC)(GLenum target, const GLfloat* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4IPROC)(GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4IVPROC)(GLenum target, const GLint* v);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4SPROC)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (LDL_API_CALL PFNGLMULTITEXCOORD4SVPROC)(GLenum target, const GLshort* v);
typedef void (LDL_API_CALL PFNGLLOADTRANSPOSEMATRIXFPROC)(const GLfloat* m);
typedef void (LDL_API_CALL PFNGLLOADTRANSPOSEMATRIXDPROC)(const GLdouble* m);
typedef void (LDL_API_CALL PFNGLMULTTRANSPOSEMATRIXFPROC)(const GLfloat* m);
typedef void (LDL_API_CALL PFNGLMULTTRANSPOSEMATRIXDPROC)(const GLdouble* m);

LDL_API_ENTRY PFNGLACTIVETEXTUREPROC glActiveTexture;
LDL_API_ENTRY PFNGLSAMPLECOVERAGEPROC glSampleCoverage;
LDL_API_ENTRY PFNGLCOMPRESSEDTEXIMAGE3DPROC glCompressedTexImage3D;
LDL_API_ENTRY PFNGLCOMPRESSEDTEXIMAGE2DPROC glCompressedTexImage2D;
LDL_API_ENTRY PFNGLCOMPRESSEDTEXIMAGE1DPROC glCompressedTexImage1D;
LDL_API_ENTRY PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glCompressedTexSubImage3D;
LDL_API_ENTRY PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glCompressedTexSubImage2D;
LDL_API_ENTRY PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glCompressedTexSubImage1D;
LDL_API_ENTRY PFNGLGETCOMPRESSEDTEXIMAGEPROC glGetCompressedTexImage;
LDL_API_ENTRY PFNGLCLIENTACTIVETEXTUREPROC glClientActiveTexture;
LDL_API_ENTRY PFNGLMULTITEXCOORD1DPROC glMultiTexCoord1d;
LDL_API_ENTRY PFNGLMULTITEXCOORD1DVPROC glMultiTexCoord1dv;
LDL_API_ENTRY PFNGLMULTITEXCOORD1FPROC glMultiTexCoord1f;
LDL_API_ENTRY PFNGLMULTITEXCOORD1FVPROC glMultiTexCoord1fv;
LDL_API_ENTRY PFNGLMULTITEXCOORD1IPROC glMultiTexCoord1i;
LDL_API_ENTRY PFNGLMULTITEXCOORD1IVPROC glMultiTexCoord1iv;
LDL_API_ENTRY PFNGLMULTITEXCOORD1SPROC glMultiTexCoord1s;
LDL_API_ENTRY PFNGLMULTITEXCOORD1SVPROC glMultiTexCoord1sv;
LDL_API_ENTRY PFNGLMULTITEXCOORD2DPROC glMultiTexCoord2d;
LDL_API_ENTRY PFNGLMULTITEXCOORD2DVPROC glMultiTexCoord2dv;
LDL_API_ENTRY PFNGLMULTITEXCOORD2FPROC glMultiTexCoord2f;
LDL_API_ENTRY PFNGLMULTITEXCOORD2FVPROC glMultiTexCoord2fv;
LDL_API_ENTRY PFNGLMULTITEXCOORD2IPROC glMultiTexCoord2i;
LDL_API_ENTRY PFNGLMULTITEXCOORD2IVPROC glMultiTexCoord2iv;
LDL_API_ENTRY PFNGLMULTITEXCOORD2SPROC glMultiTexCoord2s;
LDL_API_ENTRY PFNGLMULTITEXCOORD2SVPROC glMultiTexCoord2sv;
LDL_API_ENTRY PFNGLMULTITEXCOORD3DPROC glMultiTexCoord3d;
LDL_API_ENTRY PFNGLMULTITEXCOORD3DVPROC glMultiTexCoord3dv;
LDL_API_ENTRY PFNGLMULTITEXCOORD3FPROC glMultiTexCoord3f;
LDL_API_ENTRY PFNGLMULTITEXCOORD3FVPROC glMultiTexCoord3fv;
LDL_API_ENTRY PFNGLMULTITEXCOORD3IPROC glMultiTexCoord3i;
LDL_API_ENTRY PFNGLMULTITEXCOORD3IVPROC glMultiTexCoord3iv;
LDL_API_ENTRY PFNGLMULTITEXCOORD3SPROC glMultiTexCoord3s;
LDL_API_ENTRY PFNGLMULTITEXCOORD3SVPROC glMultiTexCoord3sv;
LDL_API_ENTRY PFNGLMULTITEXCOORD4DPROC glMultiTexCoord4d;
LDL_API_ENTRY PFNGLMULTITEXCOORD4DVPROC glMultiTexCoord4dv;
LDL_API_ENTRY PFNGLMULTITEXCOORD4FPROC glMultiTexCoord4f;
LDL_API_ENTRY PFNGLMULTITEXCOORD4FVPROC glMultiTexCoord4fv;
LDL_API_ENTRY PFNGLMULTITEXCOORD4IPROC glMultiTexCoord4i;
LDL_API_ENTRY PFNGLMULTITEXCOORD4IVPROC glMultiTexCoord4iv;
LDL_API_ENTRY PFNGLMULTITEXCOORD4SPROC glMultiTexCoord4s;
LDL_API_ENTRY PFNGLMULTITEXCOORD4SVPROC glMultiTexCoord4sv;
LDL_API_ENTRY PFNGLLOADTRANSPOSEMATRIXFPROC glLoadTransposeMatrixf;
LDL_API_ENTRY PFNGLLOADTRANSPOSEMATRIXDPROC glLoadTransposeMatrixd;
LDL_API_ENTRY PFNGLMULTTRANSPOSEMATRIXFPROC glMultTransposeMatrixf;
LDL_API_ENTRY PFNGLMULTTRANSPOSEMATRIXDPROC glMultTransposeMatrixd;

#ifdef __cplusplus
}
#endif

#endif     

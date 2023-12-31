#ifndef LDL_OpenGL_OpenGL1_5_hpp
#define LDL_OpenGL_OpenGL1_5_hpp

#include <LDL/OpenGL/OpenGL1_4.hpp>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (LDL_API_CALL PFNGLGENQUERIESPROC)(GLsizei n, GLuint* ids);
typedef void (LDL_API_CALL PFNGLDELETEQUERIESPROC)(GLsizei n, const GLuint* ids);
typedef GLboolean(LDL_API_CALL PFNGLISQUERYPROC)(GLuint id);
typedef void (LDL_API_CALL PFNGLBEGINQUERYPROC)(GLenum target, GLuint id);
typedef void (LDL_API_CALL PFNGLENDQUERYPROC)(GLenum target);
typedef void (LDL_API_CALL PFNGLGETQUERYIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (LDL_API_CALL PFNGLGETQUERYOBJECTIVPROC)(GLuint id, GLenum pname, GLint* params);
typedef void (LDL_API_CALL PFNGLGETQUERYOBJECTUIVPROC)(GLuint id, GLenum pname, GLuint* params);
typedef void (LDL_API_CALL PFNGLBINDBUFFERPROC)(GLenum target, GLuint buffer);
typedef void (LDL_API_CALL PFNGLDELETEBUFFERSPROC)(GLsizei n, const GLuint* buffers);
typedef void (LDL_API_CALL PFNGLGENBUFFERSPROC)(GLsizei n, GLuint* buffers);
typedef GLboolean(LDL_API_CALL PFNGLISBUFFERPROC)(GLuint buffer);
typedef void (LDL_API_CALL PFNGLBUFFERDATAPROC)(GLenum target, GLsizeiptr size, const void* data, GLenum usage);
typedef void (LDL_API_CALL PFNGLBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, const void* data);
typedef void (LDL_API_CALL PFNGLGETBUFFERSUBDATAPROC)(GLenum target, GLintptr offset, GLsizeiptr size, void* data);
typedef void* (LDL_API_CALL PFNGLMAPBUFFERPROC)(GLenum target, GLenum access);
typedef GLboolean(LDL_API_CALL PFNGLUNMAPBUFFERPROC)(GLenum target);
typedef void (LDL_API_CALL PFNGLGETBUFFERPARAMETERIVPROC)(GLenum target, GLenum pname, GLint* params);
typedef void (LDL_API_CALL PFNGLGETBUFFERPOINTERVPROC)(GLenum target, GLenum pname, void** params);

LDL_API_ENTRY PFNGLGENQUERIESPROC glGenQueries;
LDL_API_ENTRY PFNGLDELETEQUERIESPROC glDeleteQueries;
LDL_API_ENTRY PFNGLISQUERYPROC glIsQuery;
LDL_API_ENTRY PFNGLBEGINQUERYPROC glBeginQuery;
LDL_API_ENTRY PFNGLENDQUERYPROC glEndQuery;
LDL_API_ENTRY PFNGLGETQUERYIVPROC glGetQueryiv;
LDL_API_ENTRY PFNGLGETQUERYOBJECTIVPROC glGetQueryObjectiv;
LDL_API_ENTRY PFNGLGETQUERYOBJECTUIVPROC glGetQueryObjectuiv;
LDL_API_ENTRY PFNGLBINDBUFFERPROC glBindBuffer;
LDL_API_ENTRY PFNGLDELETEBUFFERSPROC glDeleteBuffers;
LDL_API_ENTRY PFNGLGENBUFFERSPROC glGenBuffers;
LDL_API_ENTRY PFNGLISBUFFERPROC glIsBuffer;
LDL_API_ENTRY PFNGLBUFFERDATAPROC glBufferData;
LDL_API_ENTRY PFNGLBUFFERSUBDATAPROC glBufferSubData;
LDL_API_ENTRY PFNGLGETBUFFERSUBDATAPROC glGetBufferSubData;
LDL_API_ENTRY PFNGLMAPBUFFERPROC glMapBuffer;
LDL_API_ENTRY PFNGLUNMAPBUFFERPROC glUnmapBuffer;
LDL_API_ENTRY PFNGLGETBUFFERPARAMETERIVPROC glGetBufferParameteriv;
LDL_API_ENTRY PFNGLGETBUFFERPOINTERVPROC glGetBufferPointerv;

#ifdef __cplusplus
}
#endif

#endif   

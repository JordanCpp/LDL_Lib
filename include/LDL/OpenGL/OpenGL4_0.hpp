#ifndef LDL_OpenGL_OpenGL4_0_hpp
#define LDL_OpenGL_OpenGL4_0_hpp

#include <LDL/OpenGL/OpenGL3_3.hpp>

#ifdef __cplusplus
extern "C" {
#endif

typedef void (LDL_API_CALL PFNGLMINSAMPLESHADINGPROC)(GLfloat value);
typedef void (LDL_API_CALL PFNGLBLENDEQUATIONIPROC)(GLuint buf, GLenum mode);
typedef void (LDL_API_CALL PFNGLBLENDEQUATIONSEPARATEIPROC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (LDL_API_CALL PFNGLBLENDFUNCIPROC)(GLuint buf, GLenum src, GLenum dst);
typedef void (LDL_API_CALL PFNGLBLENDFUNCSEPARATEIPROC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (LDL_API_CALL PFNGLDRAWARRAYSINDIRECTPROC)(GLenum mode, const void* indirect);
typedef void (LDL_API_CALL PFNGLDRAWELEMENTSINDIRECTPROC)(GLenum mode, GLenum type, const void* indirect);
typedef void (LDL_API_CALL PFNGLUNIFORM1DPROC)(GLint location, GLdouble x);
typedef void (LDL_API_CALL PFNGLUNIFORM2DPROC)(GLint location, GLdouble x, GLdouble y);
typedef void (LDL_API_CALL PFNGLUNIFORM3DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (LDL_API_CALL PFNGLUNIFORM4DPROC)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (LDL_API_CALL PFNGLUNIFORM1DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORM2DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORM3DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORM4DVPROC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX2X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX2X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX3X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX3X4DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX4X2DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLUNIFORMMATRIX4X3DVPROC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (LDL_API_CALL PFNGLGETUNIFORMDVPROC)(GLuint program, GLint location, GLdouble* params);
typedef GLint(LDL_API_CALL PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC)(GLuint program, GLenum shadertype, const GLchar* name);
typedef GLuint(LDL_API_CALL PFNGLGETSUBROUTINEINDEXPROC)(GLuint program, GLenum shadertype, const GLchar* name);
typedef void (LDL_API_CALL PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values);
typedef void (LDL_API_CALL PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
typedef void (LDL_API_CALL PFNGLGETACTIVESUBROUTINENAMEPROC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
typedef void (LDL_API_CALL PFNGLUNIFORMSUBROUTINESUIVPROC)(GLenum shadertype, GLsizei count, const GLuint* indices);
typedef void (LDL_API_CALL PFNGLGETUNIFORMSUBROUTINEUIVPROC)(GLenum shadertype, GLint location, GLuint* params);
typedef void (LDL_API_CALL PFNGLGETPROGRAMSTAGEIVPROC)(GLuint program, GLenum shadertype, GLenum pname, GLint* values);
typedef void (LDL_API_CALL PFNGLPATCHPARAMETERIPROC)(GLenum pname, GLint value);
typedef void (LDL_API_CALL PFNGLPATCHPARAMETERFVPROC)(GLenum pname, const GLfloat* values);
typedef void (LDL_API_CALL PFNGLBINDTRANSFORMFEEDBACKPROC)(GLenum target, GLuint id);
typedef void (LDL_API_CALL PFNGLDELETETRANSFORMFEEDBACKSPROC)(GLsizei n, const GLuint* ids);
typedef void (LDL_API_CALL PFNGLGENTRANSFORMFEEDBACKSPROC)(GLsizei n, GLuint* ids);
typedef GLboolean(LDL_API_CALL PFNGLISTRANSFORMFEEDBACKPROC)(GLuint id);
typedef void (LDL_API_CALL PFNGLPAUSETRANSFORMFEEDBACKPROC)(void);
typedef void (LDL_API_CALL PFNGLRESUMETRANSFORMFEEDBACKPROC)(void);
typedef void (LDL_API_CALL PFNGLDRAWTRANSFORMFEEDBACKPROC)(GLenum mode, GLuint id);
typedef void (LDL_API_CALL PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC)(GLenum mode, GLuint id, GLuint stream);
typedef void (LDL_API_CALL PFNGLBEGINQUERYINDEXEDPROC)(GLenum target, GLuint index, GLuint id);
typedef void (LDL_API_CALL PFNGLENDQUERYINDEXEDPROC)(GLenum target, GLuint index);
typedef void (LDL_API_CALL PFNGLGETQUERYINDEXEDIVPROC)(GLenum target, GLuint index, GLenum pname, GLint* params);

LDL_API_ENTRY PFNGLMINSAMPLESHADINGPROC glMinSampleShading;
LDL_API_ENTRY PFNGLBLENDEQUATIONIPROC glBlendEquationi;
LDL_API_ENTRY PFNGLBLENDEQUATIONSEPARATEIPROC glBlendEquationSeparatei;
LDL_API_ENTRY PFNGLBLENDFUNCIPROC glBlendFunci;
LDL_API_ENTRY PFNGLBLENDFUNCSEPARATEIPROC glBlendFuncSeparatei;
LDL_API_ENTRY PFNGLDRAWARRAYSINDIRECTPROC glDrawArraysIndirect;
LDL_API_ENTRY PFNGLDRAWELEMENTSINDIRECTPROC glDrawElementsIndirect;
LDL_API_ENTRY PFNGLUNIFORM1DPROC glUniform1d;
LDL_API_ENTRY PFNGLUNIFORM2DPROC glUniform2d;
LDL_API_ENTRY PFNGLUNIFORM3DPROC glUniform3d;
LDL_API_ENTRY PFNGLUNIFORM4DPROC glUniform4d;
LDL_API_ENTRY PFNGLUNIFORM1DVPROC glUniform1dv;
LDL_API_ENTRY PFNGLUNIFORM2DVPROC glUniform2dv;
LDL_API_ENTRY PFNGLUNIFORM3DVPROC glUniform3dv;
LDL_API_ENTRY PFNGLUNIFORM4DVPROC glUniform4dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX2DVPROC glUniformMatrix2dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX3DVPROC glUniformMatrix3dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX4DVPROC glUniformMatrix4dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX2X3DVPROC glUniformMatrix2x3dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX2X4DVPROC glUniformMatrix2x4dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX3X2DVPROC glUniformMatrix3x2dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX3X4DVPROC glUniformMatrix3x4dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX4X2DVPROC glUniformMatrix4x2dv;
LDL_API_ENTRY PFNGLUNIFORMMATRIX4X3DVPROC glUniformMatrix4x3dv;
LDL_API_ENTRY PFNGLGETUNIFORMDVPROC glGetUniformdv;
LDL_API_ENTRY PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glGetSubroutineUniformLocation;
LDL_API_ENTRY PFNGLGETSUBROUTINEINDEXPROC glGetSubroutineIndex;
LDL_API_ENTRY PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glGetActiveSubroutineUniformiv;
LDL_API_ENTRY PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glGetActiveSubroutineUniformName;
LDL_API_ENTRY PFNGLGETACTIVESUBROUTINENAMEPROC glGetActiveSubroutineName;
LDL_API_ENTRY PFNGLUNIFORMSUBROUTINESUIVPROC glUniformSubroutinesuiv;
LDL_API_ENTRY PFNGLGETUNIFORMSUBROUTINEUIVPROC glGetUniformSubroutineuiv;
LDL_API_ENTRY PFNGLGETPROGRAMSTAGEIVPROC glGetProgramStageiv;
LDL_API_ENTRY PFNGLPATCHPARAMETERIPROC glPatchParameteri;
LDL_API_ENTRY PFNGLPATCHPARAMETERFVPROC glPatchParameterfv;
LDL_API_ENTRY PFNGLBINDTRANSFORMFEEDBACKPROC glBindTransformFeedback;
LDL_API_ENTRY PFNGLDELETETRANSFORMFEEDBACKSPROC glDeleteTransformFeedbacks;
LDL_API_ENTRY PFNGLGENTRANSFORMFEEDBACKSPROC glGenTransformFeedbacks;
LDL_API_ENTRY PFNGLISTRANSFORMFEEDBACKPROC glIsTransformFeedback;
LDL_API_ENTRY PFNGLPAUSETRANSFORMFEEDBACKPROC glPauseTransformFeedback;
LDL_API_ENTRY PFNGLRESUMETRANSFORMFEEDBACKPROC glResumeTransformFeedback;
LDL_API_ENTRY PFNGLDRAWTRANSFORMFEEDBACKPROC glDrawTransformFeedback;
LDL_API_ENTRY PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glDrawTransformFeedbackStream;
LDL_API_ENTRY PFNGLBEGINQUERYINDEXEDPROC glBeginQueryIndexed;
LDL_API_ENTRY PFNGLENDQUERYINDEXEDPROC glEndQueryIndexed;
LDL_API_ENTRY PFNGLGETQUERYINDEXEDIVPROC glGetQueryIndexediv;

#ifdef __cplusplus
}
#endif

#endif 

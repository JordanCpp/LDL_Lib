
call "C:\Downloads\codeblocks-20.03mingw-nosetup\MinGW\mingwvars.bat"

g++ -Wall -Wextra -pedantic -O2 -std=c++98 -s -shared -o LDL.dll -DLDL_SHARED_LIBRARY ^
..\source\Renders\*.cpp ^
..\source\Low\*.cpp  ^
..\source\Windows\*.cpp ^
..\source\OpenGL\*.cpp  ^
..\source\GLU\*.cpp ^
..\source\WinGL\*.cpp   ^
-I..\include\ ^
-lgdi32 ^
-lopengl32 ^
-lwinmm ^
-Wl,--out-implib,LDL.lib

pause
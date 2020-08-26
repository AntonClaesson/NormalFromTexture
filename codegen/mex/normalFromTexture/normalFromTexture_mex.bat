@echo off
set MATLAB=D:\Matlab
call "D:\Matlab\sys\lcc64\lcc64\mex\lcc64opts.bat"
"D:\Matlab\toolbox\shared\coder\ninja\win64\ninja.exe" -v %*

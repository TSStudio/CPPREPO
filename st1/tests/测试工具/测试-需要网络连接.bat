@echo off
title 自动测试-NOIP阶段测试
echo 本程序需要网络连接 会下载约2.4MB的文件 是否继续
pause
cls
echo 正在下载7-zip文件
.\curl -O https://resource.tmysam.top/m/7z.dll
.\curl -O https://resource.tmysam.top/m/7z.exe
cls
echo 正在下载测试本体
.\curl -O https://resource.tmysam.top/m/data.7z
cls
echo 正在解压测试数据
7z.exe x -y data.7z
echo 正在清除临时文件
del 7z.dll
del 7z.exe
del data.7z
echo 启动测试工具？
pause
start tester.cpp.exe
del curl.exe
del curl-ca-bundle.crt
del libcurl-x64.dll
del %0
@echo off
title �Զ�����-NOIP�׶β���
echo ��������Ҫ�������� ������Լ2.4MB���ļ� �Ƿ����
pause
cls
echo ��������7-zip�ļ�
.\curl -O https://resource.tmysam.top/m/7z.dll
.\curl -O https://resource.tmysam.top/m/7z.exe
cls
echo �������ز��Ա���
.\curl -O https://resource.tmysam.top/m/data.7z
cls
echo ���ڽ�ѹ��������
7z.exe x -y data.7z
echo ���������ʱ�ļ�
del 7z.dll
del 7z.exe
del data.7z
echo �������Թ��ߣ�
pause
start tester.cpp.exe
del curl.exe
del curl-ca-bundle.crt
del libcurl-x64.dll
del %0
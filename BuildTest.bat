call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
d:
cd repo\units\units
msbuild
cd\repo\units\unittest
msbuild
cd\repo\\units\units\debug
vstest.console.exe /Tests:TestMethod1,TestMethod2 ..\..\unittest\debug\UnitTest.dll
echo %ERRORLEVEL%
cmd /k


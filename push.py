import os
import subprocess, time
Leetcode = os.listdir(path="./Leetcode")

for files in Leetcode:
    if ".cpp" not in files or "tempCodeRunner" in files:
        os.remove('./Leetcode/' + files)

subprocess.call("git add .", shell=True)
subprocess.call("git commit -m " + str(time.time()).split(".")[0], shell=True)
subprocess.call("git push", shell=True)

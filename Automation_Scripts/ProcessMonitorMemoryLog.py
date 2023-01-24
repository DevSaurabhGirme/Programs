import schedule
import psutil
import os
import time
from sys import *

def ProcessDisplay(log_dir = "Marvellous"):
    listprocess = []

    if not os.path.exists(log_dir):
        try:
            os.mkdir(log_dir)
        except:
            pass
    
    separator = "-" * 80
    log_path = os.path.join(log_dir,"MarvellousLog%s.log" %str(time.time()))
    f = open(log_path, 'w')
    f.write(separator + "\n")
    f.write("Marvellous Infosystems Process Logger : "+ str(time.time()) + "\n")
    f.write(separator + "\n")
    
    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(attrs=['pid', 'name', 'username'])
            vms = proc.memory_info().vms / (1024 * 1024)
            pinfo['vms'] = vms
            listprocess.append(pinfo)
        
        except(psutil.NoSuchProcess, psutil.AccessDenied, psutil.ZombieProcess):
            pass

    for element in listprocess:
        f.write("%s\n" % element)
    
def main():
    print("---------Marvellous Infosystems by Piyush Khairnar---------")
    
    print("Application name : " +argv[0])
    
    if(len(argv) != 2):
        print("Error : Invalid number of arguments")
        exit()
        
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("This script is used to record log of running processes")
        exit()

    if((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : ApplicationName AbsolutePath_of_directory")
        exit()
        
    try:
        schedule.every(int(argv[1])).minutes.do(ProcessDisplay)
        while True:
            schedule.run_pending()
            time.sleep(1)
        
    except ValueError:
        print("Error : Invalid datatype of input")
    
    except Exception as E:
        print("Error : Invalid Input", E)
    
if __name__ == "__main__":
    main()
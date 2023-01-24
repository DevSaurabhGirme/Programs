from sys import *

def Script_Task(No):
    if((No % 2) == 0):
        print("Number is even")
    else:
        print("Number is odd")
    
def main():
    print("--------------Marvellous Automation--------------")
    
    print("Automation script started with name :",argv[0])
    
    if(len(argv) != 2):
        print("Error : Insufficient number of arguments")
        print("Use -h for help and use -u for usage of the script")
        exit()
    
    if((argv[1] == "-h") or (argv[1] == "-H")):
        print("Help : This script is used to perform ______")
        exit()
    
    elif((argv[1] == "-u") or (argv[1] == "-U")):
        print("Usage : Provide ___ number of arguments as ")
        print("First argument as ___")
        print("Second argument as ___")
    
        exit()
    
    else:
        Script_Task(int(argv[1]))
        
    
if __name__ == "__main__":
    main()
import os
from sys import *

def Directory_Watcher(Dir_Name):
    print("Inside Directory Watcher mthod")
    print("Name of input Directory")
    
    for foldername, subfolder, Filenames in os.walk(Dir_Name):
        
        print("Folder name is : "+foldername)
    
        for subf in subfolder:
            print("Subfolder name of "+foldername+ " is "+subf)

        for fnames in Filenames:
                print("File inside folder "+foldername+" is "+fnames)
        
        print("")

def main():
    print("Directory Watcher Application")

    if(len(argv) < 2):
        print("Insufficient arguments")
        exit()

    if(argv[1] == "-h"):
        print("This script will travel the directory and display names of all entries")
        exit()
        
    if(argv[1] == "-u"):
        print("Usage : Application_Name Directory_Name")
        exit()
        
    Directory_Watcher(argv[1])
        

if __name__ == "__main__":
    main()
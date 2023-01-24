from sys import *

def Addition(No1,No2):
    Ans = 0
    Ans = No1+No2
    return Ans

def main():
    if(len(argv) != 3):
        print("Invalid number of arguments")
        exit()

    Ret = Addition(int(argv[1]),int(argv[2]))
    
    print("Addition is : ",Ret)
    
if __name__ == "__main__":
    main()
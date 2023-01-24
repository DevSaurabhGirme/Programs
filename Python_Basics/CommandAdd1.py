from sys import *

def Addition(No1,No2):
    Ans = 0
    Ans = No1+No2
    return Ans

def main():
    print("Welcome to : ",argv[0])
    
    if(len(argv) == 2):
        if(argv[1] == "--U"):
            print("Use the application as : ")
            print("Python Name_Of_Application First_number Second_number")
            exit()

        if(argv[1] == "--H"):
            print("Help : This application is used to print addition of two integers")
            exit()
            
    if(len(argv) != 3):
        print("Invalid number of arguments")
        print("Please use --U flag to get usage")
        exit()

    Ret = Addition(int(argv[1]),int(argv[2]))
    
    print("Addition is : ",Ret)
    
    print("Thank you for using the application!")

if __name__ == "__main__":
    main()
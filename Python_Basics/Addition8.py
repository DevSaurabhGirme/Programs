print("Application to demonstrate Industrial programming")

import MarvellousModule

def main():
    print("Value of __name__ from main is : ", __name__)
    print("Enter first number : ")
    no1 = input()
    print("Enter second number : ")
    no2 = input()

    Ret = MarvellousModule.Addition(int(no1), int(no2))
    
    print("Addition is :",Ret)

if __name__ == "__main__":
    main()
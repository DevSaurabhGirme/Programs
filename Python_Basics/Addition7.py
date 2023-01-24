print("Application to demonstrate Industrial programming")

def Addition(Value1, Value2):
    Ans = Value1 + Value2
    return Ans

def main():
    print("Enter first number : ")
    no1 = input()
    print("Enter second number : ")
    no2 = input()

    Ret = Addition(int(no1), int(no2))
    
    print("Addition is :",Ret)

if __name__ == "__main__":
    main()
#Application to find out maximum number

def Maximum(no1, no2):
    if no1 > no2:
        return no1
    else:
        return no2

def main():
    print("Enter first number : ")
    Value1 = input()
    
    print("Enter second number : ")
    Value2 = input()

    Ans = Maximum(int(Value1), int(Value2))
    
    print("Largest number is :", Ans)
    
if __name__ == "__main__":
    main()
# Positonal arguments

def Add1(No1,No2):
    print("Value of No1 :",No1)
    print("Value of No1 :",No2)
    return No1+No2

def main():
    Ans = 0
    Ans = Add1(10.50,11)
    print("Addition is : ",Ans)
    
    Ans = Add1(No2 = 10,No1 = 11)
    print("Addition is : ",Ans)

if __name__ == "__main__":
    main()
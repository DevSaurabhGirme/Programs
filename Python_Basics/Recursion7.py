# 1   +2   +3   +4   =10

def Addition(No):
    Sum = 0
    while(No >= 0):
        Sum = Sum + No
        No -= 1

    return Sum
    
def main():

    number = int(input("Enter the number : "))
    
    Ans = Addition(number)      # Function call
    print("Addition upto {} is : ".format(number),Ans)

if __name__ == "__main__":
    main()
# Head recursion 
# 1   +2   +3   +4   =10

def Addition(No):

    if(No <= 0):
        return 0
    else:
        return (No + Addition(No - 1))
    
def main():

    number = int(input("Enter the number : "))
    
    Ans = Addition(number)      # Function call
    print("Addition upto {} is : ".format(number),Ans)

if __name__ == "__main__":
    main()
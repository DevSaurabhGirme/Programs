# Head recursion 
# 1   *2   *3   *4   = 24

def Factorial(No):

    if(No <= 0):
        return 1
    else:
        return (No * Factorial(No - 1))
    
def main():

    number = int(input("Enter the number : "))
    
    Ans = Factorial(number)      # Function call
    print("Factorial upto {} is : ".format(number),Ans)

if __name__ == "__main__":
    main()
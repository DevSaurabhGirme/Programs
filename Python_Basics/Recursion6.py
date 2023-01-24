# Head recursion 
# 1   2   3   4   5

def Display(No):
    if(No > 0):
        No -= 1
        Display(No)     #Recursive Call
        print(No)
    
def main():

    number = int(input("Enter the number : "))
    
    Display(number)      # Function call

if __name__ == "__main__":
    main()
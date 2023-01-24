# Tail recursion
# 4   3   2   1

def Display(No):
    if(No > 0):
        print(No)
        No -= 1
        Display(No)     # Recursive Call
    
def main():

    number = int(input("Enter the number : "))
    
    Display(number)      # Function call

if __name__ == "__main__":
    main()
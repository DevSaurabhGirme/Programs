# Iterative Call

def Display(No):
    while(No > 0):
        print(No)
        No -= 1
    
def main():

    number = int(input("Enter the number : "))
    
    Display(number)      # Function call

if __name__ == "__main__":
    main()
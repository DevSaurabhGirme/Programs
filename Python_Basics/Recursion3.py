
def Display(No):

    if(No > 0):
        print("Ganpati Bappa")
        No -= 1
        Display(No)     # Recursive function call

def main():
    Display(4)      # Function call

if __name__ == "__main__":
    main()
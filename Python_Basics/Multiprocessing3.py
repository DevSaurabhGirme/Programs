# This file shows actual time dedicated to our process

import time

def DisplayEven(No):
    for i in range(No):     # (1,No,1)
        if(i % 2 == 0):
            print("Even number :",i)

def DisplayOdd(No):
    for i in range(No):     # (1,No,1)
        if(i % 2 != 0):
            print("Odd number :",i)

def main():
    print("Demonstration of serial programming")

    DisplayEven(2000)
    DisplayOdd(2000)

if __name__ == "__main__":
    start_time = time.process_time()
    main()
    end_time = time.process_time()
    
    print("Execution time is :",end_time - start_time)
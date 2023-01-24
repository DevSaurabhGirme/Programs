# This file shows actual time dedicated to our process

import multiprocessing
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
    print("Demonstration of parallel programming using multi processes")

    number = 200
    p1 = multiprocessing.Process(target = DisplayEven, args = (number,))
    p2 = multiprocessing.Process(target = DisplayOdd, args = (number,))

    p1.start()
    p2.start()
    
    print("End of main")

if __name__ == "__main__":
    start_time = time.process_time()
    main()
    end_time = time.process_time()
    
    print("Execution time is :",end_time - start_time)
import schedule
import time
import datetime
import sys

def Task_Minute():
    print("Task based on minutes gets scheduled at : ",datetime.datetime.now())

def Task_Hours():
    print("Task based on hour gets scheduled at : ",datetime.datetime.now())

def Task_Day():
    print("Task based on day gets scheduled at : ",datetime.datetime.now())

def Script_Terminator():
    sys.exit()

def main():
    print("Inside Task schedular")
    print("Current time is :",datetime.datetime.now())

    schedule.every(1).minutes.do(Task_Minute)
#    schedule.every(1).hour.do(Task_Hours)
#    schedule.every().saturday.at("18:00").do(Task_Day)

    schedule.every(6).minutes.do(Script_Terminator)

    while(True):
        schedule.run_pending()
        time.sleep(1)

if __name__ == "__main__":
    main()
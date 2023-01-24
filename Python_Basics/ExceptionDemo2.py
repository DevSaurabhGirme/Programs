def main():

    try:
        No1 = int(input("Enter first number : "))

        No2 = int(input("Enter first number : "))

        Ans = No1 / No2
        print("Divison is :",Ans)

    except ZeroDivisionError:
        print("Exception occured")

    except ValueError:
        print("Inside Vlaue error")

    except Exception:
        print("Inside Last except block")

    finally:
        print("Inside finaly block")

if __name__ == "__main__":
    main()
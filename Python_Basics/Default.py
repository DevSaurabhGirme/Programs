# Default arguments

def Area(Radius, PI = 3.14):
    Result = PI * Radius * Radius
    return Result

def main():
    RValue = 10.5
    PIValue = 3.14
    
    Ans = Area(RValue,PIValue)  #  positional
    print("Area of circle is :",Ans)
    
    Ans = Area(PI = PIValue,Radius = RValue)  # keyword
    print("Area of circle is :",Ans)

    Ans = Area(10.5) # positional with Default 
    print("Area of circle is :",Ans)

    Ans = Area(Radius = 10.5)  # Keyword with Default
    print("Area of circle is :",Ans)

    Ans = Area(PI = 9.14, Radius = 10.5)  # keyword
    print("Area of circle is :",Ans)


if __name__ == "__main__":
    main()
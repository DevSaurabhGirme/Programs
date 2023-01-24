import os

def WriteToFile(FileName):
    if(os.path.exists(FileName)):
        print("Enter the data to write in the file")
        Data = input()

        fd = open(FileName, "a")
        fd.write(Data)

    else:
        print("File doesn't exist")
        return


def main():
    print("Enter the name of the file to open : ")
    Name = input()
    
    WriteToFile(Name)

if __name__ == "__main__":
    main()
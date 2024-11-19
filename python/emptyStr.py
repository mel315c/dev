#Name: Melanie Cruz
#Email: melanie.cruz21@myhunter.cuny.edu
#date: November 10,2023
#makes sure the string isn't empty
def main():
    while True:
        user = input("Enter a non-empty string: ")
        if user: 
            print ("You entered: ", user)
            break
        else:
            print("That was empty. Try again")
main()
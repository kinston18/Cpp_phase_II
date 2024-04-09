string1 = input("Give string 1: ")
string2 = input("Give string 2: ")

#length
if len(string1) != len(string2):
    print("Not anagram")

string1 = sorted(string1)
string2 = sorted(string2)

if string2 == string1:
    print("It is anagram")
else:
    print("Cannot be anagram")
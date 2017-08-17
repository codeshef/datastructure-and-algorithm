
# Recursive Python program to check if a string is subsequence

def  isSubsequence(string1,string2,m,n):
    if m== 0 : return True
    if n==0  : return False

    #if last characters of two strings are matching

    if string1[m-1] == string2[n-1] :
        return isSubsequence(string1,string2,m-1,n-1)

    # if last characters are not matching

    return isSubsequence(string1,string2,m,n-1)


string1 ="gksrek"
string2 ="geeksforgeeks"

m =len(string1)
n = len(string2)

if isSubsequence(string1,string2,m,n):
    print "Yes"
else:
    print "No"

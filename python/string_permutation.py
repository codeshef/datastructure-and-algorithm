#python program to print all permutation of string


def toString(List):
    return ''.join(List)

def permutate(a,l,r):
    if l==r:
        print toString(a)
    else:
        for i in xrange(l,r+1):
            a[l],a[i]=a[i],a[l]
            permutate(a,l+1,r)
            a[l],a[i] = a[i],a[l] #backtrack


string ="ABC"
n =len(string)
a =list(string)
permutate(a,0,n-1)


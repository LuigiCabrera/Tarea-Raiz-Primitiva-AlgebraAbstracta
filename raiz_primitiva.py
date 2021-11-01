import time
def expo_mood(base, expo, mood): # Return (base^expo) % mod very fast
    if expo == 1: return base % mood
    result = expo_mood(base,expo//2,mood)
    if expo % 2: return result*result*base %mood
    return result**2 % mood

def primitive_root(p):
    for root in range(1,p):
        found = []
        verify = True
        for expo in range(1,p):
            result = expo_mood(root,expo,p)
            if result in found:
                verify = False
                break
            found.append(result)
        if verify: return root
    return -1

def main():
    print("\n\n\t\t *** Smallest Primitive Root ***\n")
    while True:
        p = int(input("\n\nType a prime number p: "))
        if p == 0: break
        s = time.time()
        r = primitive_root(p)
        if r != -1: print("Primitive Root of",p, "=",r)
        else: print("Maybe", p, "its not prime")
        print("Time: ", round(time.time()-s,3))

main()
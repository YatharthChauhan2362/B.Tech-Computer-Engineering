import sys
randomList = ['a', 0, 2]
for entry in randomList:
    try:
        print("The Entry is", entry)
        f = 1/int(entry)
        break
    except:
        print("Ooops!", sys.exc_info()[0], " occured")
        print("Next entry")
        print()
print("The Reciprocal of", entry, " is", f)

print("\n20DCE019 - Yatharth Chauhan")

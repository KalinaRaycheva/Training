fav_book = input()
count = 0

book = input()
while book != fav_book:

    if book == "No More Books":
        break

    count += 1
    book = input()

if book == fav_book:
    print(f"You checked {count} books and found it.")
else:
    print("The book you search is not here!")
    print(f"You checked {count} books.")

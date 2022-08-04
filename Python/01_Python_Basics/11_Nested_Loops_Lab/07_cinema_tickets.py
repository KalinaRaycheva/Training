total_ticket_count = 0
cur_ticket_count = 0
student_tickets = 0
standard_tickets = 0
kids_tickets = 0

film = input()
while film != "Finish":
    available_seats = int(input())

    while available_seats > cur_ticket_count:
        ticket_type = input() # student, standard, kid

        if ticket_type == 'student':
            student_tickets += 1
        elif ticket_type == 'standard':
            standard_tickets += 1
        elif ticket_type == "kid":
            kids_tickets += 1
        elif ticket_type == "End":
            break

        cur_ticket_count += 1

    print(f"{film} - {cur_ticket_count / available_seats * 100:.2f}% full.")
    total_ticket_count += cur_ticket_count
    cur_ticket_count = 0

    film = input()

print(f"Total tickets: {total_ticket_count}")
print(f"{student_tickets / total_ticket_count * 100:.2f}% student tickets.")
print(f"{standard_tickets / total_ticket_count * 100:.2f}% standard tickets.")
print(f"{kids_tickets / total_ticket_count * 100:.2f}% kids tickets.")



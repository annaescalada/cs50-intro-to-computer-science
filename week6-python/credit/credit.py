import re

def main():
    card_input = input("Number: ").strip()

    if not re.fullmatch(r"\d{13,16}", card_input):
        print("INVALID")
        return

    card_number = int(card_input)
    remaining = card_number
    card_length = 0
    sum_check = 0
    start_digits = 0

    while remaining > 0:
        card_length += 1
        digit = remaining % 10

        if card_length % 2 == 0:
            doubled = digit * 2
            sum_check += doubled // 10 + doubled % 10
        else:
            sum_check += digit

        if 10 < remaining < 100:
            start_digits = remaining

        remaining //= 10

    if sum_check % 10 != 0:
        print("INVALID")
    elif card_length == 15 and (start_digits == 34 or start_digits == 37):
        print("AMEX")
    elif card_length == 16 and (51 <= start_digits <= 55):
        print("MASTERCARD")
    elif (card_length == 13 or card_length == 16) and start_digits // 10 == 4:
        print("VISA")
    else:
        print("INVALID")


if __name__ == "__main__":
    main()

def main():
    while True:
        try:
            height = int(input("Height: "))
            if 1 <= height <= 8:
                break
        except ValueError:
            continue

    for level in range(1, height + 1):
        print_row(level, height)


def print_row(level, max_level):
    spaces = max_level - level
    blocks = level
    print(" " * spaces + "#" * blocks + "  " + "#" * blocks)


if __name__ == "__main__":
    main()

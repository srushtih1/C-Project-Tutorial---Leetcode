def parse_encoded_file(file_path):
    last_numbers = []
    with open(file_path, 'r') as file:
        for line in file:
            values = line.strip().split(' ')
            last_number = int(values[-1])  # Get the last number from the line
            last_numbers.append(last_number)
    print(last_numbers)
    return last_numbers


def find_word_in_input(number, file_path):
    with open(file_path, 'r') as file:
        for line in file:
            value = line.strip().split(' ')
            if int(value[0]) == number:
                return value[1]
    return None

def decode_encoded_pyramid(last_numbers, input_file_path):
    decoded_message = ''
    for number in last_numbers:
        word = find_word_in_input(number, input_file_path)
        if word:
            decoded_message += word + ' '
    return decoded_message.strip()

def main():
    input_file_path = "coding_qual_input.txt"
    encoded_pyramid_values = parse_encoded_file("encoded_message.txt")
    decoded_message = decode_encoded_pyramid(encoded_pyramid_values, input_file_path)
    print("Decoded Message:", decoded_message)

if __name__ == "__main__":
    main()

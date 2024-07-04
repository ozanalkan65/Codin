TEXT = "numbers.txt"
num_list=[]
last_list=[]
def process():
    for i in num_list:
        counter = 0
        digits = [int(digit) for digit in str(i)]
        for k in digits:
            counter += int(k)**len(str(i))
        if counter == int(i):
            x = str(counter) + "\n"
            last_list.append(x)
    return last_list


def main():
    try:
        with open(TEXT) as my_file:
            for val in my_file:
                num_list.append(val.strip())
    except OSError as err:
        print(f"Error is ->{err}")
    process()
    try:
        with open("armstrong.txt","w") as file:
            for elem in last_list:
                file.write(elem)
    except OSError as err:
        print(f"Error is ->{err}")
if __name__ == '__main__':
    main()
SEQ = 'seq.txt'
SEQ_LONG = 'seq-long.txt'
liste = []


def get_input():
    word1 = input("Enter the first word\n")
    word2 = input("Enter the second word\n")
    #print(word1,word2)

def checking():
    for line in lines:
        for words in line:
            print(words)


def main():
    try:
        with open(SEQ) as myfile:
            lines = myfile.readlines()
            for line in lines:
                words = line.strip()
                liste.append(words)
                print(words)
            #print(liste)
            #print(lines)
                

    except OSError as err:
        print(f'error is: {err}')

#get_input()
main()
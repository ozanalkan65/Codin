TEXT1 = 'strawberry.txt'
TEXT2 = 'strawberry-short.txt'
liste=[]

def process():
    prev = ''
    prevprev = ''
    for kelime in liste:
        if len(prevprev) == len(prev) == len(kelime):
            print(f'(\'{prevprev.upper()}\', \'{prev.upper()}\', \'{kelime.upper()}\')')
        prevprev = prev
        prev = kelime
def main():
    try:
        with open(TEXT1) as file:
            for line in file:
                words = line.split()
                for word in words:                  
                    word = word.lower().strip('",.,,')
                    liste.append(word)
            process()    
    except OSError as err:
        print(f'Error type is: {err}')

if __name__ == '__main__':
    main()
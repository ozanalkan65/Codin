import pprint
MOVES = "moves.txt"
X_AXIS = 7
Y_AXIS = 6 
move_list = []
template_list = []
win_list = []
win_list_updated = []
def file_opening(x):
    try:
        with open(x) as my_file:
            for line in my_file:
                move,location = (line.strip().split())
                move_list.append((move,int(location)))
        return move_list
    except OSError as err:  
        print(f"Error type is: {err}")

def template():
    for col in range(Y_AXIS):
        row_list = []
        for row in range(X_AXIS):
            row_list.append("-")
        template_list.append(row_list)

def win_check():
    #CROSS RIGHT
    try:
        x = 3
        y = 0
        cc=1
        for r in range(12):
            for c in range(1):
                win_list.append([x,y])
            x -= 1
            y+=1
            if y == 4:
                y=0
                x = 3 + cc
                cc +=1
        #print("--------")
        x = 5
        y = 3
        cc=1
        for r in range(12):
            for c in range(1):
                win_list.append([x,y])
            x -= 1
            y+=1
            if y == 7:
                y=3
                x=5
                x = x - cc
                cc +=1
        #print("--------")
        #CROSS LEFT
        x = 3
        y = 3
        cc=1
        for r in range(12):
            for c in range(1):
                win_list.append([x,y])
            x -= 1
            y-=1
            if y == -1:
                y=3
                x=3
                x = x + cc
                cc +=1
        #print("-------")
        x = 3
        y = 6
        cc=1
        for r in range(12):
            for c in range(1):
                win_list.append([x,y])
            x -= 1
            y-=1
            if y == 2:
                y=6
                x=3
                x = x + cc
                cc +=1
        #CROSSES FINISHED
        #print("---------")
        x = 5
        y = 0
        cc=1
        for r in range((X_AXIS)*(Y_AXIS-2)):
            for c in range(1):
                win_list.append([x,y])
            x -= 1
            if x == 1:
                y=0
                x=5
                y = y + cc
                cc +=1
        #print("---------")
        x = 4
        y = 0
        cc=1
        for r in range((X_AXIS)*(Y_AXIS-2)):
            for c in range(1):
                win_list.append([x,y])
            x -= 1
            if x == 0:
                y=0
                x=4
                y = y + cc
                cc +=1
        #VERT FINISHED
        #print("---------")
        x = 5
        y = 0
        cc=1
        for r in range((6)*(4)):
            for c in range(1):
                win_list.append([x,y])
            y += 1
            if y == 4:
                y=0
                x=5
                x = x - cc
                cc +=1
        return win_list     
        
    except IndexError as err:
        print(err)

def movements():
    counters = dict()
    for i in range(0,7):
        counters[i] = 5
    #print(counters.items())
    for move,location in move_list:    
        counter = Y_AXIS -1   

        if move == 'G1':

            while counters[location]>=0 and template_list[counters[location]][location] != 'O':
                if template_list[counters[location]][location] == '-':
                    template_list[counters[location]][location] = 'O'
                    break
                counters[location] -= 1
        if move == 'G2':
            while counters[location]>=0 and template_list[counters[location]][location] != 'X':
                #print(counter)
                if template_list[counters[location]][location] == '-':
                    template_list[counters[location]][location] = 'X'
                    break   
                counters[location] -= 1
        print(f"Player {move} plays \n")
        pprint.pprint(template_list)
    

def main():
    file_opening(MOVES)
    #print(move_list)
    template()
    movements()
    ccounter = 1
    xx = []
    for each4 in win_check():
        xx.append(each4)
        if  ccounter % 4 == 0:
            win_list_updated.append(xx)
            xx = []
        ccounter += 1
    #for i in range(len(win_list_updated)):
    #    win_list_updated[i]
    #    for x,y in win_list_updated[i]:
    #        print()

if __name__ == '__main__':
    main()
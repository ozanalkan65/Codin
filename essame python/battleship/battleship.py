import pprint
MAP1 = "map1.dat"
MAP2 = "map2.dat"
MOVES = "moves.txt"

def file_operations(files):
    liste=[]
    try:
        with open(files) as file:
            for line in file:
                liste.append(line.strip())
        return liste
    except OSError as err:
        print(f"Error type is: {err}")

def game_rules(splitted_list,first_player,second_player,rowcol_list1,rowcol_list2):
    first_player_moves = []
    second_player_moves = []
    row_col = []
    for row , col in splitted_list:
        row = ord(row) - ord('A')
        col = int(col)
        row_col.append([row,col])
    for i in range(len(row_col)):
        if i%2 ==0:
            first_player_moves.append(row_col[i])
        else:
            second_player_moves.append(row_col[i])
    return first_player_moves,second_player_moves

def shot(player_moves,board):    
    for row,col in player_moves:
        if board[row][col] == '#':
            board[row][col] = '*'
            print(f"HIT!!",{row},{col})

        if board[row][col] == '-':
            board[row][col] = 'o'
            print("MISS",{row},{col})
    return board

def main():
    splitted_list = []
    first_player = file_operations(MAP1)
    second_player = file_operations(MAP2)
    move_list = file_operations(MOVES)
    for elem in move_list:
        splitted_list.append(elem.split(","))
    rowcol_list1 = [[elem for elem in line] for line in first_player]
    rowcol_list2 = [[elem for elem in line] for line in second_player]
    first_player_moves,second_player_moves = game_rules(splitted_list,first_player,second_player,rowcol_list1,rowcol_list2)
    x = shot(first_player_moves,rowcol_list1)
    y = shot(second_player_moves,rowcol_list2)

    #pprint.pprint(second_player)
    #pprint.pprint(y)

    
    
    
    


if __name__ == '__main__':
    main()

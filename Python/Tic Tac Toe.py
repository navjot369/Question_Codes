# Tic Tak toe game made by Navjot Singh.

def print_game(board):
    for i in range(3):
        for j in range(3):
            print(board[i*3+j], end="")
            if j != 2:
                print("|", end="")
            else:
                print()
        
def check_winner(board):
    win_way = ((0, 1, 2), (3, 4, 5), (6, 7, 8), (0, 3, 6), (1, 4, 7), (2, 5, 8), (0, 4, 8), (2, 4, 6))
    for way in win_way:
        if board[way[0]] == board[way[1]] == board[way[2]]:
            print("\nHoorah!", board[way[0]], "Wins!")
            return True
    else:
        return False
        
def user_input(board, move, turn):
    print("\nMove number is", move, "and turn is of", turn)
    while True:
        try:
            user = int(input("Enter your choice :"))
            if user not in range(1, 10):
                raise ValueError
            if board[user-1] in {"X", "0"}:
                raise ValueError
            else:
                return user
        except ValueError:
            print("Consider entering a valid choice..!")

def main_game():
    print("\n\nWelcome! First turn will be of X")
    board = [1, 2, 3, 4, 5, 6, 7, 8, 9]
    move = 0
    for abc in range(9):
        print_game(board)
        move += 1
        if move%2 == 0:
            turn = "0"
        else:
            turn = "X"
        user_choice = user_input(board, move, turn)
        board[user_choice-1] = turn
        whether_win = check_winner(board)
        if whether_win:
            break
    else:
        print("Opps! No one win")

while True:
    main_game()

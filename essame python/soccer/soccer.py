#Forward_efficiency = (goals / minutes) + (assists / minutes) - (offsides / minutes)
#Midfield_efficiency = (interceptions + ball_recoveries + (assists / crosses) / minutes)
#player,position,team,birth_year,minutes,goals,assists,offsides,crosses,interceptions,tackles_won,pens_conceded,ball_recoveries,aerials_won,aerials_lost


STATS = "player_stats-small.csv"
import csv

def MECALC(interceptions,ball_recoveries,assists,crosses,minutes):
    return (interceptions + ball_recoveries + (assists / crosses)) / minutes
def FECALC(goals,minutes,assists,offsides):
    return (goals / minutes) + (assists / minutes) - (offsides / minutes)

def FE(player):
    goals = int(player['goals'])
    assists = int(player['assists'])
    offsides = int(player['offsides'])
    minutes = int(player['minutes'])
    if minutes == 0:
        return 0
    return FECALC(goals,minutes,assists,offsides)

def ME(player):
    interceptions = int(player['interceptions'])
    ball_recoveries = int(player['ball_recoveries'])
    assists = int(player['assists'])
    crosses = int(player['crosses'])
    minutes = int(player['minutes'])
    if minutes == 0 or crosses == 0:
        return 0
    return MECALC(interceptions,ball_recoveries,assists,crosses,minutes)

def eff(players):
    for player in players:
        player['Forward_efficiency'] = FE(player)
        player['Midfield_efficiency'] = ME(player)
    


def dosya(filename):
    player_stats = []
    with open(filename, newline='', encoding='utf-8-sig') as csvfile:
        reader = csv.DictReader(csvfile)
        for row in reader:
            player_stats.append(row)
    return player_stats

def sortFE(players):
    return sorted(players, key=FE, reverse=True)

def sortME(players):
    return sorted(players, key=ME, reverse=True)

def main():
    try:
        player_stats = dosya(STATS)
        eff(player_stats)
        
        print("Name                           Team                             Forward efficiency")
        sorted_players_forward = sortFE(player_stats)
        for player in sorted_players_forward:
            print(f"{player['player']:<30} {player['team']:<30} {player['Forward_efficiency']:.3f}")
        
        
        print("Name                           Team                            Midfield efficiency")
        sorted_players_midfield = sortME(player_stats)
        for player in sorted_players_midfield:
            print(f"{player['player']:<30} {player['team']:<30} {player['Midfield_efficiency']:.3f}")

    except OSError as err:
        print(f'Error is ----> {err}')


main()

         
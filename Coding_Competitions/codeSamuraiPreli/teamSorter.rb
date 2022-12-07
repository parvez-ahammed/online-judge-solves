def read_university()
  universityFile = File.new("teams.txt", "r")
  number_of_lines = File.foreach(universityFile).count
#   puts number_of_lines
  teams = Array.new()

  position = 1

  while (number_of_lines > 0)
    team = universityFile.gets.to_s

    if (team != "")
      if (team[0] >= "A" && team[0] <= "Z")
       team = team.chomp
        team += " " + position.to_s
        # puts team
        teams<< team
        position+=1
      end
    end

    number_of_lines -= 1
  end
  return teams
end

def print_teams(allTeams)
    team_list = File.new("SortedTeamList.txt", "w")
    allTeams.sort!
    i = 0
    while ( i < allTeams.size)
        team_list.puts allTeams[i]
        i+=1
    end
    puts "Teams saved in Sorted Team list file "
end

def main()
    allTeams = read_university()
    print_teams(allTeams)
end

main()

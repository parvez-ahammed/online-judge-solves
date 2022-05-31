#write Ruby code that uses a while() loop to read and print 10 integers from the user.


def main()
  i = 0
  while i < 10
    puts "Enter an integer: "
    num = gets.chomp.to_i
    i += 1
  end
end
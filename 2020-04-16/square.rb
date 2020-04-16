print "Input number :"
n = gets.chomp
n = n.to_i

n.times do |i|
    puts "#{(i+1)**2} is square of #{i+1} "
end
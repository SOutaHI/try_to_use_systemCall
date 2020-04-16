#!/usr/bin/env ruby
print "origin file name? :"
name = gets.chomp
print "Copy number? :"
num = gets.chomp.to_i

num.times do |i|
    system "cp #{name} clone#{i+1}.dat"
end

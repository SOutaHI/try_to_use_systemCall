#!/usr/bin/env ruby

files = Dir.glob('*').sort
files.each do |f|
    puts "#{File.size(f)} is size of #{f}"
end
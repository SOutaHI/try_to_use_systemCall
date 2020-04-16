ARGV.each do |f|
    if File.executable?(f)
        puts "#{f} is executable."
    else
        puts "#{f} is not executable."
    end
end
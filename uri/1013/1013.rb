def maior(a, b)
    (a + b + (a-b).abs) / 2
end

input = gets.chomp
a = input.scan(/\d+/).map{|x| x.to_i}

puts "#{maior(a[0], maior(a[1], a[2]))} eh o maior"

bb = 2
a = 1
b = 1
c = 1

n = gets.to_i

n.times do
    puts "#{a} #{b} #{c} "
    b += 1
    c += 1
    puts "#{a} #{b} #{c} "
    a += 1

    b += bb
    bb += 2
    c = a * b
end

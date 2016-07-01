require './nbiobsp'

nbio = NBioBSP.new
nbio.init

puts "Insira a primeira digital: "
fir1 = nbio.capture 4000

puts "Insira a segunda digital: "
fir2 = nbio.capture 4000

is_same = nbio.match(fir1, fir2)
if is_same == true
	puts "Digitais correspondem!"
else
	puts "Digitais não correspondem."
end

nbio.close
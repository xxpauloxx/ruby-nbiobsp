# NBioBSP Module for Ruby

Digital fingerprint reader module for Ruby using Nitgen device.
Install the driver that is the "driver" directory.

```console
git clone https://github.com/paulopinda/ruby-nbiobsp.git
cd ruby-nbiobsp
ruby extconf.rb
```

Edit Makefile in line "ldflags" and add flag "-lNBioBSP".

```console
make
ruby test.rb
```

#### Simple code

```ruby
require './nbiobsp'

nbio = NBioBSP.new
nbio.init

puts "Insert the first fingerprint: "
fir1 = nbio.capture 4000

puts "Insert the second fingerprint: "
fir2 = nbio.capture 4000

is_same = nbio.match(fir1, fir2)
if is_same == true
	puts "OK!"
else
	puts "NOK!"
end

nbio.close
```


# Módulo NBioBSP Ruby

Módulo para utilização do leitor biométrico Nitgen Hamster III em Ruby. 
Faça a instalação do driver que está no diretório driver(64 bits, mas existe 
32 bits na Internet também).

```console
git clone https://github.com/izepa/ruby-nbiobsp-module.git
cd ruby-nbiobsp-module 
ruby extconf.rb 
```

Edite o arquivo Makefile na linha "ldflags" e acrescente a seguinte flag "-lNBioBSP" faça o seguinte comando:

```console
make
ruby test.rb
```

#### Código para testar o módulo.

```ruby
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
```

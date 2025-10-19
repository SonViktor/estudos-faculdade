#String = texto
nome = "Viktor"
#Int = inteiro
idade = 20


cor = "Rosa"

if cor == "Azul":
    print("A cor é Azul")

elif cor == "Rosa":
    print("A cor é Rosa")

else:
    print("A cor não é Azul nem Rosa")


idade = int(input("Digite sua idade: "))

if idade >= 18:
    print("Você é maior de idade.")
else:
    print("Você é menor de idade.")
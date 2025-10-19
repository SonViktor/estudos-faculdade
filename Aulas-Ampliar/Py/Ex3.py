nome = input("Digite seu nome: ") #no input por padrão ele já recebe texto, você só especifica quando for usar outro tipo de variável
nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota:"))
nota3 = float(input("Digite a terceira nota: "))
nota4 = float(input("Digite a quarta nota: "))

media = (nota1 + nota2 + nota3 + nota4) // 4

print("Aluno: ", nome)
print("Primeira nota: ", nota1)
print("Segunda nota: ", nota2)
print("Terceira nota: ", nota3)
print("Quarta nota: ", nota4)

print("Sua média foi de: ", media)
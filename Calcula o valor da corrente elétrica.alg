algoritmo "Exercícios da aula 5"
// Função : Calcula o valor da corrente elétrica
// Autor :  Hamilton R. Tabosa
// Data : 01/04/2020

// Seção de Declarações 
var
corrente, tensao, resistencia: real
inicio
// Seção de Comandos 
Escreval("Qual o valor da tensão elétrica?")
Leia(tensao)
Escreval("Qual o valor da resistência?")
Leia(resistencia)
corrente<- (tensao/resistencia)
Escreva("O valor da corrente elétrica é de", corrente)
fimalgoritmo

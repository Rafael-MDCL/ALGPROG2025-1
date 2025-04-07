// 2. Analise a seguinte descrição de um problema e identifique as partes comuns de um algoritmo
// (Entrada, Processamento e Saída):
// Um programa deve calcular a idade de uma pessoa com base no ano de nascimento fornecido pelo
// usuário. O programa exibe a idade calculada na tela.
// Perguntas:
// a) Qual é a entrada de dados?
// b) Qual é o processamento realizado?
// c) Qual é a saída de dados?
// Respostas:
// a) a entrada de dos dados seria o ano de nascimento fornecido pelo usuário.
// b) o cálculo que seria feito entre o ano fornecido e o dia atual.
// c) a idade da pessoa após os cálculos.
// -----------------------------
// 3. A seguir, são apresentados três problemas diferentes. Para cada um deles, identifique:
// • Entrada de dados (informações fornecidas pelo usuário)
// • Saída de dados (informação que será exibida para o usuário)
// • Possíveis variáveis que poderiam ser utilizadas para armazenar os dados e realizar o
// processamento.
// Perguntas:
// a) Uma empresa deseja criar um sistema que calcula o salário final de um funcionário. O sistema
// precisa receber o valor do salário base e o percentual de bônus aplicado. O programa deve
// calcular e exibir o valor final do salário com o bônus incluído.
// b) Um posto de gasolina precisa de um programa que calcule o valor a ser pago por um cliente. O
// cliente informa quantos litros abasteceu e o preço por litro. O programa deve calcular e exibir
// o valor total da compra.
// c) Um consultório médico deseja registrar informações básicas dos pacientes para futuras
// consultas. O sistema precisa armazenar os seguintes dados de cada paciente, para
// acompanhamento ao longo do tempo: sexo (M ou F), dia, mês e ano de nascimento, altura
// (em metros) e peso (em kg).
// -----------------------------
// Respostas:
// a) Entrada: Salário base e percentual de bônus. (1500, 25%)
// a) Saída: Exibirá o salário final total com o bônus
// a) Possível nome de variáveis: salarioBase, porcentagem, salarioFinal
// -----------------------------
// b) Entrada: O programa recebe os litros consumidos pelo cliente juntamente o preço por litro
// b) Saída: O Valor a ser pago pelo Cliente
// b) Possível nome de variáveis: litros, preco
// -----------------------------
// c) Entrada: O sistema recebe os as informações requisitadas pelo hospital
// c) Saída: Os dados são recebidos e uma mensagem de registro é mostrada no terminal, ou na tela
// c) Possível nome de variáveis: Criar uma estrutura de variáveis que sejam: sexo, nascimento, altura(m), peso(kg)
// -----------------------------
// 4. Em C, os cálculos matemáticos são expressos por meio de operações aritméticas. A ordem de
// execução das operações é determinada pela precedência de operadores, podendo ser alterada
// pelo uso de parênteses.
// A seguir, temos quatro situações que envolvem cálculos matemáticos. Para cada uma delas:
// • Escreva a expressão matemática correspondente utilizando os operadores da linguagem C (+, -
// , *, /).
// • Se necessário, utilize parênteses para garantir que as operações sejam realizadas na ordem
// correta.
// Perguntas:
// a) O preço final de um produto é calculado somando o valor original com o imposto aplicado. O
// imposto corresponde a 10% do valor original, e um desconto fixo de R$5,00 é aplicado após a
// adição do imposto.
// Variáveis sugeridas:
// − preco_original (float) → valor original do produto
// − preco_final (float) → resultado do cálculo
// -----------------------------
// b) Um professor deseja calcular a média ponderada de três notas (n1, n2 e n3). Cada nota possui
// um peso específico, representado pelas variáveis p1, p2 e p3.A média ponderada é dada pela
// fórmula:
// média ponderada =
// 𝑛1 × 𝑝1 + 𝑛2 × 𝑝2 + 𝑛3 × 𝑝3
// 𝑝1 + 𝑝2 + 𝑝3
// Variáveis sugeridas:
// − n1, n2, n3 (float) → notas
// − p1, p2, p3 (float) → pesos das notas
// − media_ponderada (float) → resultado do cálculo
// -----------------------------
// c) Um ciclista quer calcular a distância total percorrida durante um treino. Ele percorreu:
// • 2 horas a uma velocidade de 12 km/h
// • 3 horas a uma velocidade de 18 km/h
// A distância de cada trecho é dada por:
// distância = 𝑡𝑒𝑚𝑝𝑜 × 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑𝑒
// Variáveis sugeridas:
// − tempo1, tempo2 (float) → tempo gasto em cada trecho
// − velocidade1, velocidade2 (float) → velocidades nos respectivos trechos
// − distancia_total (float) → resultado do cálculo
// -----------------------------
// d) Um programa deve calcular o valor de um polinômio quadrático do tipo:
// 𝑦 = 𝑎𝑥
// 2 + 𝑏𝑥 + 𝑐
// onde x é fornecido pelo usuário, e a, b e c são coeficientes predefinidos.
// Variáveis sugeridas:
// − x (float) → valor fornecido pelo usuário
// − a, b, c (float) → coeficientes do polinômio
// − y (float) → resultado do cálculo

/// Respostas:
// a) preco_final = preco_original + preco_original * 0.10 - 5;
// b) media_ponderada = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
// c) distancia_total = tempo1 * velocidade1 + tempo2 * velocidade2;
// d) y = a * x * x + b * x + c;

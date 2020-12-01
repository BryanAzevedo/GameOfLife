# GameOfLife
Implementação do autômoto celular em forma de jogo proposto pelo matemático  John Horton Conway como "Jogo da Vida" 
# Regras do jogo 

   1.Qualquer célula viva com menos de dois vizinhos vivos morre de solidão.

   2.Qualquer célula viva com mais de três vizinhos vivos morre de superpopulação.

   3.Qualquer célula morta com exatamente três vizinhos vivos se torna uma célula viva.

   4.Qualquer célula viva com dois ou três vizinhos vivos continua no mesmo estado para a próxima geração.

É importante entender que todos os nascimentos e mortes ocorrem simultaneamente. Juntos eles constituem uma geração ou, como podemos chamá-los, um "instante" na história da vida completa da configuração inicial. 
# Funcionamento da implementação 
A população incial é escrita em um arquirvo e depois lida desse mesmo arquivo. As mudanças de gerações ocorrem a cada entrada de um caractere do usuário. 

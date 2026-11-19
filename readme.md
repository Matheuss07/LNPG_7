l1.c

O programa lê as coordenadas dos dois pontos com scanf e calcula a distância com sqrt. Para A = (0,0) e B = (3,4), a saída é Distancia = 5.00. Precisa de -lm na compilação por causa da sqrt.

```sh
gcc -std=c11 -Wall -Wextra l1.c -o l1 -lm && ./l1
```

l2.c

A média de cada aluno sai dos três campos n1, n2 e n3, e o laço guarda a maior. Como Ana tem 9, 9 e 9, a saída fica Maior media: Ana (9.00). O typedef deixa eu escrever Aluno em vez de struct toda vez.

l3.c

A função recebe o endereço de p e soma dx e dy nos campos com p->x e p->y. Então o struct original muda, sem cópia. A saída é (5, 3).

l4.c

O primeiro byte impresso é 04. O computador guarda o int em little-endian, com o byte menos significativo no menor endereço, então a ordem fica 04 03 02 01.

l5.c

Na Ruim, a fica no offset 0, b no 4 e c no 8. Tem 3 bytes de padding depois de a e mais 3 no fim, por isso o sizeof é 12. Na Bom, b fica no 0, a no 4 e c no 5, com 2 bytes de padding só no fim, dando 8. A ordem dos campos mudou onde o compilador precisou alinhar o int.

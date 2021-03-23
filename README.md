# TxTbase
Data base txt based

() Data base simples para uso geral
() Simples aplicação 
() Funcionamento basico e completo

---

#Limitações

1- Os valores passados são strings (nessesita alterar o tipo de passagem)

2- Por funcionamento basico não se pode prever erros e não cumpre tarefas complexas

3- So se pode passar um dado por arquivo (porem a leitura e simples modificação igualmente)

---

**Exemplo**

```c
#include "txtbase.h"

int main(void) {

  char imput[90];

  DATAREAD(dir, nome, imput);  

  printf("%s", imput);
  return 0;
}
```

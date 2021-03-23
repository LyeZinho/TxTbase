# TxTbase
Data base txt based


∘ Data base simples para uso geral

∘ Simples aplicação 

∘ Funcionamento basico e completo

---

#Limitações

1- Os valores passados são strings (nessesita alterar o tipo de passagem)

2- Por funcionamento basico não se pode prever erros e não cumpre tarefas complexas

3- So se pode passar um dado por arquivo (porem a leitura e simples modificação igualmente)

---

Instalação

Tenha o arquivo `txtbase.h` no mesmo local do programa
utilize o include do `"txtbase.h"`
use todas as funcionalidades da biblioteca a vontade

**Exemplo**

Leitura 

```c
#include "txtbase.h"

int main(void) {

  char imput[90];

  DATAREAD(dir, nome, imput);  

  printf("%s", imput);
  return 0;
}
```

Escrita

```c
#include "txtbase.h"

int main(void) {

  char imput[90];

  printf("Digite os valores da db\n");

  fgets(imput, 90, stdin);

  DATAWRITE(dir, nome, imput);  
  return 0;
}
```

---
Info

<img alt="C" src="https://img.shields.io/badge/c%20-%2300599C.svg?&style=for-the-badge&logo=c&logoColor=white"/>

Isso e apenas uma coizinha que eu tava fazendo porvavelmente tem outras maneiras 
mais complexas de trabalhar com isso por isso pode revirar o codigo remodelar a vontade (☞ﾟヮﾟ)☞
Discord: LyePedro#4510

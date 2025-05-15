# 🌎 hello-world
![Badge de Status](https://img.shields.io/badge/status-Desenvolvido-yellow)

> Projetinho para printar "hello world" com **Arduino Uno, display LCD I2C** e alguns jumpers.
<br>

#### ⚠️ Não têm os componentes?! Está tudo bem! Você pode usar arduino sem ter arduino com simuladores, como o TinkerCad.
> 🔗 Simulador TinkerCad: <a href="https://www.tinkercad.com/things/lV89E6xl6VW-hello-world">Projeto no simulador</a> <br>
> 🎬 Youtube: <a href="https://github.com/user-attachments/assets/19a476a7-41af-4f36-bb9d-0580eed1716b">Use um Arduino sem ter Arduino!</a>
<br>

# 🧩 Hardware
<br>
<br>
<div align="center">
  <img src="https://github.com/user-attachments/assets/da4df6c1-4798-4432-bfb0-ef77423ed374" width="500">
</div>
<br><br>
Abaixo temos uma tabela detalhando os componentes utilizados:
<br><br>


| Componente        | Descrição                                                              | Porta do Arduino         |
|-------------------|------------------------------------------------------------------------|---------------------------|
| Arduino Uno       | Microcontroladora principal do projeto                                 | -                         |
| Display LCD I2C   | Display LCD 16x2 com interface I2C. Exibe a mensagem "Hello, World"    | GND → GND <br> VCC → 5V <br> SDA → A4  <br> SCL → A5   |

<br>


# 🧩 Arquitetura

``` text
📁 include
├── 📝 header.hpp # header com as impotações utilizadas em src/main.cpp
│
├── 📁 lib
|   └── 📁 LcdController
│        └── 📝 LcdController.cpp  # Implementações do cabeçado (LcdController.hpp)
|        └── 📝 LcdController.hpp  # Cabeçalhos da classe e métodos (public and private)
│
└── 📝 main.cpp         # Arquivo principal para o compilador
└── ⚙️ cMakeList.txt    # Configuração para o compilar
└── 👾 .gitignore       # Diretório/arquivos que não precisam ser commitados


```
<br>

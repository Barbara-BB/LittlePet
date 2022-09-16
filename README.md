# LittlePet
LittlePet Samrt_Feeder


   - [Em 2020-1 (LittlePet) 1º Semestre](#em-2020-1-littlepet-1º-semestre)
        - [Empresa](#empresa)
        - [Problema](#problema)
        - [Solução](#solução)
            - [Hardware](#hardware)
            - [Software](#aplicativo-mobile)
        - [Tecnologias utilizadas](#tecnologias-utilizadas)
     

# Em 2020-1 (LittlePet) 1º Semestre
<p align="center">
<img alt="Logo littlePet" src="https://github.com/Barbara-BB/LittlePet/blob/main/Docs/imagens/logo%20little%20pet.png" height="100">
</p>

## Empresa
<p align="justify">
No primeiro semestre não se teve uma empresa, os projetos foram definidos pelas equipes.

## Problema
<p align="justify">
Os dispensadores automáticos de ração existentes hoje no mercado foram feitos para trabalhar com ração de cachorros e gatos, mas falha quando é usado com rações de outros pets, porque estas rações são cilindricas e costumam travar o alimetador.
O projeto visa oferecer uma opção de dispensador de ração automático feito para ração de roedores e lagomorfos devido as suas seguntes características:</p>


* Maior potência do motor
* Não trava com rações cilindricas
* Pesa a ração oferecida
* Informa quando o alimentador está sem ração

### Hardware
<p align="center">
<img alt="Logo littlePet" src="https://github.com/Barbara-BB/LittlePet/blob/main/Docs/imagens/Itens_LittlePet.png" height="800">
</p>

1. WIFI-Lora com Display
2. Ponte H dupla Driver motor
3. Motor 12V 15KGF
4. HX711
5. Balança
6. Fonte 12DC



### Aplicativo Mobile

O aplicativo mobile foi feito pelo Kodular com programação em blocos, desta forma, a programação realizava a comunicação entre a programação do arduino e a interface com o usuário.
Abaixo está a tela principal do aplicativo que será explicado de cima para baixo a seguir.

<p align="center">
<img alt="tela aplicativo de agendamento" src="https://github.com/Barbara-BB/LittlePet/blob/main/Docs/imagens/tela%20aplicativo%20little%20pet.png" height="500">
</p>

1. Um bloco informando qual usuário está conectado e o botão para deslogar o mesmo.
2. Um botão de seleção em que o usuário pode selecionar uma entre todas as conexões disponíveis ao redor.
3. Um texto informado se a conexão teve sucesso ou não.
4. A lista dos horários de dispensamento criados pelo usuário, quando não está informado quais os dias da semana o alarme será diariamente.
5. Botão para abrir um modal para seleção do horário para o agendamento (Aparece-se um texto embaixo informando qual o selecionado para confirmação).
6. Um array de botões, quando o usuário clica em um ele se torna verde informando que aquele dia será incluso na rotina para o horário selecionado do alarme.
7. Botão para confirmar a adição do horário novo.
8. Um texto adicionado para a etapa de desenvolvimento, informando onde o aparelho estava conectado, retirado na versão final.





## Tecnologias Utilizadas
- Kodular

Para a programação mobile.

- Arduino

Para o uso em hardware.

- Firebase

Banco de dados utilizado.


</p>


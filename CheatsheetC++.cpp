// CheatSheet C++ - C++ Basics

// -----------------------------------------------------------------------------
// Comentários

// Comentário de uma linha

/*
   Comentário de múltiplas linhas
*/

// -----------------------------------------------------------------------------
// Inclusão de Biblioteca
#include <iostream> // Biblioteca Padrão de Entrada e Saída de Dados

// -----------------------------------------------------------------------------
// Entrada e Saída de Dados

/**
    A biblioteca <iostream> fornece variáveis predefinidas para entrada e saída de dados.

    std::cout
        - Usado para enviar dados ao console para exibição como texto.
        - "cout" significa "character output" (saída de caracteres).
        - Exemplo: std::cout << "Texto a ser impresso na tela";
        - O operador de inserção (<<) envia dados para o console.
        - Pode imprimir textos, números e combinar várias partes em uma mesma linha:
          std::cout << "A soma de " << 2 << " + " << 3 << " = " << 5;
        - Para quebrar linha, use:
          - std::endl: move o cursor para a próxima linha **e** limpa o buffer de saída.
          - '\n': move o cursor para a próxima linha, **mas não limpa** o buffer.

    std::cin
        - Usado para ler dados do teclado (entrada).
        - "cin" significa "character input" (entrada de caracteres).
        - O operador de extração (>>) captura o valor digitado e armazena em uma variável:
          std::cin >> x;

    Resumo dos operadores:
        - Operador de inserção (<<) — usado com std::cout para enviar dados para saída.
        - Operador de extração (>>) — usado com std::cin para receber dados da entrada.

    Resumo Geral:
        std::cout = console 
        std::cin = teclado
*/

// -----------------------------------------------------------------------------
// Declaração de Variáveis

// -----------------------------------------------------------------------------
// Declaração de Variáveis

/**
 * DECLARAÇÃO DE VARIÁVEIS EM C++
 *
 * Uma variável é uma forma de guardar informações na memória. 
 * Para isso, é necessário declarar o tipo do dado e um nome (rótulo) para a variável.
 *
 * Exemplo de declaração:
 *     int cenouras;
 *
 * Componentes da declaração:
 *     - int        → tipo do dado armazenado (número inteiro)
 *     - cenouras   → nome da variável (rótulo)
 *     - ;          → ponto e vírgula que marca o fim da instrução
 *
 * A declaração fornece:
 *     - O tipo da informação → determina o tamanho na memória
 *     - Um rótulo → que representa o endereço da memória onde a informação será armazenada
 *
 * -----------------------------------------------------------
 * PRINCIPAIS TIPOS DE DADOS EM C++:
 *
 * - int       → números inteiros (ex: 10, -5, 0)
 * - float     → números com ponto flutuante simples (ex: 3.14)
 * - double    → números com ponto flutuante de dupla precisão (ex: 3.141592)
 * - char      → um único caractere (ex: 'a', '1', '$')
 * - bool      → valores lógicos (true ou false)
 * - string    → cadeias de caracteres (ex: "Olá mundo") → requer: #include <string>
 * - void      → tipo especial que indica ausência de valor (usado principalmente em funções)
 * 
 * Modificadores:
 * - unsigned  → somente valores positivos (ex: unsigned int)
 * - short     → menor espaço para inteiros
 * - long      → maior espaço para inteiros (ex: long int, long long int)
 *
 * Exemplos de declarações:
 *     int idade = 22;
 *     float temperatura = 36.5;
 *     char letra = 'A';
 *     bool ativo = true;
 *     string nome = "João";   // precisa incluir: #include <string>
 */

// -----------------------------------------------------------------------------
// Inicialização de Variáveis

int x;      // Declaração sem inicialização (valor indefinido)
int b = 5;  // Copy-initialization
int c(6);   // Direct-initialization
int d{7};   // List-initialization (forma moderna e segura - C++11)
int e{};    // Value-initialization (zera a variável)

/**
 * Explicações das Formas de Inicialização
 *
 * int x;
 * - Apenas declara a variável, mas não define um valor inicial.
 * - O valor é indefinido se estiver em escopo local (pode conter "lixo").
 *
 * int b = 5;
 * - Copy-initialization: valor 5 é copiado para a variável.
 * - Pode permitir conversões implícitas, como double → int.
 *
 * int c(6);
 * - Direct-initialization: usa parênteses. Evita ambiguidades com classes.
 *
 * int d{7};
 * - List-initialization: usa chaves.
 * - Impede conversões inseguras. Ex: int x{3.14} → erro.
 *
 * int e{};
 * - Value-initialization: inicializa com zero (0).
 * - Útil para garantir que a variável comece com valor definido.
 */

// -----------------------------------------------------------------------------
// Operadores Aritméticos

/**
 * Operadores Aritméticos em C++
 *
 * +   Soma            → Exemplo: 3 + 2     = 5
 * -   Subtração       → Exemplo: 5 - 2     = 3
 * *   Multiplicação   → Exemplo: 4 * 3     = 12
 * /   Divisão         → Exemplo: 10 / 2    = 5 (em inteiros, resultado também é inteiro)
 * %   Módulo          → Exemplo: 10 % 3    = 1 (resto da divisão)
 * ++  Incremento      → Exemplo: x++       = x + 1
 * --  Decremento      → Exemplo: x--       = x - 1
 *
 * Observações:
 * - Divisão entre inteiros retorna um inteiro: 7 / 2 = 3
 * - Para obter resultado com ponto flutuante: 7.0 / 2 = 3.5
 */

// -----------------------------------------------------------------------------
// Bases Numéricas

/**
 * Bases Numéricas em C++
 *
 * Decimal      → Base 10 (normal)          → Ex: 42
 * Binária      → Base 2 (prefixo 0b)       → Ex: 0b101010     = 42
 * Octal        → Base 8 (prefixo 0)        → Ex: 052          = 42
 * Hexadecimal  → Base 16 (prefixo 0x)      → Ex: 0x2A         = 42
 *
 */

// -----------------------------------------------------------------------------
// Estrutura de Funções

/**
 * ESTRUTURA BÁSICA DE UMA FUNÇÃO EM C++
 *
 * Modelo geral:
 *     tipo_retorno nome_da_funcao(parâmetros) {
 *         // corpo da função
 *     }
 *
 * Partes da função:
 *     - tipo_retorno   → tipo de dado que será retornado pela função (int, void, float, etc.)
 *     - nome_da_funcao → nome escolhido para identificar a função
 *     - parâmetros     → entrada(s) que a função recebe (pode estar vazio)
 *     - corpo          → bloco de código entre chaves { ... } com as instruções da função
 */

// -----------------------------------------------------------------------------
// Parâmetros e Argumentos

/**
 * PARÂMETROS E ARGUMENTOS EM C++
 *
 * ► PARÂMETROS:
 *     - São **variáveis declaradas na definição da função**.
 *     - Representam os dados que a função espera receber para funcionar.
 *     - São definidos dentro dos parênteses da função.
 *
 * Exemplo:
 *     void saudacao(string nome) {  // 'nome' é o parâmetro
 *         cout << "Olá, " << nome << "!" << endl;
 *     }
 *
 * ► ARGUMENTOS:
 *     - São os **valores reais passados para a função** quando ela é chamada.
 *     - Devem estar na mesma ordem e tipo dos parâmetros.
 *
 * Exemplo de uso:
 *     saudacao("Maria");  // "Maria" é o argumento
 *
 * -----------------------------------------------------
 * ➤ Tipos de parâmetros em C++:
 * 
 * 1. POR VALOR (default):
 *    - Uma cópia do valor é passada.
 *    - Alterações dentro da função NÃO afetam a variável original.
 *    Exemplo:
 *        void dobrar(int x) {
 *            x = x * 2;  // não afeta o valor fora da função
 *        }
 *
 * 2. POR REFERÊNCIA:
 *    - Usa o operador `&` para passar a variável original.
 *    - Alterações dentro da função AFETAM a variável original.
 *    Exemplo:
 *        void dobrar(int &x) {
 *            x = x * 2;  // modifica o valor original
 *        }
 *
 * 3. COM VALOR PADRÃO:
 *    - Pode-se definir um valor padrão para um parâmetro.
 *    - Se o argumento não for passado, o valor padrão será usado.
 *    Exemplo:
 *        void exibirMensagem(string msg = "Olá!") {
 *            cout << msg << endl;
 *        }
 */

/**
 * DECLARAÇÃO E DEFINIÇÃO DE FUNÇÃO EM C++
 * 
 * ▸ Declaração (ou protótipo):
 *   - Diz ao compilador que a função existe, qual seu nome, tipo de retorno e parâmetros.
 *   - Normalmente colocada no topo do código ou em arquivos de cabeçalho (.h)
 *   - Termina com ponto e vírgula.
 *
 * Exemplo:
 *     int somar(int a, int b);  // Declaração
 *
 * ▸ Definição:
 *   - Onde a lógica da função é escrita.
 *   - Pode vir após a função `main` ou em outro arquivo fonte (.cpp)
 *
 * Exemplo:
 *     int somar(int a, int b) {
 *         return a + b;
 *     }
 *
 * ▸ Estrutura geral:
 *     tipo_retorno nome_da_função(parâmetros) {
 *         // corpo da função
 *     }
 *
 * ▸ Detalhes:
 *   - tipo_retorno: tipo de dado que a função retorna (int, void, float, etc.)
 *   - nome_da_função: identificador da função
 *   - parâmetros: dados que a função recebe (opcional)
 *   - corpo: bloco de código que executa a ação da função
 *
 * ▸ Exemplo completo:
 * 
 *     #include <iostream>
 *     using namespace std;
 * 
 *     // Declaração
 *     void mostrarMensagem(string nome);
 * 
 *     int main() {
 *         mostrarMensagem("Ana");
 *         return 0;
 *     }
 * 
 *     // Definição
 *     void mostrarMensagem(string nome) {
 *         cout << "Olá, " << nome << "!" << endl;
 *     }
 *
 * Dica:
 * - Use `void` como tipo de retorno se a função não retornar nada.
 */
 
 /**
 * PRÉ-PROCESSADOR EM C++
 *
 * O pré-processador é uma etapa **antes da compilação**.
 * Ele processa **diretivas especiais** iniciadas com `#`, que controlam a forma como o código será compilado.
 *
 * -------------------------------------------------------------------------
 * #include
 *   - Insere o conteúdo de outro arquivo no local da diretiva.
 *   - Usado para incluir bibliotecas ou arquivos de cabeçalho.
 *     Exemplos:
 *         #include <iostream>     // biblioteca padrão
 *         #include "meuarquivo.h" // arquivo criado pelo usuário
 *
 * -------------------------------------------------------------------------
 * #define
 *   - Define **constantes simbólicas** ou **macros** (substituições diretas no código).
 *   - Sintaxe:
 *         #define PI 3.14159
 *         #define quadrado(x) ((x)*(x))
 *   - NÃO usa ponto e vírgula!
 *
 * -------------------------------------------------------------------------
 * #undef
 *   - Cancela uma definição feita com #define.
 *     Exemplo:
 *         #undef PI
 *
 * -------------------------------------------------------------------------
 * #ifdef / #ifndef / #endif
 *   - Verifica se um símbolo (macro) foi definido.
 *     Útil para proteger arquivos contra múltiplas inclusões.
 *
 *     #ifdef DEBUG
 *         std::cout << "Modo debug ativado\n";
 *     #endif
 *
 *     #ifndef PI
 *         #define PI 3.14
 *     #endif
 *
 * -------------------------------------------------------------------------
 * #if / #elif / #else / #endif
 *   - Permite **compilar condicionalmente** partes do código.
 *     Exemplo:
 *         #define VERSAO 2
 *
 *         #if VERSAO == 1
 *             std::cout << "Versão 1\n";
 *         #elif VERSAO == 2
 *             std::cout << "Versão 2\n";
 *         #else
 *             std::cout << "Versão desconhecida\n";
 *         #endif
 *
 * -------------------------------------------------------------------------
 * #pragma
 *   - Direção especial ao compilador (específica de cada compilador).
 *     Exemplo comum:
 *         #pragma once
 *         → Garante que o arquivo de cabeçalho seja incluído apenas uma vez.
 *
 * -------------------------------------------------------------------------
 * RESUMO DAS DIRETIVAS MAIS USADAS:
 *
 *  #include    → inclui arquivos/bibliotecas
 *  #define     → define constantes ou macros
 *  #undef      → desfaz definição de macro
 *  #if         → compila se a condição for verdadeira
 *  #ifdef      → compila se a macro estiver definida
 *  #ifndef     → compila se a macro NÃO estiver definida
 *  #else       → caminho alternativo no #if
 *  #elif       → else if para #if
 *  #endif      → fim de bloco condicional
 *  #pragma     → instruções específicas ao compilador
 *
 */

/**
 * HEADER FILES EM C++
 *
 * Um *header file* (arquivo de cabeçalho) geralmente contém declarações de funções,
 * classes, constantes e macros que podem ser reutilizados em vários arquivos do projeto.
 * Extensão comum: `.h` ou `.hpp`.
 *
 * Exemplo de um arquivo chamado "util.h":
 *     // util.h
 *     void saudacao();  // apenas a declaração da função
 *
 * Para usar esse arquivo em um código-fonte principal:
 *     #include "util.h"
 *
 * ➤ Arquivos de cabeçalho **não devem conter definições completas de funções**,
 *    apenas declarações. As implementações geralmente ficam em arquivos `.cpp`.
 *
 * Exemplo:
 *     // util.cpp
 *     #include <iostream>
 *     void saudacao() {
 *         std::cout << "Olá!" << std::endl;
 *     }
 */

/**
 * HEADER GUARDS evitam que um mesmo header file seja incluído mais de uma vez,
 * o que causaria erros de redefinição durante a compilação.
 *
 * Forma tradicional:
 *     #ifndef NOME_DO_HEADER
 *     #define NOME_DO_HEADER
 *     // conteúdo do header
 *     #endif
 *
 * Exemplo em util.h:
 *     #ifndef UTIL_H
 *     #define UTIL_H
 *     
 *     void saudacao();
 *     
 *     #endif
 *
 * ➤ Significado:
 *     - #ifndef → "se não estiver definido"
 *     - #define → define o identificador
 *     - #endif  → fecha o bloco condicional
 *
 * Alternativa moderna (C++20):
 *     #pragma once
 *     - Mais simples e com suporte amplo pelos compiladores modernos
 *     - Coloca-se no topo do header:
 *         #pragma once
 *         void saudacao();
 */
 
 /**
 * NAMESPACES EM C++
 *
 * ▸ Um namespace (espaço de nomes) é usado para **organizar o código** e **evitar conflitos de nomes**.
 * ▸ Permite agrupar funções, variáveis, classes, etc., sob um nome específico.
 *
 * Exemplo de problema:
 *     Duas bibliotecas diferentes podem ter uma função chamada `print()`. 
 *     Sem namespace, isso causaria conflito.
 *
 * --------------------------------------------------------------------------
 * SINTAXE:
 *
 * namespace nome_do_namespace {
 *     // declarações
 * }
 *
 * Exemplo:
 *     namespace MeuEspaco {
 *         int valor = 10;
 *         void saudacao() {
 *             std::cout << "Olá do MeuEspaco!" << std::endl;
 *         }
 *     }
 *
 * Acesso:
 *     - Usando o operador de resolução de escopo `::`:
 *           MeuEspaco::saudacao();
 *           std::cout << MeuEspaco::valor;
 *
 *     - Ou usando `using`:
 *           using namespace MeuEspaco;
 *           saudacao();  // Não precisa prefixar
 *
 * --------------------------------------------------------------------------
 * std → É o namespace padrão da biblioteca padrão do C++:
 *     - std::cout, std::cin, std::endl, std::string, etc.
 *
 *     Exemplo:
 *         std::cout << "Olá mundo!" << std::endl;
 *
 *     - Ou: using namespace std;  → evita escrever std:: toda hora (mas pode causar conflitos em projetos grandes)
 *
 * --------------------------------------------------------------------------
 * NAMESPACES ANINHADOS:
 *     namespace A {
 *         namespace B {
 *             int x = 5;
 *         }
 *     }
 *     A::B::x;  // Acesso à variável x
 *
 * --------------------------------------------------------------------------
 * NAMESPACES ANÔNIMOS:
 *     - Criam um escopo limitado ao arquivo atual.
 *     - Úteis para variáveis/funções internas (evitam conflito com outros arquivos).
 *     - Sintaxe:
 *         namespace {
 *             int segredo = 42;
 *         }
 */

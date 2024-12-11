/*
    Até onde foi visto no curso até o momento, existiam apenas as variaveis, sendo
    elas valores que podem variar conforma a execução do programa. Porém foi 
    mostrado agora as constantes, valores que não podem ser mudados conforme a
    execução do programa.
    ex:
        #define PI 3.14159

    Aprendemos também sobre o uso de ifndef, que:

    #ifndef PI               "se não foi definido"
        #define PI 3.14159      "defina"
    #endif                   "fecha o ato de definir"

    ou seja, o ifndef serve para criar uma constante caso ela não exista.

    Também temos o ifdef que é parecido com o ifndef, mas tem uma função diferente

    #ifdef PI
        printf("%f", PI);
    #endif

    diferentemente do ifndef, o ifdef ele apenas executa uma ação quando a
    constante já existir.

    =================================================================
    PARA LINUX:

    para compilar um programa C pelo terminal, pode ser usado o seguinte comando:

    gcc nome_arquivo 

    isso vai criar um arquivo a.out, que é um executavel com nome padrão do SO.
    Mas, podemos usar um outro comando 

    gcc nome_arquivo -o nome_executavel.tanto_faz

    definindo um nome para o executavel e uma extensão.

    para executarmos o arquivo executavel basta usar 

    ./nome_executavel

*/
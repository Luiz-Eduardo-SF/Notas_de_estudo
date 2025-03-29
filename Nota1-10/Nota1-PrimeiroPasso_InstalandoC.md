# Tutorial de Instalação da Linguagem C e Visual Studio Code com MSYS2

## Passo 1: Instalar o MSYS2
1. Acesse o site oficial do MSYS2: [https://www.msys2.org/](https://www.msys2.org/).
2. Baixe o instalador adequado para o seu sistema operacional.
3. Execute o instalador e siga as instruções na tela.
4. Após a instalação, abra o terminal do MSYS2.

## Passo 2: Atualizar os Pacotes do MSYS2
1. No terminal do MSYS2, execute os seguintes comandos para atualizar os pacotes:
    ```bash
    pacman -Syu
    pacman -Su
    ```

## Passo 3: Instalar o GCC (Compilador C)
1. No terminal do MSYS2, instale o GCC com o comando:
    ```bash
    pacman -S mingw-w64-ucrt-x86_64-gcc
    ```
2. Verifique a instalação do GCC:
    ```bash
    gcc --version
    ```

## Passo 4: Editando o Caminho no Computador
1. Abra o Painel de Controle do seu computador.
2. Clique em "Sistema" e em "Configurações avançadas do sistema".
3. Clique em "Variáveis de ambiente".
4. Clique em "Variáveis de sistema" -> "PATH" -> "Editar" -> "Novo".
5. Adicione o caminho do MSYS2 (geralmente C:\msys64\ucrt64\bin)


## Passo 5: Instalar o Visual Studio Code
1. Acesse o site oficial do Visual Studio Code: [https://code.visualstudio.com/](https://code.visualstudio.com/).
2. Baixe e instale o Visual Studio Code.
3. Durante a instalação, marque a opção para adicionar o VS Code ao PATH.

### Configurar o VSCode
1. Abra o VSCode e instale a extensão **C/C++** da Microsoft.
2. Configure o VSCode para usar o GCC instalado:
    - Crie um arquivo `tasks.json` no diretório `.vscode` do seu projeto com o seguinte conteúdo:
        ```json
        {
            "version": "2.0.0",
            "tasks": [
                {
                    "label": "Compilar C",
                    "type": "shell",
                    "command": "gcc",
                    "args": [
                        "-g",
                        "${file}",
                        "-o",
                        "${fileDirname}/${fileBasenameNoExtension}"
                    ],
                    "group": {
                        "kind": "build",
                        "isDefault": true
                    },
                    "problemMatcher": ["$gcc"]
                }
            ]
        }
        ```
    - Crie um arquivo `launch.json` no diretório `.vscode` com o seguinte conteúdo:
        ```json
        {
            "version": "0.2.0",
            "configurations": [
                {
                    "name": "Executar C",
                    "type": "cppdbg",
                    "request": "launch",
                    "program": "${fileDirname}/${fileBasenameNoExtension}",
                    "args": [],
                    "stopAtEntry": false,
                    "cwd": "${workspaceFolder}",
                    "environment": [],
                    "externalConsole": true,
                    "MIMode": "gdb",
                    "miDebuggerPath": "C:/msys64/ucrt64/bin/gdb.exe",
                    "setupCommands": [
                        {
                            "description": "Habilitar impressão de formato para gdb",
                            "text": "-enable-pretty-printing",
                            "ignoreFailures": true
                        }
                    ]
                }
            ]
        }
        ```

Agora você pode compilar e executar seus programas C diretamente no VSCode usando o MSYS2.
##
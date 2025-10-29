# vscodedemo

1.学习vscode+git开发调试方法，git要安装MingW64工具包，才能使用GNU相关工具进行编译调试；

2.终端可以选择powershell/bash等不同的工具，命令也有一定差别；

1：g++ -o main.exe main.cpp primer.cpp  在终端直接写编译指令；
2.基于task脚本文件（终端->配置默认生成任务，选择g++任务，生成默认task.json）编译代码，默认的配置文件只能支持单个文件编译，如果要编译多个文件，需要增加参数，如下面的"prime.cpp"
"args": [
                "-fdiagnostics-color=always",
                "-g",
                "${file}","prime.cpp",
    "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],

3.如果要调试，还要增加lanuch.json(运行->添加配置)；

4.只有左边选择cpp文件，右上方才有调试按钮，如果选择其他文件，只有运行按钮；

5.g++ -o main.exe ../src/main.cpp ../src/prime.cpp -I../include，在build目录下

6.cmake -G "MinGW Makefiles" ..    在build目录下,执行前需要清空build文件夹，根据CMakeLists.txt文件生成Makefile，windows下必须显示指定为MinGW Makefiles格式

7.mingw32-make   在build目录下生成可执行文件

8.7.mingw32-make   clean   清空build目录下文件，cmake自动生成就带有clean

9.原始tasks.json

{

    "version": "2.0.0",

    "tasks": [

    {

    "type": "cppbuild",

    "label": "C/C++: g++.exe 生成活动文件",

    "command": "C:\\Program Files\\mingw64\\bin\\g++.exe",

    "args": [

    "-fdiagnostics-color=always",

    "-g",

    "${file}","prime.cpp",

    "-o",

    "${fileDirname}\\${fileBasenameNoExtension}.exe"

    ],

    "options": {

    "cwd": "${fileDirname}"

    },

    "problemMatcher": [

    "$gcc"

    ],

    "group": {

    "kind": "build",

    "isDefault": true

    },

    "detail": "编译器: C:\\Program Files\\mingw64\\bin\\g++.exe"

    }

    ]

}

10.

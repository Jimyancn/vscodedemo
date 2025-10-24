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
3.如果要调试，还要增加lanuch.json(运行->添加配置)
4.只有左边选择cpp文件，右上方才有调试按钮，如果选择其他文件，只有运行按钮；

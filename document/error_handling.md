# error hanndling
- **今回起こった error 各種の対応**
- *Mac VScode で C/C++*
## compile error
    inker command failed with exit code 1
- *Mac VScode で C/C++ ( 拡張機能 : code runner)*
  - **code runner では run code したときの動作が言語ごとにしっかり決まっている**
### <u>C の場合の default</u>
    cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt
- 目的のdirに移動　→　runcode file をコンパイルそのfile名の実行fileを生成　→　プログラム実行
  - **複数ファイルコンパイルしてくれるように書き換え**
### <u>code runner　->　Extension settings</u>
    "c": "cd $dir && gcc *.c -o $fileNameWithoutExt && $dir$fileNameWithoutExt",

    "cpp": "cd $dir && g++ *.cpp -o $fileNameWithoutExt && $dir$fileNameWithoutExt",
- **gcc $fileName**　->　`gcc *.c`
- **g++ $fileName**　->　`g++ *.cpp`
  - *上記のように書き換えて目的フォルダ内の全ての.cpp(もしくはc)のfileをコンパイルしてくれるようにする*

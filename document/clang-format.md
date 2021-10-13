# Clang format の設定
### 1, brew install
    brew install clang-format
### 2, clang-formatのPathをチェック
    clang-format --version
### 3, setting.json 更新
    # path の場所確認
    which clang-format

    # path を setting.json に記述
    /usr/local/bin/clang-format
### 4, .clang-formatの設定
    clang-format -dump-config -style=Google > .clang-format
1. project ルートへ移動(directory)
2. 上記のコマンドを terminal で実行
3. 設定項目を全て吐き出してくれる（.clang-fomat を作成してくれる）
4. 好みに合わせて設定を書き換え

### 参考site
> https://ateruimashin.com/diary/2020/05/vscode-clang-format/

> https://yasuharu519.hatenablog.com/entry/2015/12/13/210825

### 5. 変更点
    # アクセス修飾子の前に空の行を配置する場合を定義
        EmptyLineBeforeAccessModifier: Never

    # アクセス修飾子の余分なインデントまたはアウトデント
        AccessModifierOffset: -4

    # 短い関数を1行で表示するかどうかのオプション
        AllowShortFunctionsOnASingleLine: Inline

    # コードの一部でフォーマットを無効にする
        // clang-format off
        ここに記述される code が format が適用されなくなる
        // clang-format on

    # これも同じく無効
        /* clang-format off */
        code format 無効になる
        /* clang-format on */


- **参考site**
> https://clang.llvm.org/docs/ClangFormatStyleOptions.html

{ pkgs ? import <nixpkgs> {} }:

pkgs.mkShell {
  buildInputs = [
    pkgs.clang           # Компилятор clang
    pkgs.ccls            # Языковой сервер для C/C++
    pkgs.gdb             # Отладчик
    pkgs.gcc             # Для gcov
    pkgs.bash            # Для обеспечения наличия /bin/sh
  ];

  shellHook = ''
    cat ascii-art.txt
  '';
}
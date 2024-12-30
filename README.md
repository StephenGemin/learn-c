learning C

To run from terminal
```zsh
PROJECT=$(echo $(pwd))
PSRC="$PROJECT/src"
PBUILD="$PROJECT/build"
MAIN="SOME_FILE"  # no ext; set to desired .c file to run
gcc -fdiagnostics-color=always -g "$PSRC/$MAIN.c" "$PSRC/project_paths.c" -o "$PBUILD/$MAIN" -I"$PSRC" && $PBUILD/$MAIN
```

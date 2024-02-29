#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <folder_name>"
    exit 1
fi

new_folder="ex$1"

if [ -d "$new_folder" ]; then
    echo "La cartella $new_folder esiste già."
else
    mkdir "$new_folder"
    echo "La cartella $new_folder è stata creata con successo."
fi


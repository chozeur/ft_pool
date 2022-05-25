#!bin/bash
find -type f -name "*\.sh" -print | cut -d '.' -f 2 | tr -d '/'

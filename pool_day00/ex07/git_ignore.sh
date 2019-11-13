#!/bin/sh
cd ..
echo ".*
*.[oa]
*~" > .gitignore
git ls-files -i -o --exclude-standard

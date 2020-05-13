#! /bin/sh
rm -rf $2
git clone $1 $2
cd $2
rm -rf .git .github Documentation Projects Drivers/CMSIS/docs Middlewares/Third_Party Utilities/Media CONTRIBUTING.md CODE_OF_CONDUCT.md README.md
find . -name _htmresc -exec rm -rf {} \;
cd ..

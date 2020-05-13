#! /bin/sh
rm -rf $2
git clone $1 $2
cd $2
rm -rf .git .github Documentation Projects Middlewares/Third_Party Utilities/Media Utilities/PC_Software CONTRIBUTING.md CODE_OF_CONDUCT.md README.md
find . -name _htmresc -exec rm -rf {} \;
find . -name docs -exec rm -rf {} \;
find . -name Documentation -exec rm -rf {} \;
find . -name "*.pdf" -exec rm -rf {} \;
find . -name "*.rtf" -exec rm -rf {} \;
cd ..

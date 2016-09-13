
function block_for_change {
  inotifywait -r -e modify,move,create,delete --exclude .*\.\(swp\|gcov\|o\|swx\) .
}

make test
while block_for_change; do
    echo ----------------------------------------------
    make test
done

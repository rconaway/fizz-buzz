RED='\033[1;31m'
GREEN='\033[1;32m'
NC='\033[0m' # No Color

function block_for_change {
  inotifywait -r -e modify,move,create,delete --exclude .*\.\(swp\|gcov\|o\|swx\) . >/dev/null 2>&1
}

function do_it {
  echo ----------------------------------------------
  make test
  if [ $? = "0" ]; then
    echo -e "${GREEN}SUCCESS${NC}"
  else
    echo -e "${RED}FAILURE${NC}"
  fi
}

do_it
while block_for_change; do
  do_it
done

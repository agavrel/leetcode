while inotifywait -e close_write solution.cpp; do \
g++ solution.cpp test.cpp \
&& ./a.out && rm a.out \
; done

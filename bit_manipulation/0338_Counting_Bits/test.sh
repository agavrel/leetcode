while inotifywait -e close_write solution.cpp; do \
g++ -std=c++1z solution.cpp test.cpp \
&& ./a.out && rm a.out \
; done

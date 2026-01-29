#include <stdio.h>

int main(void) {
    char self[] = "#include <stdio.h>\n\nint main(void) {\n    char self[] = \"@\";\n    const int len = sizeof(self) - 1;\n\n    for(int i = 0; i < len; ++i) {\n        if(self[i] == 64) {\n            for(int j = 0; j < len; ++j) {\n                switch(self[j]) {\n                    case '\\n': printf(\"%s\", \"\\\\n\");   break;\n                    case '\\\\': printf(\"%s\", \"\\\\\\\\\");  break;\n                    case '\"':  printf(\"%s\", \"\\\\\\\"\");  break;\n                    default:   printf(\"%c\", self[j]); break;\n                }\n            }\n        } else {\n            printf(\"%c\", self[i]);\n        }\n    }\n    return 0;\n}";
    const int len = sizeof(self) - 1;

    for(int i = 0; i < len; ++i) {
        if(self[i] == 64) {
            for(int j = 0; j < len; ++j) {
                switch(self[j]) {
                    case '\n': printf("%s", "\\n");   break;
                    case '\\': printf("%s", "\\\\");  break;
                    case '"':  printf("%s", "\\\"");  break;
                    default:   printf("%c", self[j]); break;
                }
            }
        } else {
            printf("%c", self[i]);
        }
    }
    return 0;
}
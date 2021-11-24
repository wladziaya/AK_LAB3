#include <stdio.h>
#include <getopt.h>


int main (int argc, char *argv[]){

    const char* short_options = "hve::s:";

    const struct option long_options[] = {
            {"help",no_argument,NULL,'h'},
            {"echo",optional_argument,NULL,'e'},
            {"version", no_argument, NULL, 'v'},
            {"save",required_argument,NULL,'s'},
            {NULL,0,NULL,0}
    };
    
    bool h_option_is_allowed = true;
    bool e_option_is_allowed = true;
    bool v_option_is_allowed = true;
    bool s_option_is_allowed = true;

    int rez;
    int option_index = -1;

    while ((rez=getopt_long(argc, argv, short_options, long_options, &option_index))!=-1) {
        switch(rez){
            case 'h':
                if (h_option_is_allowed) {
                    printf("-h or --help => show very important commands list \n-e or --echo => to echo useless text\n-v or --version => show the version of your life\n-s or --save => save smthn important for you but unimportant for me))\n");
                    if (option_index < 0)
                        printf("Short help option\n");
                    else
                        printf("Long help option\n");
                h_option_is_allowed = false;
                }
                break;

            case 'e':
                if (e_option_is_allowed) {
                    if (optarg!=NULL)
                        printf("You echoed this: %s\n", optarg);
                    else
                        printf("There is nothing to echo :(\n");

                    e_option_is_allowed = false;
                }
                break;

            case 'v':
                if (v_option_is_allowed) {
                    printf("It does`n matter who you are, your version need to be apdated\n");

                    v_option_is_allowed = false;
                }
                break;

            case 's':
                if (s_option_is_allowed) {
                    printf("Saving data to = %s\n", optarg);

                    s_option_is_allowed = false;
                }
                break;

            case '?': default:
                printf("Error, think first man and go to help!\n");
                break;

        };
        option_index = -1;
    };
    return 0;
};
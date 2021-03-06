/*
** EPITECH PROJECT, 2019
** script.h
** File description:
** prototype of the function in the script/
*/

#ifndef SCRIPT_H_
    #define SCRIPT_H_
    //Error Handling
    int len_nb(int nb);
    int check_tower(char *buffer);
    int check_tower_param(char *buffer, int *i, int *n);
    int check_aircraft(char *buffer);
    int check_aircraft_param(char *buffer, int *i, int *n);
    int aircraft_after_tower(char *buffer, int *atot);
    int check_line(char *buffer, int *atot);
    int error_script(char *filepath);

    //Load
    char *get_next_tower(FILE *script);
    void init_tower(tower_t *new, char *tower_info);
    int add_tower(tower_t **tower, char *tower_info);
    int load_tower(tower_t **tower, char *filepath);
    int get_dt(char *buffer);
    void init_aircraft(aircraft_t *new, char *aircraft_info);
    int add_aircraft(aircraft_t **plane, char *aircraft_info, int dt,
    int *dt_current);
    int load_aircraft(aircraft_t **plane, char *filepath, int dt,
    int *dt_current);
    int load(aircraft_t **plane, tower_t **tower,
    int *dt_current, char *filepath);

    //Generator:
    char *nb_to_str(int nb, char *res, bool re_init);
    char *re_init_buffer(char *buffer, int len);
    int random_range(int min, int max);
    void generate_aircraft(FILE *script, generator_t *generator);
    void generate_tower(FILE *script, int min, int max);
#endif
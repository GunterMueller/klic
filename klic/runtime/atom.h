#include <klic/atomstuffs.h>
#define atom_call 0L+ATOMNUMBERBASE
#define atom_element 1L+ATOMNUMBERBASE
#define atom_size 2L+ATOMNUMBERBASE
#define atom_set__element 3L+ATOMNUMBERBASE
#define atom_split 4L+ATOMNUMBERBASE
#define atom_join 5L+ATOMNUMBERBASE
#define atom_vector 6L+ATOMNUMBERBASE
#define atom_string 7L+ATOMNUMBERBASE
#define atom_element__size 8L+ATOMNUMBERBASE
#define atom_search__character 9L+ATOMNUMBERBASE
#define atom_less__than 10L+ATOMNUMBERBASE
#define atom_not__less__than 11L+ATOMNUMBERBASE
#define atom_estring 12L+ATOMNUMBERBASE
#define atom_print 13L+ATOMNUMBERBASE
#define atom_int 14L+ATOMNUMBERBASE
#define atom_sin 15L+ATOMNUMBERBASE
#define atom_cos 16L+ATOMNUMBERBASE
#define atom_tan 17L+ATOMNUMBERBASE
#define atom_asin 18L+ATOMNUMBERBASE
#define atom_acos 19L+ATOMNUMBERBASE
#define atom_atan 20L+ATOMNUMBERBASE
#define atom_sinh 21L+ATOMNUMBERBASE
#define atom_cosh 22L+ATOMNUMBERBASE
#define atom_tanh 23L+ATOMNUMBERBASE
#define atom_asinh 24L+ATOMNUMBERBASE
#define atom_acosh 25L+ATOMNUMBERBASE
#define atom_atanh 26L+ATOMNUMBERBASE
#define atom_exp 27L+ATOMNUMBERBASE
#define atom_log 28L+ATOMNUMBERBASE
#define atom_sqrt 29L+ATOMNUMBERBASE
#define atom_ceil 30L+ATOMNUMBERBASE
#define atom_floor 31L+ATOMNUMBERBASE
#define atom_round 32L+ATOMNUMBERBASE
#define atom_plus 33L+ATOMNUMBERBASE
#define atom_minus 34L+ATOMNUMBERBASE
#define atom_add 35L+ATOMNUMBERBASE
#define atom_subtract 36L+ATOMNUMBERBASE
#define atom_multiply 37L+ATOMNUMBERBASE
#define atom_divide 38L+ATOMNUMBERBASE
#define atom_pow 39L+ATOMNUMBERBASE
#define atom_not__greater__than 40L+ATOMNUMBERBASE
#define atom_greater__than 41L+ATOMNUMBERBASE
#define atom_equal 42L+ATOMNUMBERBASE
#define atom_not__equal 43L+ATOMNUMBERBASE
#define atom_float 44L+ATOMNUMBERBASE
#define atom_module 45L+ATOMNUMBERBASE
#define atom_name 46L+ATOMNUMBERBASE
#define atom_arity 47L+ATOMNUMBERBASE
#define atom_apply 48L+ATOMNUMBERBASE
#define atom_predicate 49L+ATOMNUMBERBASE
#define atom_defined 50L+ATOMNUMBERBASE
#define atom_reduce 51L+ATOMNUMBERBASE
#define atom_step 52L+ATOMNUMBERBASE
#define atom_arg 53L+ATOMNUMBERBASE
#define atom_setarg 54L+ATOMNUMBERBASE
#define atom_id 55L+ATOMNUMBERBASE
#define atom_set__predicate 56L+ATOMNUMBERBASE
#define atom_normal 57L+ATOMNUMBERBASE
#define atom_get__atom 58L+ATOMNUMBERBASE
#define atom_get__atom__name 59L+ATOMNUMBERBASE
#define atom_intern 60L+ATOMNUMBERBASE
#define atom_power 61L+ATOMNUMBERBASE
#define atom_eof 62L+ATOMNUMBERBASE
#define atom_end__of__file 63L+ATOMNUMBERBASE
#define atom__5B 64L+ATOMNUMBERBASE
#define atom__7B 65L+ATOMNUMBERBASE
#define atom__20_28 66L+ATOMNUMBERBASE
#define atom__28 67L+ATOMNUMBERBASE
#define atom__2D 68L+ATOMNUMBERBASE
#define atom__5D 69L+ATOMNUMBERBASE
#define atom_never 70L+ATOMNUMBERBASE
#define atom__7D 71L+ATOMNUMBERBASE
#define atom__29 72L+ATOMNUMBERBASE
#define atom__7C 73L+ATOMNUMBERBASE
#define atom__2C 74L+ATOMNUMBERBASE
#define atom_fx 75L+ATOMNUMBERBASE
#define atom_fy 76L+ATOMNUMBERBASE
#define atom_xfx 77L+ATOMNUMBERBASE
#define atom_xfy 78L+ATOMNUMBERBASE
#define atom_yfx 79L+ATOMNUMBERBASE
#define atom_xf 80L+ATOMNUMBERBASE
#define atom_yf 81L+ATOMNUMBERBASE
#define atom_none 82L+ATOMNUMBERBASE
#define atom_yes 83L+ATOMNUMBERBASE
#define atom_no 84L+ATOMNUMBERBASE
#define atom_abnormal 85L+ATOMNUMBERBASE
#define atom_variable 86L+ATOMNUMBERBASE
#define atom_error 87L+ATOMNUMBERBASE
#define atom_number 88L+ATOMNUMBERBASE
#define atom_integer 89L+ATOMNUMBERBASE
#define atom_floating__point 90L+ATOMNUMBERBASE
#define atom_prefix 91L+ATOMNUMBERBASE
#define atom_infix 92L+ATOMNUMBERBASE
#define atom_ops 93L+ATOMNUMBERBASE
#define atom_postfix 94L+ATOMNUMBERBASE
#define atom_op 95L+ATOMNUMBERBASE
#define atom_atom 96L+ATOMNUMBERBASE
#define atom_list 97L+ATOMNUMBERBASE
#define atom_functor 98L+ATOMNUMBERBASE
#define atom__21 99L+ATOMNUMBERBASE
#define atom__3B 100L+ATOMNUMBERBASE
#define atom_void 101L+ATOMNUMBERBASE
#define atom_escaped__newline 102L+ATOMNUMBERBASE
#define atom_hexadecimal 103L+ATOMNUMBERBASE
#define atom_getc 104L+ATOMNUMBERBASE
#define atom_vtab 105L+ATOMNUMBERBASE
#define atom__3D 106L+ATOMNUMBERBASE
#define atom_var 107L+ATOMNUMBERBASE
#define atom_octal 108L+ATOMNUMBERBASE
#define atom_ungetc 109L+ATOMNUMBERBASE
#define atom_stderr 110L+ATOMNUMBERBASE
#define atom_linecount 111L+ATOMNUMBERBASE
#define atom_putc 112L+ATOMNUMBERBASE
#define atom_fwrite 113L+ATOMNUMBERBASE
#define atom_fflush 114L+ATOMNUMBERBASE
#define atom_s 115L+ATOMNUMBERBASE
#define atom_open 116L+ATOMNUMBERBASE
#define atom_unknown 117L+ATOMNUMBERBASE
#define atom_nl 118L+ATOMNUMBERBASE
#define atom__26 119L+ATOMNUMBERBASE
#define atom__3F_2D 120L+ATOMNUMBERBASE
#define atom_implicit 121L+ATOMNUMBERBASE
#define atom_local__implicit 122L+ATOMNUMBERBASE
#define atom_mode 123L+ATOMNUMBERBASE
#define atom_nospy 124L+ATOMNUMBERBASE
#define atom_public 125L+ATOMNUMBERBASE
#define atom_spy 126L+ATOMNUMBERBASE
#define atom_with__macro 127L+ATOMNUMBERBASE
#define atom__7E 128L+ATOMNUMBERBASE
#define atom__24_7E 129L+ATOMNUMBERBASE
#define atom__5C_2B 130L+ATOMNUMBERBASE
#define atom__23 131L+ATOMNUMBERBASE
#define atom__24_24_3A_3D 132L+ATOMNUMBERBASE
#define atom__24_24_3C 133L+ATOMNUMBERBASE
#define atom__24_24_3C_3D 134L+ATOMNUMBERBASE
#define atom__24_24_3D_3A_3D 135L+ATOMNUMBERBASE
#define atom__24_24_3D_3C 136L+ATOMNUMBERBASE
#define atom__24_24_3D_5C_3D 137L+ATOMNUMBERBASE
#define atom__24_24_3E 138L+ATOMNUMBERBASE
#define atom__24_24_3E_3D 139L+ATOMNUMBERBASE
#define atom__24_3A_3D 140L+ATOMNUMBERBASE
#define atom__24_3C 141L+ATOMNUMBERBASE
#define atom__24_3C_3D 142L+ATOMNUMBERBASE
#define atom__24_3D_3A_3D 143L+ATOMNUMBERBASE
#define atom__24_3D_3C 144L+ATOMNUMBERBASE
#define atom__24_3D_5C_3D 145L+ATOMNUMBERBASE
#define atom__24_3E 146L+ATOMNUMBERBASE
#define atom__24_3E_3D 147L+ATOMNUMBERBASE
#define atom__26_3C 148L+ATOMNUMBERBASE
#define atom__26_3C_3D 149L+ATOMNUMBERBASE
#define atom__26_3D_3C 150L+ATOMNUMBERBASE
#define atom__26_3E 151L+ATOMNUMBERBASE
#define atom__26_3E_3D 152L+ATOMNUMBERBASE
#define atom__24_2B_3D 153L+ATOMNUMBERBASE
#define atom__24_2D_3D 154L+ATOMNUMBERBASE
#define atom__24_2A_3D 155L+ATOMNUMBERBASE
#define atom__24_2F_3D 156L+ATOMNUMBERBASE
#define atom__2A 157L+ATOMNUMBERBASE
#define atom__2A_2A 158L+ATOMNUMBERBASE
#define atom__2B 159L+ATOMNUMBERBASE
#define atom__2D_2D_3E 160L+ATOMNUMBERBASE
#define atom__2D_3E 161L+ATOMNUMBERBASE
#define atom__2F 162L+ATOMNUMBERBASE
#define atom__2F_2F 163L+ATOMNUMBERBASE
#define atom__2F_5C 164L+ATOMNUMBERBASE
#define atom__3A 165L+ATOMNUMBERBASE
#define atom__3A_2D 166L+ATOMNUMBERBASE
#define atom__3A_3A 167L+ATOMNUMBERBASE
#define atom__3A_3D 168L+ATOMNUMBERBASE
#define atom__3C 169L+ATOMNUMBERBASE
#define atom__3C_3C 170L+ATOMNUMBERBASE
#define atom__3C_3C_3D 171L+ATOMNUMBERBASE
#define atom__3C_3D 172L+ATOMNUMBERBASE
#define atom__3C_3D_3D 173L+ATOMNUMBERBASE
#define atom__3D_2E_2E 174L+ATOMNUMBERBASE
#define atom__3D_3A_3D 175L+ATOMNUMBERBASE
#define atom__3D_3C 176L+ATOMNUMBERBASE
#define atom__3D_3D 177L+ATOMNUMBERBASE
#define atom__3D_3E 178L+ATOMNUMBERBASE
#define atom__3D_5C_3D 179L+ATOMNUMBERBASE
#define atom__3E 180L+ATOMNUMBERBASE
#define atom__3E_3D 181L+ATOMNUMBERBASE
#define atom__2B_3D 182L+ATOMNUMBERBASE
#define atom__2D_3D 183L+ATOMNUMBERBASE
#define atom__2A_3D 184L+ATOMNUMBERBASE
#define atom__2F_3D 185L+ATOMNUMBERBASE
#define atom__3E_3E 186L+ATOMNUMBERBASE
#define atom__40 187L+ATOMNUMBERBASE
#define atom__40_3C 188L+ATOMNUMBERBASE
#define atom__40_3D_3C 189L+ATOMNUMBERBASE
#define atom__40_3E 190L+ATOMNUMBERBASE
#define atom__40_3E_3D 191L+ATOMNUMBERBASE
#define atom__5C_2F 192L+ATOMNUMBERBASE
#define atom__5C_3D 193L+ATOMNUMBERBASE
#define atom__5C_3D_3D 194L+ATOMNUMBERBASE
#define atom__5E 195L+ATOMNUMBERBASE
#define atom_is 196L+ATOMNUMBERBASE
#define atom_mod 197L+ATOMNUMBERBASE
#define atom_xor 198L+ATOMNUMBERBASE
#define atom__2B_2B 199L+ATOMNUMBERBASE
#define atom__2D_2D 200L+ATOMNUMBERBASE
#define atom_stdin 201L+ATOMNUMBERBASE
#define atom_stdout 202L+ATOMNUMBERBASE
#define atom_read__open 203L+ATOMNUMBERBASE
#define atom_write__open 204L+ATOMNUMBERBASE
#define atom_append__open 205L+ATOMNUMBERBASE
#define atom_update__open 206L+ATOMNUMBERBASE
#define atom_unix 207L+ATOMNUMBERBASE
#define atom_string__output 208L+ATOMNUMBERBASE
#define atom_string__input 209L+ATOMNUMBERBASE
#define atom_gett 210L+ATOMNUMBERBASE
#define atom_getwt 211L+ATOMNUMBERBASE
#define atom_putt 212L+ATOMNUMBERBASE
#define atom_puttq 213L+ATOMNUMBERBASE
#define atom_putwt 214L+ATOMNUMBERBASE
#define atom_putwtq 215L+ATOMNUMBERBASE
#define atom_addop 216L+ATOMNUMBERBASE
#define atom_rmop 217L+ATOMNUMBERBASE
#define atom_on__error 218L+ATOMNUMBERBASE
#define atom_connect 219L+ATOMNUMBERBASE
#define atom_bind 220L+ATOMNUMBERBASE
#define atom_accept 221L+ATOMNUMBERBASE
#define atom_connect2 222L+ATOMNUMBERBASE
#define atom_accept2 223L+ATOMNUMBERBASE
#define atom_sym 224L+ATOMNUMBERBASE
#define atom_unparser 225L+ATOMNUMBERBASE
#define atom_unparse 226L+ATOMNUMBERBASE
#define atom_unwparse 227L+ATOMNUMBERBASE
#define atom_qtd 228L+ATOMNUMBERBASE
#define atom_alf 229L+ATOMNUMBERBASE
#define atom_do 230L+ATOMNUMBERBASE
#define atom_empty 231L+ATOMNUMBERBASE
#define atom_put 232L+ATOMNUMBERBASE
#define atom_get 233L+ATOMNUMBERBASE
#define atom_get__if__any 234L+ATOMNUMBERBASE
#define atom_get__all 235L+ATOMNUMBERBASE
#define atom_carbon__copy 236L+ATOMNUMBERBASE
#define atom_get__max__if__any 237L+ATOMNUMBERBASE
#define atom_get__min__if__any 238L+ATOMNUMBERBASE
#define atom_get__if__any__and__put 239L+ATOMNUMBERBASE
#define atom_get__and__put__if__any 240L+ATOMNUMBERBASE
#define atom_get__and__put 241L+ATOMNUMBERBASE
#define atom_comparator 242L+ATOMNUMBERBASE
#define atom_sort 243L+ATOMNUMBERBASE
#define atom_pool 244L+ATOMNUMBERBASE
#define atom_n 245L+ATOMNUMBERBASE
#define atom_time 246L+ATOMNUMBERBASE
#define atom_signal__stream 247L+ATOMNUMBERBASE
#define atom_pipe 248L+ATOMNUMBERBASE
#define atom_system 249L+ATOMNUMBERBASE
#define atom_cd 250L+ATOMNUMBERBASE
#define atom_unlink 251L+ATOMNUMBERBASE
#define atom_mktemp 252L+ATOMNUMBERBASE
#define atom_access 253L+ATOMNUMBERBASE
#define atom_chmod 254L+ATOMNUMBERBASE
#define atom_umask 255L+ATOMNUMBERBASE
#define atom_getenv 256L+ATOMNUMBERBASE
#define atom_putenv 257L+ATOMNUMBERBASE
#define atom_kill 258L+ATOMNUMBERBASE
#define atom_fork 259L+ATOMNUMBERBASE
#define atom_fork__with__pipes 260L+ATOMNUMBERBASE
#define atom_inet 261L+ATOMNUMBERBASE
#define atom_fread 262L+ATOMNUMBERBASE
#define atom_feof 263L+ATOMNUMBERBASE
#define atom_sync 264L+ATOMNUMBERBASE
#define atom_parent 265L+ATOMNUMBERBASE
#define atom_child 266L+ATOMNUMBERBASE
#define atom_fseek 267L+ATOMNUMBERBASE
#define atom_ftell 268L+ATOMNUMBERBASE
#define atom_fclose 269L+ATOMNUMBERBASE
#define atom_stdio 270L+ATOMNUMBERBASE
#define atom_flush 271L+ATOMNUMBERBASE
#define atom_puts 272L+ATOMNUMBERBASE
#define atom_bind__mcast 273L+ATOMNUMBERBASE
#define atom_send__mcast 274L+ATOMNUMBERBASE

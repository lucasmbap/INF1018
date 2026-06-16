  .data
  s1: .string "ls -ls"

  .text
  .globl main
  main:
  /* prologo */
    pushq %rbp
    movq  %rsp, %rbp

  /* coloque seu codigo aqui */
    movq $s1, %rdi
    call system                   #Chamada da função system
    xorl %eax, %eax               #guarda o resultado de op1 - op2 

  /* finalizacao */
    leave
    ret
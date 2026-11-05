
void FUN_021581e8(char *param_1)

{
  char cVar1;
  
                    /* JUS-TAG source_file_inferred="JQuizMainMultiScore.cpp" */
  cVar1 = '\0';
  if (param_1 != (char *)0x0) {
    cVar1 = param_1[1];
  }
  if (param_1 != (char *)0x0 && cVar1 != '\0') {
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),(int)*param_1 + 0x21U | 0x818000,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
    return;
  }
  return;
}


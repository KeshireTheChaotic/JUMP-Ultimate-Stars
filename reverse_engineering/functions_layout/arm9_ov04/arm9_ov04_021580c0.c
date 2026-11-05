
void FUN_021580c0(int param_1)

{
  char cVar1;
  int iVar2;
  
                    /* JUS-TAG source_file_inferred="JQuizMainMultiScore.cpp" */
  cVar1 = '\0';
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 1);
  }
  if (param_1 != 0 && cVar1 != '\0') {
    iVar2 = FUN_02157fd0(*(undefined4 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      FUN_02157ffc(*(undefined4 *)(param_1 + 0x10),1);
    }
    iVar2 = FUN_02157fd0(*(undefined4 *)(param_1 + 0x18));
    if (iVar2 == 0) {
      FUN_02157ffc(*(undefined4 *)(param_1 + 0x18),1);
    }
    *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x16) = 0x7fff;
    FUN_02158020(*(undefined4 *)(param_1 + 0x14),0);
    return;
  }
  return;
}


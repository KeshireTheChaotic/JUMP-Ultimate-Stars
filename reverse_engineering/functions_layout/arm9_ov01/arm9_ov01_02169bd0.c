
void FUN_02169bd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(short *)(iVar1 + 0x3a) != 0) {
    FUN_02169ab8(iVar1,0);
    FUN_02023894(*(undefined4 *)(param_1 + 4),0x8ff002,0);
    (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x68) + 0x6c))();
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169c31);
    *(undefined4 *)(iVar1 + 0x58) = 3;
    return;
  }
  if (*(char *)(iVar1 + 0x5c) != '\0') {
    FUN_02028384(*(int *)(param_1 + 4),0x2169c79,param_3,param_4,param_4);
    *(undefined4 *)(iVar1 + 0x58) = 4;
    *(undefined1 *)(iVar1 + 0x5c) = 0;
  }
  return;
}


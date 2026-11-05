
void FUN_02169cac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02169ad4(*(undefined4 *)(iVar2 + 0xc),0,param_3,param_4,param_4);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar2 + 0x58) = 0;
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x2169b59);
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  }
  return;
}


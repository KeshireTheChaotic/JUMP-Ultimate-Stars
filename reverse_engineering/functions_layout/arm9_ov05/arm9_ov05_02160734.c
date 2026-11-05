
void FUN_02160734(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  FUN_02152950(&iStack_18,param_1);
  iStack_14 = iStack_18 + 0x20000;
  FUN_02150a10(param_1,&iStack_14);
  FUN_02152950(&iStack_1c,param_1);
  if (0 < iStack_1c) {
    uStack_20 = 0;
    FUN_02150a10(param_1,&uStack_20);
    if (*(int *)(iVar2 + 4) == 4) {
      piVar1 = *(int **)(*(int *)(iVar2 + 0x278) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21607a1);
  }
  return;
}


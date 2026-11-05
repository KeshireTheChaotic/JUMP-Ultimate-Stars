
void FUN_021606c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_18 = param_4;
  FUN_02152964(&iStack_20,param_1);
  iStack_1c = iStack_20 + 0x12000;
  FUN_02150070(param_1,&iStack_1c);
  FUN_02152964(&iStack_24,param_1);
  if (0 < iStack_24) {
    uStack_28 = 0;
    FUN_02150070(param_1,&uStack_28);
    iVar3 = 0;
    do {
      iVar1 = *(int *)(iVar4 + iVar3 * 4 + 0x4c);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21607a1);
  }
  return;
}


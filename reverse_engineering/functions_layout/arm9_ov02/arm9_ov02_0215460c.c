
void FUN_0215460c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  iVar1 = FUN_02151454(*(undefined4 *)(iVar2 + 0xc),0x564d5049,0);
  iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(*(int *)(iVar2 + 0x330) + 0x56) == '\0') {
    FUN_02154680(iVar2);
  }
  uStack_10 = 0x1000;
  FUN_02151858(*(undefined4 *)(iVar2 + 0xc),&uStack_10);
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}



void FUN_02151e1c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (iVar1 == 1) {
    iVar1 = FUN_0203b3e4();
    iVar1 = FUN_0214fba8(*(undefined4 *)(iVar1 + 0x88),0x871000,4,0x20);
    uStack_18 = 0x10000;
    uStack_14 = 0x8000;
    FUN_021511c8(iVar1,&uStack_14,&uStack_18);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214e688(param_1,iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x20;
  return;
}


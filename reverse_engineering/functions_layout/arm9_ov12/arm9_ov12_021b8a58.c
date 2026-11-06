
void FUN_021b8a58(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *param_3;
  iVar1 = *(int *)(param_1 + 0x50);
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  FUN_021acaf8(iVar1,1);
  return;
}


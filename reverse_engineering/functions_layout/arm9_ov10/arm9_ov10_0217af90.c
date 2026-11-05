
void FUN_0217af90(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (2 < iVar1 + 2U) {
    iVar2 = FUN_02178448();
    MIi_CpuCopy32(param_2 + 1,iVar2 + 0x348,iVar1 * 4);
  }
  iVar2 = FUN_02178448();
  *(int *)(iVar2 + 0x340) = iVar1 + 1;
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x344) = param_1;
  return;
}


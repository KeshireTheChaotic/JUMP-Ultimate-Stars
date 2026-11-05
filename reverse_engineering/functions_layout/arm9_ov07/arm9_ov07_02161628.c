
void FUN_02161628(int param_1,int param_2,int param_3,int param_4)

{
  int extraout_r1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x20) + 0xc) + 0x24);
  *(short *)(param_3 + 2) = (short)param_2;
  if (param_2 == 0xffff) {
    return;
  }
  if (param_2 == 0xfffe) {
    return;
  }
  if (param_2 == 0xfffd) {
    return;
  }
  uVar1 = (uint)*(ushort *)(iVar3 + 0x584);
  iVar2 = param_2 * uVar1 + *(int *)(param_4 + 8);
  param_3 = param_3 + 4;
  if (param_2 != *(int *)(iVar3 + 0x424) + -1) {
    FUN_02051890(iVar2,param_3,uVar1);
    return;
  }
  FUN_0200d12c(*(undefined4 *)(iVar3 + 0x420),uVar1);
  if (extraout_r1 == 0) {
    FUN_02051890(iVar2,param_3,uVar1);
    return;
  }
  FUN_02051890(iVar2,param_3);
  return;
}


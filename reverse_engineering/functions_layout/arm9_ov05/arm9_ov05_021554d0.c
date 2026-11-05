
void FUN_021554d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(ushort *)(iVar1 + 0x43c) + 1;
  *(short *)(iVar1 + 0x43c) = (short)iVar2;
  if (*(ushort *)(iVar1 + 0x43c) < 0x3d) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215550c,iVar2,param_4,param_4);
  return;
}


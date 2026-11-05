
int FUN_021cbbac(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_021cb528();
  iVar3 = iVar1 * 8;
  uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x40) + iVar3);
  if (uVar2 != 0xffff) {
    FUN_021caabc(*(int *)(param_1 + 0x54) + (uVar2 * -0x72594cbd >> 0x10 & 0xff) * 4,
                 *(int *)(param_1 + 0x40) + iVar3,param_1);
  }
  *(short *)(*(int *)(param_1 + 0x40) + iVar3) = (short)param_2;
  *(undefined2 *)(*(int *)(param_1 + 0x40) + iVar3 + 2) = 1;
  FUN_021caa18(*(int *)(param_1 + 0x54) + ((uint)(param_2 * -0x72594cbd) >> 0x10 & 0xff) * 4,
               *(int *)(param_1 + 0x40) + iVar3,param_1);
  return iVar1;
}


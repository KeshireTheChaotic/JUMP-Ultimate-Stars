
undefined4 FUN_021bec98(int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(ushort *)(param_2 + 0x12) <= param_3) {
    return 0;
  }
  iVar3 = 2;
  iVar1 = param_2 + 4;
  do {
    if (*(ushort *)(iVar1 + 0xc) <= param_3) break;
    iVar1 = iVar1 + -2;
    iVar3 = (iVar3 + -1) * 0x1000000 >> 0x18;
  } while (-1 < iVar3);
  if (iVar3 < 0) {
    return 0;
  }
  iVar1 = *(int *)(DAT_021d525c + 0x1318) * (param_3 - *(ushort *)(param_2 + iVar3 * 2 + 0xc));
  piVar2 = (int *)(param_4 + 0xc + iVar3 * 0x10);
  param_1[1] = piVar2[2] - iVar1;
  if (*(uint *)(DAT_021d525c + 0x1318) < (uint)param_1[1]) {
    param_1[1] = *(uint *)(DAT_021d525c + 0x1318);
  }
  param_1[2] = iVar1 + *(int *)(param_2 + iVar3 * 4);
  *param_1 = iVar1 + *piVar2;
  *(char *)(param_1 + 3) = (char)iVar3;
  return 1;
}


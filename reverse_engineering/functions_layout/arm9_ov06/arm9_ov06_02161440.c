
bool FUN_02161440(int param_1,uint param_2,uint *param_3)

{
  ushort *puVar1;
  int iVar2;
  uint unaff_r6;
  int iVar3;
  ushort *puVar4;
  bool bVar5;
  
  iVar2 = *(int *)(param_1 + 0x4c);
  bVar5 = (*(uint *)(param_1 + 0x50) & param_2) == 0;
  if (!bVar5) {
    unaff_r6 = (uint)*(ushort *)(param_1 + 0x56);
  }
  puVar4 = (ushort *)(param_1 + 0xc + iVar2 * 4);
  if (bVar5) {
    unaff_r6 = 0;
  }
  iVar3 = 0x10;
  for (; (iVar3 != 0 && ((*puVar4 & param_2) != 0)); puVar4 = puVar4 + -2) {
    puVar1 = puVar4 + 1;
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      puVar4 = (ushort *)(param_1 + 0x48);
    }
    unaff_r6 = unaff_r6 + *puVar1;
    if (iVar2 < 0) {
      iVar2 = 0xf;
    }
    iVar3 = iVar3 + -1;
  }
  *param_3 = unaff_r6;
  return bVar5;
}


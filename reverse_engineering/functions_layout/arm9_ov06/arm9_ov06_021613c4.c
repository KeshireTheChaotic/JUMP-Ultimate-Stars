
uint FUN_021613c4(int param_1,ushort param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x56);
  iVar2 = *(int *)(param_1 + 0x4c);
  puVar6 = (ushort *)(param_1 + 0xc + iVar2 * 4);
  if (param_3 < (int)uVar4) {
    return 0;
  }
  iVar5 = 0x10;
  uVar3 = (uint)((*(ushort *)(param_1 + 0x54) & param_2) != 0);
  while ((iVar5 != 0 && (uVar4 = uVar4 + puVar6[1], (int)uVar4 <= param_3))) {
    uVar1 = *puVar6;
    puVar6 = puVar6 + -2;
    iVar5 = iVar5 + -1;
    if ((uVar1 & param_2) != 0) {
      uVar3 = uVar3 + 1;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      iVar2 = 0xf;
      puVar6 = (ushort *)(param_1 + 0x48);
    }
  }
  return uVar3;
}


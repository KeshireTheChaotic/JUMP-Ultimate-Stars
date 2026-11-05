
void FUN_0208bb64(void)

{
  uint uVar1;
  undefined2 *puVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if ((DAT_0214cce8 & 1) == 0) {
    DAT_0214cce4 = (undefined2 *)FUN_02089f04();
    DAT_0214cce8 = DAT_0214cce8 | 1;
  }
  iVar5 = FUN_020208ec(0);
  puVar2 = DAT_0214cce4;
  *DAT_0214cce4 = (short)DAT_020a0f10;
  if (*(char *)(DAT_0214ccec + 0x48) < '\x02') {
    puVar2[1] = 0;
    *(undefined1 *)(puVar2 + 2) = 0;
    *(undefined1 *)((int)puVar2 + 5) = 0;
  }
  else {
    sVar3 = (**(code **)(**(int **)(iVar5 + 4) + 0x128))();
    puVar2 = DAT_0214cce4;
    FUN_02028920(0);
    uVar4 = FUN_0208bcc4();
    puVar2[1] = uVar4 | sVar3 << 0xc;
    iVar8 = *(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x50) + 0xc);
    *(char *)(puVar2 + 2) = (char)((int)(iVar8 + ((uint)(iVar8 >> 0xb) >> 0x14)) >> 0xc);
    iVar5 = *(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x50) + 0x10);
    *(char *)((int)puVar2 + 5) = (char)((int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xc);
  }
  iVar5 = FUN_0208a060();
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(DAT_0214ccec + 0x48) != '\x01') {
    return;
  }
  puVar6 = (ushort *)FUN_02089f10(0);
  uVar9 = (uint)*puVar6;
  uVar7 = DAT_020a0f10 << 0x10;
  uVar1 = DAT_020a0f10 & 0xffff;
  if (DAT_020a0f10 < 2 || uVar9 < 2) {
    return;
  }
  if (uVar9 <= uVar1) {
    uVar7 = uVar1 - uVar9;
  }
  if (uVar9 > uVar1 || uVar7 < 2) {
    if (uVar9 <= uVar1) {
      return;
    }
    if ((uVar1 + 0x10000) - uVar9 != 2) {
      return;
    }
  }
  *(undefined1 *)(DAT_0214ccec + 0x48) = 2;
  return;
}


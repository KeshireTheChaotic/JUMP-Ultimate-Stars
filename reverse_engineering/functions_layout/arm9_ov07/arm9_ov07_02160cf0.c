
void FUN_02160cf0(int *param_1,undefined4 *param_2)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar2 = *(int *)(*(int *)(param_1[8] + 0xc) + 0x24);
  if (1 < *(int *)(iVar2 + 0x10) - 3U) {
    puVar1 = (ushort *)*param_2;
    *puVar1 = *puVar1 & 0xfffe;
    uVar3 = *(uint *)(iVar2 + 0x10);
    bVar5 = *(uint *)(iVar2 + 0x18) == uVar3;
    if (bVar5) {
      uVar3 = 1;
    }
    if (!bVar5) {
      uVar3 = 0;
    }
    *puVar1 = *puVar1 & 0xfffd | (ushort)((uVar3 & 1) << 1);
    *puVar1 = *puVar1 & 0xfffb | (ushort)((*(uint *)(iVar2 + 0x14) & 1) << 2);
    *puVar1 = *puVar1 & 0xff07 | (ushort)((*(uint *)(iVar2 + 0x10) & 0x1f) << 3);
    *(char *)((int)puVar1 + 1) = (char)param_1[3];
    puVar1[1] = (ushort)param_1[6];
    puVar1[2] = (ushort)param_1[1];
    return;
  }
  puVar1 = (ushort *)*param_2;
  *puVar1 = *puVar1 & 0xfffe | 1;
  puVar1[1] = puVar1[1] & 0xfffe | (ushort)*(undefined4 *)(iVar2 + 0x14) & 1;
  *puVar1 = *puVar1 & 1 | (ushort)((*(uint *)(iVar2 + 0x24) & 0x7fff) << 1);
  puVar1[1] = puVar1[1] & 1 | (ushort)((*(uint *)(iVar2 + 0x28) & 0x7fff) << 1);
  if (*(int *)(iVar2 + 0x28) == 0x7fff) {
    return;
  }
  uVar3 = *(uint *)(iVar2 + 0x1c);
  iVar2 = uVar3 * *(int *)(iVar2 + 0x28);
  uVar4 = param_1[1] - iVar2;
  if (uVar4 < uVar3) {
    uVar3 = uVar4;
  }
  FUN_02051890(*param_1 + iVar2,puVar1 + 2,uVar3);
  return;
}


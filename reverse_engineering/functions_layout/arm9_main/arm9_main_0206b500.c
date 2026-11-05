
void FUN_0206b500(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort local_64 [32];
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0206ae7c(*(undefined4 *)(iVar5 + 4),local_64,*(undefined2 *)(iVar5 + 0xe),
               *(undefined1 *)(iVar5 + 0x10));
  if ((*(byte *)(iVar5 + 0x1c) & 1) == 0) {
    uVar6 = (uint)local_64[0];
  }
  else {
    uVar6 = FUN_0206b8b0(**(undefined2 **)(iVar5 + 8),*(undefined2 *)(iVar5 + 0x16),
                         *(undefined1 *)(iVar5 + 0x11),*(undefined1 *)(iVar5 + 0x1a));
  }
  if ((*(byte *)(iVar5 + 0x1c) & 2) == 0) {
    uVar2 = (uint)local_64[*(byte *)(iVar5 + 0x10) - 1];
  }
  else {
    uVar2 = FUN_0206b8b0(*(undefined2 *)(*(int *)(iVar5 + 8) + (*(byte *)(iVar5 + 0x10) - 1) * 2),
                         *(undefined2 *)(iVar5 + 0x18),*(undefined1 *)(iVar5 + 0x11),
                         *(undefined1 *)(iVar5 + 0x1a));
  }
  uVar8 = (int)uVar6 >> 5 & 0x1f;
  uVar9 = (int)uVar6 >> 10 & 0x1f;
  for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar5 + 0x10); iVar7 = iVar7 + 1) {
    iVar4 = *(byte *)(iVar5 + 0x10) - 1;
    iVar3 = FUN_0200d12c(iVar7 * (((int)uVar2 >> 10 & 0x1fU) - uVar9));
    sVar1 = FUN_0200d12c(iVar7 * ((uVar2 & 0x1f) - (uVar6 & 0x1f)),iVar4);
    iVar4 = FUN_0200d12c(iVar7 * (((int)uVar2 >> 5 & 0x1fU) - uVar8),iVar4);
    local_64[iVar7] =
         (short)(uVar6 & 0x1f) + sVar1 & 0xffU | (ushort)((uVar8 + iVar4 & 0xff) << 5) |
         (ushort)((uVar9 + iVar3 & 0xff) << 10);
  }
  FUN_02029c68(*(undefined4 *)(*(int *)(iVar5 + 4) + 4),local_64,*(undefined2 *)(iVar5 + 0xe));
  if (*(byte *)(iVar5 + 0x11) < *(byte *)(iVar5 + 0x1a)) {
    if (*(byte *)(iVar5 + 0x11) == 0) {
      *(undefined1 *)(iVar5 + 0x1b) = 1;
    }
  }
  else {
    *(undefined1 *)(iVar5 + 0x1b) = 0xff;
  }
  *(char *)(iVar5 + 0x11) = *(char *)(iVar5 + 0x11) + *(char *)(iVar5 + 0x1b);
  return;
}


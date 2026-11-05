
void FUN_0215a780(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = FUN_02050750(DAT_0216e770,0x1c);
  iVar1 = 0x36 - iVar1;
  uVar5 = (uint)*(byte *)(DAT_0216e774 + 0x51);
  if (5 < uVar5) {
    uVar5 = 5;
  }
  iVar4 = 0;
  if (uVar5 != 0) {
    iVar3 = 0;
    do {
      puVar2 = *(uint **)(DAT_0216e774 + iVar3 + 0x10);
      *puVar2 = *puVar2 & 0xfe00ff00 | iVar1 - 2U & 0xff | 0xb30000;
      puVar2 = *(uint **)(DAT_0216e774 + iVar3 + 0x24);
      *puVar2 = *puVar2 & 0xfe00ff00 | iVar1 + 1U & 0xff | 0xd20000;
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (iVar4 < (int)uVar5);
  }
  *(undefined1 *)(DAT_0216e774 + 0x56) = 1;
  return;
}


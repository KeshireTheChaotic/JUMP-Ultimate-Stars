
void FUN_0215d0b0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int local_20;
  
  iVar1 = FUN_020507a8(DAT_0216e790,0x1d);
  iVar2 = FUN_02050750(DAT_0216e790,0x1d);
  uVar3 = 0x34 - iVar2;
  if (*(int *)(DAT_0216e794 + 0x34) != 0) {
    if (iVar1 == 0) {
      local_20 = 0x26;
    }
    else {
      local_20 = 0x100;
    }
    **(uint **)(DAT_0216e794 + 0x34) =
         local_20 << 0x10 | **(uint **)(DAT_0216e794 + 0x34) & 0xfe00ff00 | uVar3 & 0xff;
  }
  iVar4 = 0;
  iVar2 = 0;
  uVar5 = uVar3;
  do {
    puVar6 = *(uint **)(DAT_0216e794 + iVar2 + 0x18);
    *puVar6 = **(uint **)(DAT_0216e794 + iVar2 + 0x18) & 0x1ff0000 |
              *puVar6 & 0xfe00ff00 | uVar5 & 0xff;
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 + 0x1d;
  } while (iVar4 < 5);
  if (iVar1 < 3) {
    **(uint **)(DAT_0216e794 + 0x2c) =
         **(uint **)(DAT_0216e794 + 0x2c) & 0x1ff0000 |
         **(uint **)(DAT_0216e794 + 0x2c) & 0xfe00ff00 | uVar3 + (2 - iVar1) * 0x1d & 0xff;
  }
  else {
    **(uint **)(DAT_0216e794 + 0x2c) = **(uint **)(DAT_0216e794 + 0x2c) & 0xfe00ff00 | 0x1000000;
  }
  if ((iVar1 < 2) || (6 < iVar1)) {
    **(uint **)(DAT_0216e794 + 0x30) = **(uint **)(DAT_0216e794 + 0x30) & 0xfe00ff00 | 0x1000000;
  }
  else {
    **(uint **)(DAT_0216e794 + 0x30) =
         **(uint **)(DAT_0216e794 + 0x30) & 0x1ff0000 |
         **(uint **)(DAT_0216e794 + 0x30) & 0xfe00ff00 | uVar3 + (6 - iVar1) * 0x1d & 0xff;
  }
  *(undefined1 *)(DAT_0216e794 + 0x44) = 1;
  return;
}


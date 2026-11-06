
void FUN_02164fb8(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int extraout_r1;
  
  uVar2 = FUN_021646ac();
  iVar3 = DAT_0216e82c;
  if (uVar2 < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar2) {
    case 1:
      FUN_0216422c(4,*(short *)(DAT_0216e82c + 0x648) + 1,*(undefined2 *)(DAT_0216e82c + 0x64a));
      return;
    case 4:
      uVar1 = *(undefined2 *)(DAT_0216e82c + 0x200);
      FUN_0200d12c(uVar1,0x10);
      FUN_02164e04(0,uVar1,*(int *)(iVar3 + 0xaa4) + extraout_r1 * 0x40);
      FUN_02164d54();
      if (*(char *)(DAT_0216e82c + 0xa90) != '\x1b') {
        if (0x1e0 < *(uint *)(DAT_0216e82c + 0x204)) {
          *(char *)(DAT_0216e82c + 0xa90) = '\x1b';
          return;
        }
        iVar3 = FUN_02164d40();
        if ((iVar3 == 0x10) || (iVar3 = FUN_02164d40(), iVar3 == 0x20)) {
          FUN_02164d40();
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 10;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0x40) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 0xb;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0xff) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1b;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0x50) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x15;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0x60) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x18;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0x70) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1b;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 8;
          return;
        }
        iVar3 = FUN_02164d40();
        if (iVar3 == 0xbd) {
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 9;
          return;
        }
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1f;
      }
    }
  }
  return;
}



void FUN_02165374(void)

{
  int iVar1;
  int extraout_r1;
  char *pcVar2;
  uint uVar3;
  
  if (*(byte *)(DAT_0216e82c + 0xa90) < 0x23) {
                    /* WARNING: Switch is manually overridden */
    switch(*(byte *)(DAT_0216e82c + 0xa90)) {
    case 1:
      pcVar2 = (char *)(DAT_0216e82c + 0xaac);
      if (*pcVar2 == '\x01') {
        *pcVar2 = '\0';
        FUN_02165600();
        return;
      }
      if (*pcVar2 == '\x02') {
        *pcVar2 = '\0';
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x22;
        return;
      }
      break;
    case 2:
      FUN_02165298();
      return;
    case 3:
      FUN_02165278();
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 4;
      return;
    case 4:
      *(int *)(DAT_0216e82c + 0xa98) = *(int *)(DAT_0216e82c + 0xa98) + 1;
      FUN_0216513c();
      return;
    case 5:
    case 6:
      FUN_0216513c();
      return;
    case 7:
      FUN_02165114();
      return;
    case 8:
    case 9:
    case 10:
      FUN_02164fb8();
      return;
    case 0xb:
      FUN_02164fa4();
      return;
    case 0x10:
      *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x11;
      return;
    case 0x11:
      uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
      *(uint *)(DAT_0216e82c + 0xa9c) = uVar3 + 1;
      if (0x1e < uVar3) {
        FUN_02164f78();
        return;
      }
      break;
    case 0x12:
      func_0x021bfe80();
      *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x16;
      return;
    case 0x13:
      uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
      *(uint *)(DAT_0216e82c + 0xa9c) = uVar3 + 1;
      if ((0x1e < uVar3) && (iVar1 = FUN_021646ac(), iVar1 == 1)) {
        FUN_02164068();
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x14;
        return;
      }
      break;
    case 0x15:
      FUN_021640a4();
      *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x16;
      return;
    case 0x16:
      uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
      *(uint *)(DAT_0216e82c + 0xa9c) = uVar3 + 1;
      if ((0x1e < uVar3) && (iVar1 = FUN_021646ac(), iVar1 == 1)) {
        FUN_02164068();
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x17;
        return;
      }
      break;
    case 0x18:
      FUN_021640a4();
      *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x19;
      return;
    case 0x19:
      uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
      *(uint *)(DAT_0216e82c + 0xa9c) = uVar3 + 1;
      if ((0x1e < uVar3) && (iVar1 = FUN_021646ac(), iVar1 == 1)) {
        FUN_02164068();
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1a;
        return;
      }
      break;
    case 0x1b:
      FUN_021640a4();
      *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1c;
      return;
    case 0x1c:
      uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
      *(uint *)(DAT_0216e82c + 0xa9c) = uVar3 + 1;
      if (0x1e < uVar3) {
        iVar1 = FUN_021646ac();
        if (iVar1 == 1) {
          FUN_02164068();
          *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1d;
          return;
        }
        uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
        FUN_0200d338(uVar3,0x1e);
        if ((extraout_r1 == 1) && (0x37 < uVar3)) {
          FUN_021640a4();
          return;
        }
      }
      break;
    case 0x1e:
      FUN_021640a4();
      break;
    case 0x20:
      FUN_021640a4();
      *(undefined4 *)(DAT_0216e82c + 0xa9c) = 0;
      *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x21;
      return;
    case 0x21:
      uVar3 = *(uint *)(DAT_0216e82c + 0xa9c);
      *(uint *)(DAT_0216e82c + 0xa9c) = uVar3 + 1;
      if ((0x1e < uVar3) && (iVar1 = FUN_021646ac(), iVar1 == 1)) {
        FUN_02164068();
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x22;
        return;
      }
    }
  }
  return;
}


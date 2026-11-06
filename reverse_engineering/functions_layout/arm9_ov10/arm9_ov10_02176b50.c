
void FUN_02176b50(void)

{
  int iVar1;
  
  iVar1 = FUN_02176454();
  if (iVar1 != 0) {
    FUN_02176450();
  }
  if (DAT_021a7410 == (int *)0x0) {
    return;
  }
  if (DAT_021a7410[9] == 0) {
    return;
  }
  iVar1 = FUN_0217575c();
  if (iVar1 != 0) {
    return;
  }
  if ((uint)DAT_021a7410[9] < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(DAT_021a7410[9]) {
    case 0:
      break;
    case 1:
      iVar1 = FUN_02000cbc();
      if (iVar1 == 1) {
        FUN_021823f4(DAT_021a7410 + 7,DAT_021a7410[0x28],0);
        iVar1 = FUN_0217631c();
        if (iVar1 != 0) {
          return;
        }
        FUN_0218236c(DAT_021a7410 + 7,0,0x2176109,0);
        iVar1 = FUN_0217631c();
        if (iVar1 != 0) {
          return;
        }
        FUN_0218236c(DAT_021a7410 + 7,3,0x217603d,0);
        iVar1 = FUN_0217631c();
        if (iVar1 != 0) {
          return;
        }
        FUN_0218236c(DAT_021a7410 + 7,1,0x2178041,0);
        iVar1 = FUN_0217631c();
        if (iVar1 != 0) {
          return;
        }
        FUN_0218236c(DAT_021a7410 + 7,2,0x2177fb9,0);
        iVar1 = FUN_0217631c();
        if (iVar1 != 0) {
          return;
        }
        FUN_0217643c(2);
        FUN_02177614();
      }
      else {
        if (iVar1 == 2) {
          FUN_02177528(3,0xffffb172);
          return;
        }
        if (iVar1 == 3) {
          FUN_02177528(4,0xffffb17b);
          return;
        }
      }
      break;
    case 2:
      FUN_0217756c();
      break;
    default:
      FUN_021780fc();
      FUN_0217d650(0);
      break;
    case 5:
      FUN_0217d650(1);
      FUN_021780fc();
      break;
    case 6:
      FUN_0217e9d8();
      FUN_021780fc();
      if ((*(char *)((int)DAT_021a7410 + 0x369) == '\x02') ||
         (*(char *)((int)DAT_021a7410 + 0x369) == '\x03')) {
        FUN_0217d650(1);
      }
      else if (*DAT_021a7410 != 0) {
        FUN_0217d650(0);
      }
    }
  }
  if ((char)DAT_021a7410[0xdb] == '\x01') {
    if (DAT_021a7410[0xd9] != 0) {
      FUN_0218db80();
      DAT_021a7410[0xd9] = 0;
    }
    *(undefined1 *)(DAT_021a7410 + 0xdb) = 0;
  }
  return;
}


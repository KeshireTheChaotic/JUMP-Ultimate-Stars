
void FUN_0215575c(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_20 [12];
  
  *(undefined1 *)(DAT_0216e6dc + 0x11c) = 0;
  iVar1 = FUN_02166cd8(&DAT_0216af00);
  if (iVar1 != 0) {
    iVar1 = 0;
    puVar3 = &DAT_0216a51c;
    do {
      FUN_02166868(puVar3,&DAT_0216a4d0,auStack_20);
      iVar2 = FUN_02166cd8(auStack_20);
      if (iVar2 != 0) {
        if (*(char *)(DAT_0216e6dc + 0x11e) != iVar1) {
          return;
        }
        *(undefined *)(DAT_0216e6dc + 0x11c) =
             (&PTR_s_1234567890__qwertyuiop__asdfghjk_0216b2e4)[*(byte *)(DAT_0216e6dc + 0x11d)]
             [iVar1];
        if (*(char *)(DAT_0216e6dc + 0x11d) == '\x01') {
          FUN_021551b0(0);
        }
        *(char *)(DAT_0216e6dc + 0x121) = (char)iVar1;
        FUN_02155088();
        return;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x2f);
    iVar1 = 2;
    puVar4 = &DAT_0216a514;
    puVar3 = &DAT_0216a504;
    do {
      FUN_02166868(puVar3,puVar4,auStack_20);
      iVar2 = FUN_02166cd8(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6dc + 0x11e) != iVar1 + 0x2f) {
          return;
        }
        *(undefined1 *)(DAT_0216e6dc + 0x11c) = *(undefined1 *)(iVar1 + 0x216a4ec);
        if (*(char *)(DAT_0216e6dc + 0x11d) == '\x01') {
          FUN_021551b0(0);
        }
        *(char *)(DAT_0216e6dc + 0x121) = (char)iVar1 + '/';
        FUN_02155088();
        return;
      }
      puVar4 = puVar4 + 4;
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = 0;
    puVar5 = &DAT_0216a4f4;
    do {
      FUN_02166868(puVar5,&DAT_0216a4cc,auStack_20);
      iVar2 = FUN_02166cd8(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6dc + 0x11e) == iVar1 + 0x33) {
          *(undefined1 *)(DAT_0216e6dc + 0x11c) = (&DAT_0216a4c0)[iVar1];
          *(char *)(DAT_0216e6dc + 0x121) = (char)(iVar1 + 0x33);
          FUN_02155088();
          return;
        }
        return;
      }
      puVar5 = puVar5 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    FUN_02166868(&DAT_0216a4fc,&DAT_0216a50c,auStack_20);
    iVar1 = FUN_02166cd8(auStack_20);
    if (iVar1 == 0) {
      FUN_02166868(&DAT_0216a500,&DAT_0216a510,auStack_20);
      iVar1 = FUN_02166cd8(auStack_20);
      if ((iVar1 != 0) && (*(char *)(DAT_0216e6dc + 0x11e) == '0')) {
        FUN_02155704();
        *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x30;
        FUN_02155088();
      }
    }
    else if (*(char *)(DAT_0216e6dc + 0x11e) == '/') {
      FUN_02155730();
      *(undefined1 *)(DAT_0216e6dc + 0x121) = 0x2f;
      FUN_02155088();
      return;
    }
  }
  return;
}



void FUN_021555b8(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_02166dbc(&DAT_0216af00);
  if (iVar1 != 0) {
    iVar1 = 0;
    puVar3 = &DAT_0216a51c;
    do {
      FUN_02166868(puVar3,&DAT_0216a4d0,auStack_20);
      iVar2 = FUN_02166dbc(auStack_20);
      if (iVar2 != 0) {
        if (*(char *)(DAT_0216e6dc + 0x11e) != iVar1) goto LAB_021556be;
        FUN_02155580(iVar1);
        goto LAB_021556c6;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x2f);
    iVar1 = 2;
    puVar4 = &DAT_0216a514;
    puVar3 = &DAT_0216a504;
    do {
      FUN_02166868(puVar3,puVar4,auStack_20);
      iVar2 = FUN_02166dbc(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6dc + 0x11e) == iVar1 + 0x2f) {
          FUN_02155580();
          if (iVar1 != 3) {
            return;
          }
          *(char *)(DAT_0216e6dc + 0x122) = *(char *)(DAT_0216e6dc + 0x122) + '\x01';
          if (*(byte *)(DAT_0216e6dc + 0x122) < 0x28) {
            return;
          }
          if (*(char *)(DAT_0216e6dc + 0x123) == '\0') {
            FUN_02162378(9);
            *(undefined1 *)(DAT_0216e6dc + 0x11e) = 0xff;
            return;
          }
          *(undefined1 *)(DAT_0216e6dc + 0x11c) = 0x80;
          *(char *)(DAT_0216e6dc + 0x122) = *(char *)(DAT_0216e6dc + 0x122) + -7;
          return;
        }
        goto LAB_021556be;
      }
      puVar4 = puVar4 + 4;
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar1 = 0;
    puVar5 = &DAT_0216a4f4;
    do {
      FUN_02166868(puVar5,&DAT_0216a4cc,auStack_20);
      iVar2 = FUN_02166dbc(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6dc + 0x11e) == iVar1 + 0x33) {
          FUN_02155580(iVar1 + 0x33);
          goto LAB_021556c6;
        }
        break;
      }
      puVar5 = puVar5 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
LAB_021556be:
  FUN_02155580(0xffffffff);
LAB_021556c6:
  *(undefined1 *)(DAT_0216e6dc + 0x122) = 0;
  return;
}


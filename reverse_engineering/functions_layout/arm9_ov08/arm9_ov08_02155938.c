
void FUN_02155938(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_02166d70(&DAT_0216af00);
  if (iVar1 != 0) {
    iVar1 = 0;
    *(undefined1 *)(DAT_0216e6dc + 0x11e) = 0xff;
    puVar3 = &DAT_0216a51c;
    do {
      FUN_02166868(puVar3,&DAT_0216a4d0,auStack_20);
      iVar2 = FUN_02166d70(auStack_20);
      if (iVar2 != 0) {
        if (*(char *)(DAT_0216e6dc + 0x124) == '\0') {
          FUN_02162378(9);
          return;
        }
        FUN_02162378(0);
        *(char *)(DAT_0216e6dc + 0x11e) = (char)iVar1;
        return;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x2f);
    iVar1 = 0;
    puVar4 = &DAT_0216a50c;
    puVar3 = &DAT_0216a4fc;
    do {
      FUN_02166868(puVar3,puVar4,auStack_20);
      iVar2 = FUN_02166d70(auStack_20);
      if (iVar2 != 0) {
        if (((iVar1 == 3) && (*(char *)(DAT_0216e6dc + 0x123) == '\0')) ||
           ((iVar1 == 2 && (*(char *)(DAT_0216e6dc + 0x124) == '\0')))) {
          FUN_02162378(9);
          return;
        }
        FUN_02162378((&DAT_0216b2fc)[iVar1]);
        *(char *)(DAT_0216e6dc + 0x11e) = (char)iVar1 + '/';
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
      iVar2 = FUN_02166d70(auStack_20);
      if (iVar2 != 0) {
        FUN_02162378(0);
        *(char *)(DAT_0216e6dc + 0x11e) = (char)iVar1 + '3';
        return;
      }
      puVar5 = puVar5 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}


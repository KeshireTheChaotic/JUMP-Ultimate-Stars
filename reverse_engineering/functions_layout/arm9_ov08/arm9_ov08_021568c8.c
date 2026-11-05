
void FUN_021568c8(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_02166d70(&DAT_0216af00);
  if (iVar1 != 0) {
    iVar1 = 0;
    *(undefined1 *)(DAT_0216e6e0 + 0x61) = 0xff;
    puVar3 = &DAT_0216a800;
    do {
      FUN_02166868(puVar3,&DAT_0216a798,auStack_20);
      iVar2 = FUN_02166d70(auStack_20);
      if (iVar2 != 0) {
        if (*(char *)(DAT_0216e6e0 + 0x67) == '\0') {
          FUN_02162378(9);
          return;
        }
        FUN_02162378(0);
        *(char *)(DAT_0216e6e0 + 0x61) = (char)iVar1;
        return;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    iVar1 = 0;
    puVar4 = &DAT_0216a7c8;
    do {
      FUN_02166868(puVar4,&DAT_0216a7a0,auStack_20);
      iVar2 = FUN_02166d70(auStack_20);
      if (iVar2 != 0) {
        if (((iVar1 == 0) && (*(char *)(DAT_0216e6e0 + 0x66) == '\0')) ||
           ((iVar1 == 1 && (*(char *)(DAT_0216e6e0 + 0x68) == '\0')))) {
          FUN_02162378(9);
          return;
        }
        FUN_02162378(0);
        *(char *)(DAT_0216e6e0 + 0x61) = (char)iVar1 + '\n';
        return;
      }
      puVar4 = puVar4 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    puVar4 = &DAT_0216a7d0;
    do {
      FUN_02166868(puVar4,&DAT_0216a7a4,auStack_20);
      iVar2 = FUN_02166d70(auStack_20);
      if (iVar2 != 0) {
        FUN_02162378(0);
        *(char *)(DAT_0216e6e0 + 0x61) = (char)iVar1 + '\f';
        return;
      }
      puVar4 = puVar4 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  return;
}


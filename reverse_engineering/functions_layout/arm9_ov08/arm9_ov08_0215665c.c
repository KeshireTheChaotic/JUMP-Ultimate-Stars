
void FUN_0215665c(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_20 [12];
  
  iVar1 = FUN_02166dbc(&DAT_0216af00);
  if (iVar1 != 0) {
    iVar1 = 0;
    puVar3 = &DAT_0216a800;
    do {
      FUN_02166868(puVar3,&DAT_0216a798,auStack_20);
      iVar2 = FUN_02166dbc(auStack_20);
      if (iVar2 != 0) {
        if (*(char *)(DAT_0216e6e0 + 0x61) != iVar1) goto LAB_0215676e;
        FUN_02156628(iVar1);
        goto LAB_02156776;
      }
      puVar3 = puVar3 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 10);
    iVar1 = 0;
    puVar4 = &DAT_0216a7c8;
    do {
      FUN_02166868(puVar4,&DAT_0216a7a0,auStack_20);
      iVar2 = FUN_02166dbc(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6e0 + 0x61) != iVar1 + 10) goto LAB_0215676e;
        FUN_02156628();
        if (iVar1 == 0) {
          *(char *)(DAT_0216e6e0 + 0x65) = *(char *)(DAT_0216e6e0 + 0x65) + '\x01';
          if (*(byte *)(DAT_0216e6e0 + 0x65) < 0x28) {
            return;
          }
          if (*(char *)(DAT_0216e6e0 + 0x66) == '\0') {
            FUN_02162378(9);
            *(undefined1 *)(DAT_0216e6e0 + 0x61) = 0xff;
            return;
          }
          *(undefined1 *)(DAT_0216e6e0 + 0x60) = 0x10;
          *(char *)(DAT_0216e6e0 + 0x65) = *(char *)(DAT_0216e6e0 + 0x65) + -7;
          return;
        }
        goto LAB_02156776;
      }
      puVar4 = puVar4 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar1 = 0;
    puVar4 = &DAT_0216a7d0;
    do {
      FUN_02166868(puVar4,&DAT_0216a7a4,auStack_20);
      iVar2 = FUN_02166dbc(auStack_20);
      if (iVar2 != 0) {
        if ((int)*(char *)(DAT_0216e6e0 + 0x61) == iVar1 + 0xc) {
          FUN_02156628(iVar1 + 0xc);
          goto LAB_02156776;
        }
        break;
      }
      puVar4 = puVar4 + 2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
LAB_0215676e:
  FUN_02156628(0xffffffff);
LAB_02156776:
  *(undefined1 *)(DAT_0216e6e0 + 0x65) = 0;
  return;
}


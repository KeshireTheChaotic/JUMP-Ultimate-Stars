
void FUN_02164e04(undefined2 param_1,undefined2 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)(DAT_0216e82c + 0xa93) == '\x01') {
    **(undefined2 **)(DAT_0216e82c + 0xab0) = param_1;
    *(undefined2 *)(*(int *)(DAT_0216e82c + 0xab0) + 2) = param_2;
    FUN_02051890(param_3,*(int *)(DAT_0216e82c + 0xab0) + 4,0x40);
  }
  else {
    *(int *)(DAT_0216e82c + 0x204) = *(int *)(DAT_0216e82c + 0x204) + 1;
    **(undefined2 **)(DAT_0216e82c + 0xab0) = 0xbc;
    *(undefined1 *)(*(int *)(DAT_0216e82c + 0xab0) + 4) = *(undefined1 *)(DAT_0216e82c + 0xa92);
  }
  iVar1 = FUN_021646ac();
  if (iVar1 == 5) {
    iVar1 = FUN_02164188(DAT_0216e82c);
    if (iVar1 == 0) {
      *(int *)(DAT_0216e82c + 0x204) = *(int *)(DAT_0216e82c + 0x204) + 4;
      return;
    }
    if (*(char *)(DAT_0216e82c + 0xa93) == '\0') {
      *(int *)(DAT_0216e82c + 0x204) = *(int *)(DAT_0216e82c + 0x204) + 1;
    }
    else {
      *(undefined4 *)(DAT_0216e82c + 0x204) = 0;
      iVar1 = FUN_021646b8();
      if (iVar1 != 3) {
        *(undefined1 *)(DAT_0216e82c + 0xa90) = 0x1b;
        return;
      }
    }
    uVar2 = 0;
    do {
      iVar1 = FUN_021641fc(uVar2);
      if (iVar1 == 0) {
        *(undefined4 *)(DAT_0216e82c + uVar2 * 4 + 0x208) = 0;
      }
      else {
        FUN_02051890(iVar1,DAT_0216e82c + 0x100 + uVar2 * 0x44,0x44);
        *(undefined4 *)(DAT_0216e82c + uVar2 * 4 + 0x208) = 1;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < 2);
  }
  return;
}


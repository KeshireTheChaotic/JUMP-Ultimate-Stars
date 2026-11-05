
void FUN_02167824(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1 * 0x40;
  iVar1 = DAT_0216e8ac + iVar2;
  if (*(char *)(iVar1 + 0x38) != '\0') {
    iVar3 = *(int *)(iVar1 + 0x10);
    if (iVar3 != iVar1 + 0x20) {
      do {
        (**(code **)(iVar3 + 8))(iVar3,*(undefined4 *)(iVar3 + 0xc));
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar3 != DAT_0216e8ac + iVar2 + 0x20);
    }
    iVar1 = 0;
    if (0 < *(int *)(DAT_0216e8ac + iVar2 + 0x34)) {
      do {
        iVar3 = FUN_0216609c(*(undefined4 *)(iVar2 + DAT_0216e8ac + 4));
        if (iVar3 == 0) {
          return;
        }
        FUN_02167764(param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(iVar2 + DAT_0216e8ac + 0x34));
    }
  }
  return;
}


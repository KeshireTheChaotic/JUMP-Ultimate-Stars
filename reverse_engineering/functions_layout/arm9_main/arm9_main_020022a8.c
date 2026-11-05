
undefined4 FUN_020022a8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    uVar1 = FUN_02002024();
    return uVar1;
  }
  if ((*(char *)(param_1 + 0xd) != '\0') || ((*(uint *)(param_1 + 4) & 0x3ff) >> 7 == 0)) {
    return 0xffffffff;
  }
  if ((*(uint *)(param_1 + 4) & 0x1f) >> 2 == 1) {
    return 0;
  }
  if (2 < (*(uint *)(param_1 + 8) & 7)) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff8 | 2;
  }
  if ((*(uint *)(param_1 + 8) & 7) == 2) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if ((*(uint *)(param_1 + 8) & 7) != 1) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff8;
    return 0;
  }
  iVar2 = FUN_020020a8(param_1,0);
  if (iVar2 == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff8;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return 0;
  }
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return 0xffffffff;
}


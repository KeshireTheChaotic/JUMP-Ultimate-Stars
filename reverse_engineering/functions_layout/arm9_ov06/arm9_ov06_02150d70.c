
undefined4 FUN_02150d70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x158;
  if ((*(int *)(DAT_02172960 + 0x158) < 3) && (1 < *(int *)(param_1 + 0x14))) {
    iVar2 = *(int *)(DAT_02172960 + 0xe0);
    if ((*(char *)(iVar2 + 0x18) != '\b') ||
       (uVar1 = 0x16d, *(char *)(DAT_02172960 + 0x16d) != '\0')) {
      *(undefined1 *)(param_1 + 0xc4) = 0;
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
    FUN_02150e74(param_1,0,uVar1,iVar2,param_4);
    FUN_02150e74(param_1,1);
  }
  if ((*(uint *)(param_1 + 4) & 1) == 0) {
    for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x14); iVar2 = iVar2 + 1) {
      FUN_020783cc(*(undefined4 *)(DAT_02172960 + iVar2 * 4 + 0x118),0x80);
      FUN_020781e4(*(undefined4 *)(DAT_02172960 + iVar2 * 4 + 0x118),0x200);
    }
  }
  return 0;
}


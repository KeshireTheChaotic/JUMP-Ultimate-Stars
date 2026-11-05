
undefined4 FUN_021ce5d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    DAT_021d6698 = *(int *)(param_1 + 8);
    if (DAT_021d6698 != 0) {
      *(undefined4 *)(DAT_021d6698 + 4) = 0;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 4) + 8) = *(undefined4 *)(param_1 + 8);
  }
  if (*(int *)(param_1 + 8) == 0) {
    DAT_021d669c = *(int *)(param_1 + 4);
    if (DAT_021d669c != 0) {
      *(undefined4 *)(DAT_021d669c + 8) = 0;
    }
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = *(undefined4 *)(param_1 + 4);
  }
  (&DAT_021d66a0)[*(byte *)(param_1 + 0x11)] = (&DAT_021d66a0)[*(byte *)(param_1 + 0x11)] + -1;
  return (&DAT_021d66a0)[*(byte *)(param_1 + 0x11)];
}



undefined4 FUN_021ce65c(int param_1)

{
  if (DAT_021d6698 == 0) {
    DAT_021d6698 = param_1;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(DAT_021d6698 + 8) = 0;
    DAT_021d669c = DAT_021d6698;
  }
  else {
    *(int *)(param_1 + 4) = DAT_021d669c;
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(DAT_021d669c + 8) = param_1;
    DAT_021d669c = param_1;
  }
  (&DAT_021d66a0)[*(byte *)(param_1 + 0x11)] = (&DAT_021d66a0)[*(byte *)(param_1 + 0x11)] + 1;
  return (&DAT_021d66a0)[*(byte *)(param_1 + 0x11)];
}


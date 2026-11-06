
void FUN_02194a7c(int param_1,byte *param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x455) == '\t') {
    (*DAT_021a8528)(param_2);
    return;
  }
  uVar1 = (uint)*param_2;
  if ((((byte)(*(char *)(param_1 + 0x455) - 7U) < 2) && (uVar1 != 0x15)) ||
     ((uVar1 == 0x15 && (7 < CONCAT11(param_2[3],param_2[4]) + 5)))) {
    FUN_02194e20(param_1,param_2);
  }
  if (uVar1 - 0x14 < 4) {
    (*(code *)((int)&switchD_02194ae4::switchdataD_02194ae6 +
              (int)(short)(&switchD_02194ae4::switchdataD_02194ae6)[uVar1 - 0x14]))();
    return;
  }
  *(undefined1 *)(param_1 + 0x455) = 9;
  (*DAT_021a8528)(param_2);
  return;
}


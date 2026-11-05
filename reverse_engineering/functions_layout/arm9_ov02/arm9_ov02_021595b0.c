
undefined4 FUN_021595b0(int param_1,int param_2,short param_3)

{
  param_2 = param_3 * 0x4dc + param_2;
  *(short *)(param_2 + 0x48e) = *(short *)(param_1 + 4) + -1;
  *(undefined1 **)(param_2 + 0x1dc) = &LAB_021595e0;
  return 1;
}


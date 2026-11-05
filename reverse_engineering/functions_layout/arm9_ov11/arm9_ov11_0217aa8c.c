
undefined4 FUN_0217aa8c(int param_1,undefined1 param_2,byte param_3,undefined4 param_4)

{
  if ((*(uint *)(param_1 + 0x4c) & 1 << (uint)param_3) == 0) {
    *(undefined1 *)(param_1 + 0x39) = 1;
    *(undefined1 *)(param_1 + 0x3e) = 0;
    *(undefined1 *)(param_1 + 0x38) = param_2;
    *(byte *)(param_1 + 0x3a) = param_3;
    FUN_02174ebc(**(undefined4 **)(param_1 + 0x24),param_3,0,0,param_4);
    return 1;
  }
  return 0;
}


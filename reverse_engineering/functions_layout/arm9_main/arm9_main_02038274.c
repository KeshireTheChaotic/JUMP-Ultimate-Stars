
void FUN_02038274(uint *param_1,undefined4 param_2,uint param_3)

{
  if (param_3 < 0x20000000) {
    FUN_020380d0();
    return;
  }
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


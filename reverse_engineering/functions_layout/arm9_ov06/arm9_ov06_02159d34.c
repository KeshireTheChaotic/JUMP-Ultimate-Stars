
void FUN_02159d34(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))();
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined1 *)(param_1 + 0x19) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined2 *)(param_1 + 0x16) = 0;
  return;
}


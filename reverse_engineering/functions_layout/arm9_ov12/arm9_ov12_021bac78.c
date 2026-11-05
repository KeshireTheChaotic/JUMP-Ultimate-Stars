
void FUN_021bac78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  *(undefined1 *)(param_1 + 0xa3) = 1;
  *(undefined1 *)(param_1 + 0xa8) = 1;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)(param_1 + 100) = param_2;
  *(undefined1 *)(param_1 + 0xa1) = 0xff;
  thunk_FUN_0207400c(param_1 + 0xaa,param_3,param_3,param_4,param_4);
  *(undefined4 *)(param_1 + 0x68) = param_4;
  *(undefined4 *)(param_1 + 0x6c) = param_5;
  *(undefined4 *)(param_1 + 0x70) = param_6;
  *(undefined4 *)(param_1 + 0x74) = param_7;
  *(undefined4 *)(param_1 + 0x78) = param_8;
  *(undefined4 *)(param_1 + 0x7c) = param_9;
  return;
}


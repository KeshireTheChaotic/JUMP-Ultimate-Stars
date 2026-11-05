
undefined4 FUN_02153c70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(int *)(param_1 + 4) =
       *(int *)(*(int *)(param_1 + 0xc) + 0x28) - *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  *(int *)(param_1 + 8) =
       *(int *)(*(int *)(param_1 + 0xc) + 0x2c) - *(int *)(*(int *)(param_1 + 0xc) + 0x24);
  *(undefined1 *)(param_1 + 0x10) = 0;
  return 1;
}


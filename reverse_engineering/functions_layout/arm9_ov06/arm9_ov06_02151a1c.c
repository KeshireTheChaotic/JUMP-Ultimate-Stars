
void FUN_02151a1c(int param_1,undefined1 param_2,undefined4 param_3,byte param_4)

{
  *(undefined4 *)(*(int *)(DAT_02172960 + 0xdc) + 0xc0) = param_3;
  *(byte *)(*(int *)(DAT_02172960 + 0xdc) + 0xde) =
       *(byte *)(*(int *)(DAT_02172960 + 0xdc) + 0xde) | param_4;
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return;
}


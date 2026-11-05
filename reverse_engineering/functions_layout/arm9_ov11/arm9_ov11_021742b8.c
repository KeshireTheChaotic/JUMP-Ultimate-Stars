
void FUN_021742b8(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  uVar1 = param_1 + 0xa8;
  do {
    *(undefined4 *)(uVar1 + 4) = 0;
    *(undefined4 *)(uVar1 + 8) = 0;
    *(undefined4 *)(uVar1 + 0xc) = 0;
    *(undefined4 *)(uVar1 + 0x10) = 0;
    uVar1 = uVar1 + 0x10c;
  } while (uVar1 < param_1 + 0x4d8U);
  uVar1 = param_1 + 0x19d8;
  do {
    *(undefined4 *)(uVar1 + 8) = 0;
    uVar1 = uVar1 + 0xc;
  } while (uVar1 < param_1 + 0x1fd8U);
  return;
}


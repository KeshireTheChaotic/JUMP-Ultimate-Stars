
undefined4 FUN_0218a714(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0xc) != 4) {
    return 0;
  }
  FUN_0218ad84();
  *(undefined4 *)(param_1 + 0xc) = 5;
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = param_2[1];
    *(undefined4 *)(param_1 + 0x28) = *param_2;
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = param_2[3];
    *(undefined4 *)(param_1 + 0x30) = param_2[2];
    *(undefined4 *)(param_1 + 0x34) = uVar1;
  }
  return 1;
}


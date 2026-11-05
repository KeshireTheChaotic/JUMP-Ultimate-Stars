
void FUN_0205c078(int param_1)

{
  if (DAT_020adf08 == 0) {
    FUN_0205e2cc(&DAT_020adf0c,0);
    DAT_020adf08 = 1;
  }
  *(code **)(param_1 + 8) = FUN_0205bb2c;
  *(int *)(param_1 + 0xc) = param_1;
  *(code **)(param_1 + 0x14) = FUN_0205babc;
  *(int *)(param_1 + 0x18) = param_1;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffe;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) & 0xfffffffd;
  return;
}


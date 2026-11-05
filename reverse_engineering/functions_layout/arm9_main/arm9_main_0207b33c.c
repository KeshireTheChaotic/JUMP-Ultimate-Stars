
void FUN_0207b33c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int local_18;
  int local_14;
  
  FUN_0201899c(&local_18);
  *(undefined4 *)(param_1 + 0x18) = param_2;
  FUN_0207afdc(param_2,&local_18);
  *(short *)(param_1 + 0x38) = (short)((int)(local_18 + ((uint)(local_18 >> 0xb) >> 0x14)) >> 0xc);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0x38);
  *(short *)(param_1 + 0x3a) = (short)((int)(local_14 + ((uint)(local_14 >> 0xb) >> 0x14)) >> 0xc);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_1 + 0x3a);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x3a);
  for (puVar1 = *(undefined4 **)(param_1 + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    puVar1[2] = param_2;
  }
  return;
}


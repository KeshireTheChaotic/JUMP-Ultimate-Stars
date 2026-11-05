
int FUN_0205e8d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_0205e2fc(param_1,0x45585048,param_1 + 0x38,param_2,param_3);
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(ushort *)(param_1 + 0x36) = *(ushort *)(param_1 + 0x36) & 0xfffe;
  local_14 = *(undefined4 *)(param_1 + 0x18);
  local_10 = *(undefined4 *)(param_1 + 0x1c);
  uVar1 = FUN_0205e954(&local_14,0x4652);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}



void FUN_020198f8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined2 uVar1;
  int local_20 [3];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 *puStack_c;
  
  local_20[1] = 0x1000;
  local_20[2] = *param_4;
  local_14 = *param_3;
  local_10 = *param_2;
  puStack_c = param_4;
  uVar1 = FUN_02019970(&local_10,&local_14,local_20 + 2,local_20 + 1);
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  FUN_020199f8(local_20,param_5,0x437f0000);
  *(short *)(param_1 + 0x12) =
       (short)((int)(local_20[0] + ((uint)(local_20[0] >> 0xb) >> 0x14)) >> 0xc);
  return;
}



void FUN_02019a28(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_18 = 0x1000;
  local_14 = *param_4;
  local_10 = *param_3;
  local_c = *param_2;
  uVar1 = FUN_02019970(&local_c,&local_10,&local_14,&local_18);
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}


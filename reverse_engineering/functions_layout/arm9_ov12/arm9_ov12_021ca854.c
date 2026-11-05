
void FUN_021ca854(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined2 uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  undefined4 *puStack_c;
  
  local_2c = *param_5;
  local_28 = *param_4;
  local_24 = *param_3;
  local_20 = *param_2;
  puStack_c = param_4;
  FUN_021c9a84(auStack_1c,&local_20,&local_24,&local_28,&local_2c);
  uVar1 = FUN_021c997c(auStack_1c);
  *(undefined2 *)(param_1 + 0x170) = uVar1;
  return;
}


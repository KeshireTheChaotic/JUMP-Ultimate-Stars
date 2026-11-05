
undefined4 FUN_0218c278(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  undefined4 *local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  
  local_a8 = &local_a4;
  local_a4 = param_2;
  local_a0 = param_3;
  puVar1 = (undefined4 *)FUN_020014e4(*(undefined4 *)(param_1 + 0xc),&local_a8);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  return *puVar1;
}


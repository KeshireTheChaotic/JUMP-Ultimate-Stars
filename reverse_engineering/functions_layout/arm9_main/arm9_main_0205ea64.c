
undefined4 FUN_0205ea64(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  puVar1 = (undefined4 *)FUN_0205ec6c(param_1 + 0x24,0x10,4);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *puVar1 = param_2;
  puVar1[1] = uVar2;
  puVar1[2] = *(undefined4 *)(param_1 + 0x28);
  puVar1[3] = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 **)(param_1 + 0x2c) = puVar1;
  return 1;
}


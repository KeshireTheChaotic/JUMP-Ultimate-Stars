
void FUN_0203944c(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_02093e34;
    puVar1[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x24) = puVar1;
  return;
}


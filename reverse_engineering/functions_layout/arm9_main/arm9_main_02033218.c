
void FUN_02033218(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_02093e04;
    puVar1[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  return;
}



void FUN_02031520(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x244) = 0;
  for (puVar1 = *(undefined4 **)(param_1 + 0x23c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_020314f0(puVar1 + -8,0);
  }
  return;
}


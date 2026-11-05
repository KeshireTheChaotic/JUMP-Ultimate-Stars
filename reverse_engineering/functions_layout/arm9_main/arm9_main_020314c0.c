
void FUN_020314c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x244) = param_2;
  for (puVar1 = *(undefined4 **)(param_1 + 0x23c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_020314f0(puVar1 + -8,1);
  }
  return;
}



undefined4 * FUN_020237fc(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x5c);
  for (uVar2 = 0; uVar2 < param_2; uVar2 = uVar2 + 1) {
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + -0x12;
}



void FUN_02029c40(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &jus_Class_02093f04::vftable;
    puVar1[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}


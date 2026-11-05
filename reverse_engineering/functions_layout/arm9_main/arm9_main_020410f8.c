
void FUN_020410f8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(8);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095380::jus_Class_02095380(puVar1,param_1);
    *puVar1 = &jus_TagSPDS::vftable;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}


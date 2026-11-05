
undefined4 * FUN_0204a1f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095c74::jus_Class_02095c74(puVar1,param_1,param_2);
    *puVar1 = &jus_Class_02095d50::vftable;
  }
  return puVar1;
}


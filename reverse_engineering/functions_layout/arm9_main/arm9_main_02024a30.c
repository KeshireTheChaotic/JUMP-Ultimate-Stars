
undefined4 * FUN_02024a30(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,1);
    *puVar1 = &jus_Class_020959a4::vftable;
  }
  return puVar1;
}


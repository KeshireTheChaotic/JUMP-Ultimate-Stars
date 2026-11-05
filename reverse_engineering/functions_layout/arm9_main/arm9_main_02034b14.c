
undefined4 * FUN_02034b14(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)jus_AllocDebug(0x78);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,0);
    *puVar1 = &jus_Class_0209b410::vftable;
    puVar1[0x17] = 0;
    puVar1[0x19] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    *(undefined1 *)(puVar1 + 0x1d) = 1;
    *(undefined1 *)((int)puVar1 + 0x75) = 1;
  }
  return puVar1;
}


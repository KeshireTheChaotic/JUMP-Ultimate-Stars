
undefined4 * FUN_02034b98(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,0);
    *puVar1 = &jus_Class_02095c74::vftable;
    FUN_02034bf4(puVar1 + 0x10);
    *(undefined1 *)(puVar1 + 0x12) = 0;
    *(undefined1 *)((int)puVar1 + 0x49) = 0;
    *(undefined2 *)((int)puVar1 + 0x4a) = 0;
    *(undefined2 *)(puVar1 + 0x13) = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
  }
  return puVar1;
}



undefined4 * FUN_0204aaf0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095a08::jus_Class_02095a08(puVar1,param_1,param_2);
    *puVar1 = &jus_Class_02095c74::vftable;
    FUN_02034bf4(puVar1 + 0x10);
    *(undefined1 *)(puVar1 + 0x12) = *(undefined1 *)(param_1 + 0x48);
    *(undefined1 *)((int)puVar1 + 0x49) = *(undefined1 *)(param_1 + 0x49);
    *(undefined2 *)((int)puVar1 + 0x4a) = *(undefined2 *)(param_1 + 0x4a);
    *(undefined2 *)(puVar1 + 0x13) = *(undefined2 *)(param_1 + 0x4c);
    FUN_0203f1f8(puVar1 + 0x10,param_1 + 0x40);
  }
  return puVar1;
}


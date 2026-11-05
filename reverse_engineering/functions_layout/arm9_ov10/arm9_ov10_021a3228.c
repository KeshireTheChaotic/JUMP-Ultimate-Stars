
void FUN_021a3228(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_021abd8c;
  if (DAT_021abd8c != (undefined4 *)0x0) {
    *DAT_021abd8c = param_1;
    *(undefined1 *)(puVar1 + 2) = param_2;
    *(undefined1 *)((int)puVar1 + 9) = param_3;
  }
  return;
}


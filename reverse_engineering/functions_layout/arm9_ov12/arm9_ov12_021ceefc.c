
undefined4 FUN_021ceefc(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if ((*(char *)(param_1 + 4) == -1) && (*(char *)(param_1 + 6) == '\x04')) {
    return 0;
  }
  puVar1 = (undefined4 *)FUN_021cf138(*(undefined1 *)(param_1 + 8));
  if (puVar1 == (undefined4 *)0x0) {
    FUN_021cf398(&DAT_021d66f8,*(undefined1 *)(param_1 + 8));
    FUN_021cf488(&DAT_021d66f8,2);
    return 0;
  }
  *param_2 = 2;
  param_2[1] = puVar1;
  *puVar1 = 0;
  FUN_021cf488();
  return 1;
}



void FUN_021cf398(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0x18;
  puVar2 = param_1;
  do {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *param_1 = DAT_021d7bf0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = param_2;
  return;
}


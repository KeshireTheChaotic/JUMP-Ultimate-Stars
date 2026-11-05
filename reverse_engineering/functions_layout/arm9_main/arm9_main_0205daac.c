
void FUN_0205daac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0205c614(param_2);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_0205c3bc(*puVar1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_0205dfec(iVar2,param_3);
  if (iVar2 == 0) {
    return;
  }
  FUN_0205d8ec(param_1,*(undefined1 *)(iVar2 + 9),*(undefined2 *)(iVar2 + 4),
               *(undefined1 *)(iVar2 + 8));
  return;
}


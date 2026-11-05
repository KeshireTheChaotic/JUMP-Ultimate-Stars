
void FUN_02067378(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_020673ec(1);
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  uVar1 = FUN_02067394();
  *(undefined1 *)(iVar2 + 10) = uVar1;
  return;
}



void FUN_0217e6ec(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_0217e970();
  *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1e);
  sVar1 = *(short *)(iVar2 + 0x22);
  if (((sVar1 == 2) || (sVar1 == 3)) || (sVar1 == 4)) {
    FUN_0217cfa0(param_1,sVar1,param_2);
  }
  return;
}


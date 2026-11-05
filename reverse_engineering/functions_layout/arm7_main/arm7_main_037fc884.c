
void FUN_037fc884(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = DAT_038082e0; (iVar2 != 0 && (iVar2 != param_1)); iVar2 = *(int *)(iVar2 + 0x4c)) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0) {
    DAT_038082e0 = *(int *)(param_1 + 0x4c);
  }
  else {
    *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  }
  return;
}


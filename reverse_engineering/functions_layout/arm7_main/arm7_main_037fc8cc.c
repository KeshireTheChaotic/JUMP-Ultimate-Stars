
void FUN_037fc8cc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = DAT_038082e0; (iVar2 != 0 && (*(uint *)(iVar2 + 0x54) < *(uint *)(param_1 + 0x54)));
      iVar2 = *(int *)(iVar2 + 0x4c)) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x4c) = DAT_038082e0;
    DAT_038082e0 = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(int *)(iVar1 + 0x4c) = param_1;
  }
  return;
}


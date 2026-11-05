
void FUN_020537d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = DAT_020aab7c; (iVar2 != 0 && (*(uint *)(iVar2 + 0x70) < *(uint *)(param_1 + 0x70)));
      iVar2 = *(int *)(iVar2 + 0x68)) {
    iVar1 = iVar2;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x68) = DAT_020aab7c;
    DAT_020aab7c = param_1;
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
    *(int *)(iVar1 + 0x68) = param_1;
  }
  return;
}


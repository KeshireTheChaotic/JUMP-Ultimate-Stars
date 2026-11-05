
void FUN_0205378c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_020aab7c;
  iVar3 = 0;
  while ((iVar2 = iVar1, iVar2 != 0 && (iVar2 != param_1))) {
    iVar3 = iVar2;
    iVar1 = *(int *)(iVar2 + 0x68);
  }
  if (iVar3 == 0) {
    DAT_020aab7c = *(int *)(param_1 + 0x68);
  }
  else {
    *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  }
  return;
}


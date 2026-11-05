
void FUN_021a0470(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_0219b4bc();
  FUN_02051890(&DAT_021a36dc + iVar2,param_1 + 0x34,4);
  iVar2 = thunk_FUN_02176714();
  if (iVar2 < 2) {
    cVar1 = *(char *)(param_1 + 0x36);
  }
  else {
    cVar1 = thunk_FUN_02176714();
    cVar1 = *(char *)(param_1 + 0x36) * (cVar1 + -1);
  }
  *(char *)(param_1 + 0x34) = cVar1;
  *(undefined1 *)(param_1 + 0x8cc) = 0;
  return;
}


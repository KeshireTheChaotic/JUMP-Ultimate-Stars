
void FUN_02156a84(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_02156944(param_2);
  if (iVar1 != 0) {
    FUN_021568dc(param_2[1],1);
  }
  if (param_2[4] == 3) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156b74;
    return;
  }
  iVar1 = FUN_02156b10(param_2);
  if (iVar1 != 0) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156984;
    return;
  }
  iVar1 = param_2[4];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_2[10];
  }
  if (bVar2 && iVar1 == 0) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156984;
  }
  return;
}


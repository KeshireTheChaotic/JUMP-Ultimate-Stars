
void FUN_02156984(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_02156944(param_2);
  if (iVar1 != 0) {
    FUN_021568dc(param_2[1],0);
  }
  if (*(char *)(param_1 + 0x21e) != '\0') {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156cd4;
    return;
  }
  iVar1 = param_2[4];
  if (iVar1 == 1) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156a24;
    return;
  }
  if (iVar1 == 3) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156b74;
    return;
  }
  if (iVar1 == 2) {
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156a84;
  }
  return;
}


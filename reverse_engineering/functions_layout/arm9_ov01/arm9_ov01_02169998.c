
void FUN_02169998(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x34) == '\0') {
    FUN_02169670(iVar1);
  }
  FUN_02169684();
  FUN_02169b38(iVar1);
  FUN_021699c4(param_1);
  return;
}


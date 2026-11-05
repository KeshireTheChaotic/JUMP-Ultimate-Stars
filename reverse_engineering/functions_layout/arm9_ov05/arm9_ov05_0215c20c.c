
void FUN_0215c20c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x4ee) != '\0') {
    FUN_0215c260(iVar1,0,0,0);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 0x30) + 4),&LAB_0215bfc4);
  }
  (**(code **)(iVar1 + 0x4b4))(iVar1);
  FUN_02073840();
  return;
}



void FUN_0215d3b4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    FUN_0215d53c(param_1);
    *(undefined1 *)(param_1 + 0x1ec) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1a4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x30) != -1)) {
    *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + 1;
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_02159d7c(param_1,2);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_02159d7c(param_1,0);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215dcac(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215e9a0(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215db50(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215d860(param_1);
  if (iVar1 != 0) {
    return;
  }
  FUN_0215d6f8(param_1);
  FUN_0215fc78(param_1 + 0x130,7);
  if (*(char *)(param_1 + 0x1e6) == '\0') {
    return;
  }
  iVar1 = FUN_0215d4fc(*(undefined4 *)(param_1 + 0x1a0));
  if (iVar1 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x1e6) == '\x01') {
    *(undefined1 *)(param_1 + 0x1e6) = 2;
    FUN_02157450(param_1,8);
    return;
  }
  *(undefined1 *)(param_1 + 0x1e6) = 0;
  FUN_02157450(param_1);
  return;
}



void FUN_02069568(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_30 [13];
  undefined1 auStack_23 [23];
  
  iVar1 = FUN_02069c44(param_2);
  if (iVar1 == 3) {
    FUN_02069c1c(param_2);
    return;
  }
  iVar1 = FUN_02069c44(param_2);
  if (iVar1 == 2) {
    uVar2 = FUN_02069c98(param_2);
    FUN_02069ad8((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),auStack_30);
    return;
  }
  iVar1 = FUN_02069c44(param_2);
  if (iVar1 == 1) {
    FUN_02069a2c(param_2,*(undefined4 *)(param_1 + 0x24),auStack_23);
  }
  return;
}



void FUN_0215ceec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = param_1 + 0x234;
  uStack_24 = param_4;
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 0x4d4); iVar3 = iVar3 + 1) {
    FUN_0215ced4(&local_28,*(undefined4 *)(iVar2 + 4));
    FUN_0215b71c(local_28);
    iVar1 = FUN_0215b6f4();
    FUN_02029c68(*(undefined4 *)(iVar1 + 4),iVar2 + 8,1,0xf);
    iVar2 = iVar2 + 0x28;
  }
  *(undefined **)(param_1 + 0x4b4) = &DAT_0215ce14;
  return;
}


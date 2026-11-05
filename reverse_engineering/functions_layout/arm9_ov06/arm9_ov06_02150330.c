
void FUN_02150330(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0214fdb4();
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    iVar3 = param_1 + iVar1 * 4;
    iVar2 = (int)(char)(&DAT_020afee6)[iVar1];
    *(int *)(iVar3 + 0x5c) = iVar2;
    *(int *)(iVar3 + 0x4c) = iVar2;
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
    }
  }
  return;
}


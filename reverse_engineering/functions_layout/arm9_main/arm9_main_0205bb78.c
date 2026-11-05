
void FUN_0205bb78(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0200d338(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  iVar2 = *(int *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x38);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      (&DAT_020adf18)[iVar4] =
           *(int *)(&DAT_020adf58 + (uint)*(byte *)(param_1 + iVar4 + 0x4c) * 8) + iVar1 * iVar3;
      iVar2 = *(int *)(param_1 + 0x48);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  (**(code **)(param_1 + 0x30))
            (param_2,iVar2,&DAT_020adf18,iVar1,*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x34));
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  if (*(int *)(param_1 + 0x2c) <= *(int *)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


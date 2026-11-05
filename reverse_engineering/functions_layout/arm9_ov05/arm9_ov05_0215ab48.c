
void FUN_0215ab48(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar1 + 0x10);
  iVar3 = *(int *)(iVar1 + 0x124);
  if ((param_2 & 8) != 0) {
    uVar2 = FUN_0215a7c8(iVar4,(&DAT_0216fc4c)[iVar3]);
    *param_3 = uVar2;
    return;
  }
  if ((param_2 & 1) == 0) {
    return;
  }
  if (iVar3 == 0) {
    iVar1 = *(int *)(iVar4 + 0xc);
  }
  if (iVar3 == 0 && iVar1 == 0) {
    FUN_02159afc(iVar4,1,iVar3,param_4,param_4);
    *param_3 = *(undefined4 *)(iVar4 + 0x5c);
    return;
  }
  return;
}



void FUN_02159840(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar3 + 0x124) & 0xefffffff;
  iVar4 = *(int *)(iVar3 + 0x10);
  if ((param_2 & 8) != 0) {
    uVar1 = FUN_0215a7c8(iVar4,(&DAT_0216fc3c)[uVar2]);
    *param_3 = uVar1;
    FUN_02159afc(iVar4,0);
    return;
  }
  if ((param_2 & 2) == 0) {
    return;
  }
  if (uVar2 == 3) {
    uVar1 = *(undefined4 *)(iVar4 + 0x8c);
    *param_3 = uVar1;
    FUN_02159afc(iVar4,0,uVar1,iVar3,param_4);
    return;
  }
  return;
}


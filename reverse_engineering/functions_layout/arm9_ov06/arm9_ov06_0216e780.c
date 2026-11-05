
int FUN_0216e780(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_20 [2];
  int local_18;
  
  iVar3 = *param_2;
  uVar1 = FUN_02083ab8();
  uVar1 = FUN_0207d328(uVar1,iVar3 + -0x800,param_2[1] + -0x100);
  iVar2 = FUN_02083760(uVar1,local_20);
  if (iVar2 == -1 || iVar2 == 0xb) {
    uVar1 = FUN_02083ab8();
    uVar1 = FUN_0207d328(uVar1,*param_2,param_2[1] + -0x100);
    iVar2 = FUN_02083760(uVar1,local_20);
  }
  if ((iVar2 != -1) && (iVar2 = FUN_020836dc(), iVar2 != 0)) {
    if (local_20[0] < *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x5c) + 0xc)) {
      iVar3 = local_20[0] + local_18 + 0x800;
    }
    else {
      iVar3 = local_20[0] + -0x800;
    }
  }
  return iVar3;
}


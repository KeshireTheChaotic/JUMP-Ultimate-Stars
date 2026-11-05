
void FUN_02154788(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar3 + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    uVar4 = *(undefined4 *)(iVar1 + 0x20);
  }
  FUN_021551d0(iVar3,iVar3 + 0x3c,0x5f002c,0,0xffffffdb,0xfffffff6,3,uVar2,param_4);
  FUN_021551d0(iVar3,iVar3 + 0x48,0x5f002c,1,0x1b,0xfffffff6,3,uVar4);
  FUN_021550c8(iVar3);
  FUN_021548bc(iVar3);
  return;
}


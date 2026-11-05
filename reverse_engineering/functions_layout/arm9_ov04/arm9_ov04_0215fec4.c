
void FUN_0215fec4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar1 = FUN_02153368(*(undefined4 *)(param_1 + 0xdc));
  FUN_0215ecc8(*(undefined4 *)(param_1 + 0xe4));
  iVar2 = FUN_0215ef8c(*(undefined4 *)(param_1 + 0xfc),iVar1);
  if (iVar2 == 0) {
    FUN_02157488(*(undefined4 *)(param_1 + 0xcc));
    FUN_021555e8(*(undefined4 *)(param_1 + 0xc0),1);
    FUN_0207342c(0x7c,3);
    for (iVar2 = 0; iVar5 = FUN_0214f72c(), iVar2 < iVar5; iVar2 = iVar2 + 1) {
      FUN_02158488(*(undefined4 *)(param_1 + 0xd4),iVar2);
      FUN_02158440(*(undefined4 *)(param_1 + 0xd4),iVar2);
    }
    FUN_0215570c(*(undefined4 *)(param_1 + 0xc4),iVar1);
    FUN_02155790(*(undefined4 *)(param_1 + 0xc4),1);
    FUN_0215446c(*(undefined4 *)(param_1 + 0xe0),iVar1);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_02160198);
    return;
  }
  uVar3 = FUN_0214f704();
  iVar2 = FUN_0215f0dc(*(undefined4 *)(param_1 + 0xfc),uVar3);
  if (iVar1 == iVar2) {
    FUN_02157458();
    FUN_0207342c(0x7c,2);
  }
  else {
    FUN_02157488(*(undefined4 *)(param_1 + 0xcc));
    FUN_0207342c(0x7c,3);
  }
  FUN_0215efc0(*(undefined4 *)(param_1 + 0xfc),iVar1);
  for (iVar2 = 0; iVar5 = FUN_0214f72c(), iVar2 < iVar5; iVar2 = iVar2 + 1) {
    iVar5 = FUN_0215f0dc(*(undefined4 *)(param_1 + 0xfc),iVar2);
    if (iVar1 == iVar5) {
      iVar5 = FUN_0215f0f4(*(undefined4 *)(param_1 + 0xfc),iVar2);
      FUN_0214f7e0(iVar2,(&DAT_021605b8)[iVar5]);
      FUN_021583e8(*(undefined4 *)(param_1 + 0xd4),iVar2,2);
      uVar3 = FUN_0215f0f4(*(undefined4 *)(param_1 + 0xfc),iVar2);
      uVar4 = FUN_0215f0e8(*(undefined4 *)(param_1 + 0xfc),iVar2);
      FUN_02158350(*(undefined4 *)(param_1 + 0xd4),iVar2,uVar3,uVar4);
    }
    else {
      FUN_02158488(*(undefined4 *)(param_1 + 0xd4),iVar2);
      FUN_02158440(*(undefined4 *)(param_1 + 0xd4),iVar2);
    }
  }
  iVar2 = 0;
  do {
    iVar5 = FUN_0215ef8c(*(undefined4 *)(param_1 + 0xfc),iVar2);
    if (iVar5 != 0) {
      FUN_021544f0(*(undefined4 *)(param_1 + 0xe0),iVar2);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  uVar3 = FUN_0214f704();
  iVar2 = FUN_0215f0dc(*(undefined4 *)(param_1 + 0xfc),uVar3);
  if (iVar1 == iVar2) {
    FUN_02154400(*(undefined4 *)(param_1 + 0xe0));
  }
  else {
    FUN_0215570c(*(undefined4 *)(param_1 + 0xc4),iVar1);
    FUN_02155790(*(undefined4 *)(param_1 + 0xc4),1);
    FUN_0215446c(*(undefined4 *)(param_1 + 0xe0),iVar1);
  }
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),&LAB_0216011c);
  return;
}


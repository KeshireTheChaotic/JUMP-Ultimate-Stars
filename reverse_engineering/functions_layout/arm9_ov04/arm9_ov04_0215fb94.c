
void FUN_0215fb94(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02153368(*(undefined4 *)(iVar4 + 0xdc));
  sVar1 = FUN_0200d12c(*(short *)(iVar4 + 0xf4) * 100,0x3c);
  for (iVar5 = 0; iVar2 = FUN_0214f72c(), iVar5 < iVar2; iVar5 = iVar5 + 1) {
    iVar2 = FUN_0215f0dc(*(undefined4 *)(iVar4 + 0xfc),iVar5);
    if ((iVar2 < 0) && (iVar2 = FUN_021543ac(*(undefined4 *)(iVar4 + 0xe0),iVar5), iVar2 != 0)) {
      uVar3 = FUN_021543dc(*(undefined4 *)(iVar4 + 0xe0),iVar5);
      FUN_0215ef48(*(undefined4 *)(iVar4 + 0xfc),iVar5,(int)(char)uVar3,999 - sVar1);
      FUN_02158408(*(undefined4 *)(iVar4 + 0xd4),iVar5);
      FUN_0215ec14(*(undefined4 *)(iVar4 + 0xe4),iVar5,uVar3);
      iVar2 = FUN_0214f704();
      if (iVar5 == iVar2) {
        FUN_0215570c(*(undefined4 *)(iVar4 + 0xc4),uVar3);
        FUN_02155790(*(undefined4 *)(iVar4 + 0xc4),1);
        FUN_0215ee78(*(undefined4 *)(iVar4 + 0xe8));
      }
    }
  }
  iVar5 = FUN_0215ef58(*(undefined4 *)(iVar4 + 0xfc));
  if (iVar5 != 0) {
    FUN_0215e95c(*(undefined4 *)(iVar4 + 0xd0));
    FUN_0215eea0(*(undefined4 *)(iVar4 + 0xe8));
    FUN_021555e8(*(undefined4 *)(iVar4 + 0xc0),1);
    FUN_0215fb50(iVar4);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 0xec) + 4),FUN_0216024c);
    FUN_02155008(*(undefined4 *)(iVar4 + 0xb8));
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021601c0);
    return;
  }
  if (*(char *)(iVar4 + 0xf6) == '\0') {
    return;
  }
  FUN_02157428(*(undefined4 *)(iVar4 + 0xcc));
  FUN_0207342c(0x7c,5);
  FUN_021555e8(*(undefined4 *)(iVar4 + 0xc0),1);
  FUN_0215fb50(iVar4);
  for (iVar5 = 0; iVar2 = FUN_0214f72c(), iVar5 < iVar2; iVar5 = iVar5 + 1) {
    iVar2 = FUN_0215f0dc(*(undefined4 *)(iVar4 + 0xfc),iVar5);
    if (iVar2 < 0) {
      FUN_02158488(*(undefined4 *)(iVar4 + 0xd4),iVar5);
      FUN_02158440(*(undefined4 *)(iVar4 + 0xd4),iVar5);
    }
  }
  FUN_0215eea0(*(undefined4 *)(iVar4 + 0xe8));
  uVar3 = FUN_0214f704();
  iVar5 = FUN_0215f0dc(*(undefined4 *)(iVar4 + 0xfc),uVar3);
  if (iVar5 < 0) {
    FUN_0215570c(*(undefined4 *)(iVar4 + 0xc4),0xffffffff);
    FUN_02155790(*(undefined4 *)(iVar4 + 0xc4),1);
  }
  FUN_02028384(*(undefined4 *)(*(int *)(iVar4 + 0xec) + 4),FUN_0216024c);
  FUN_02155008(*(undefined4 *)(iVar4 + 0xb8));
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021601e8);
  return;
}


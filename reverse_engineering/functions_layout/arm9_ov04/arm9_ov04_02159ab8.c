
void FUN_02159ab8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_02153368(*(undefined4 *)(iVar5 + 0xd8));
  iVar2 = FUN_021543ac(*(undefined4 *)(iVar5 + 0xdc),0xffffffff);
  if (iVar2 == 0) {
    if (*(char *)(iVar5 + 0xea) != '\0') {
      FUN_02157428(*(undefined4 *)(iVar5 + 0xcc));
      FUN_0207342c(0x7c,5);
      FUN_021555e8(*(undefined4 *)(iVar5 + 0xc0),1);
      FUN_0215570c(*(undefined4 *)(iVar5 + 0xc4),uVar1);
      FUN_02155790(*(undefined4 *)(iVar5 + 0xc4),1);
      FUN_0215446c(*(undefined4 *)(iVar5 + 0xdc),uVar1);
      FUN_02028384(*(undefined4 *)(*(int *)(iVar5 + 0xe0) + 4),FUN_0215a030);
      FUN_02155008(*(undefined4 *)(iVar5 + 0xb8));
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02159ea8);
      return;
    }
    iVar2 = **(int **)(iVar5 + 0x10);
    if ((*(uint *)(iVar2 + *(int *)(iVar2 + 0x70) * 4 + 0x18) &
         ~*(uint *)(iVar2 + *(int *)(iVar2 + 0x74) * 4 + 0x18) & 0x8000) == 0) {
      return;
    }
    FUN_0214ce64();
    iVar2 = FUN_0214cea0();
    if (iVar2 == 2) {
      return;
    }
    FUN_021574b8(*(undefined4 *)(iVar5 + 0xcc));
    FUN_021555e8(*(undefined4 *)(iVar5 + 0xc0),1);
    FUN_0215432c(*(undefined4 *)(iVar5 + 0xdc));
    FUN_02153b6c(*(undefined4 *)(iVar5 + 0xd4),0);
    FUN_02155790(*(undefined4 *)(iVar5 + 0xc4),0);
    FUN_0207342c(0x7c,3);
    FUN_02157b48(*(undefined4 *)(iVar5 + 0xd0));
    FUN_02028384(*(undefined4 *)(*(int *)(iVar5 + 0xe0) + 4),FUN_0215a030);
    FUN_02155008(*(undefined4 *)(iVar5 + 0xb8));
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02159f38);
    return;
  }
  uVar3 = FUN_021543dc(*(undefined4 *)(iVar5 + 0xdc),0xffffffff);
  FUN_0215570c(*(undefined4 *)(iVar5 + 0xc4),uVar3);
  FUN_02155790(*(undefined4 *)(iVar5 + 0xc4),1);
  FUN_02157b10(*(undefined4 *)(iVar5 + 0xd0));
  FUN_02028384(*(undefined4 *)(*(int *)(iVar5 + 0xe0) + 4),FUN_0215a030);
  FUN_02155008(*(undefined4 *)(iVar5 + 0xb8));
  FUN_02159900(0x1e);
  FUN_0214ce64();
  iVar2 = FUN_0214cea0();
  if (iVar2 == 2) {
    iVar2 = FUN_0214f5f4();
    iVar4 = FUN_0214f5c8();
    if (iVar2 == iVar4 + -1) {
      iVar2 = 1;
      goto LAB_02159b70;
    }
  }
  iVar2 = FUN_02153340(*(undefined4 *)(iVar5 + 0xd8),uVar3);
LAB_02159b70:
  if (iVar2 == 0) {
    FUN_02157488(*(undefined4 *)(iVar5 + 0xcc));
    FUN_021555e8(*(undefined4 *)(iVar5 + 0xc0),1);
    FUN_0207342c(0x7c,3);
    FUN_02157b48(*(undefined4 *)(iVar5 + 0xd0));
    FUN_0215570c(*(undefined4 *)(iVar5 + 0xc4),uVar1);
    FUN_02154448(*(undefined4 *)(iVar5 + 0xdc));
    FUN_021544f0(*(undefined4 *)(iVar5 + 0xdc),uVar3,1);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02159e80);
    return;
  }
  FUN_02157458();
  FUN_021555e8(*(undefined4 *)(iVar5 + 0xc0),1);
  FUN_0207342c(0x7c,2);
  FUN_02157a74(*(undefined4 *)(iVar5 + 0xd0),2);
  FUN_0214f79c(1);
  uVar1 = FUN_0214f780();
  FUN_02157a44(*(undefined4 *)(iVar5 + 0xd0),uVar1);
  FUN_02154400(*(undefined4 *)(iVar5 + 0xdc));
  FUN_021544f0(*(undefined4 *)(iVar5 + 0xdc),uVar3,2);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02159e58);
  return;
}


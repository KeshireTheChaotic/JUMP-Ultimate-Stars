
void FUN_02153108(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  
  DAT_0217296d = 0;
  DAT_0217296c = 0;
  iVar6 = param_1 * 0xc;
  DAT_02172970 = 0;
  iVar1 = FUN_0214d934(DAT_020a0e80);
  FUN_020314a0(*(undefined4 *)(DAT_02172974 + 4));
  piVar2 = (int *)FUN_02010238();
  thunk_FUN_02010254(piVar2,*(undefined4 *)(&DAT_0217104c + iVar6),0);
  iVar3 = FUN_0203b404();
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x88) + 4);
  FUN_021532f4();
  DAT_020a0dd0 = uVar7;
  piVar4 = (int *)FUN_02035e88(*(undefined4 *)(&DAT_02171050 + iVar6));
  if (piVar4[0xe] == 0) {
    (**(code **)(*piVar4 + 0x14))();
  }
  iVar8 = piVar4[0xe];
  iVar3 = FUN_02153354(*(undefined4 *)(&DAT_02171050 + iVar6),(int)*(short *)(&DAT_02171054 + iVar6)
                       ,0x80,0x58);
  (**(code **)(**(int **)(iVar3 + 4) + 0xdc))(*(int **)(iVar3 + 4),0xffffffff);
  if (param_1 == 1) {
    FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_02153428);
    FUN_02027834(*(undefined4 *)(iVar3 + 4),1,FUN_02153454);
    FUN_0207342c(0x7a,5);
  }
  else {
    FUN_02028384(*(undefined4 *)(iVar3 + 4),FUN_021534ec);
    FUN_02027834(*(undefined4 *)(iVar3 + 4),1,FUN_02153550);
    if (*(short *)(&DAT_02171056 + iVar6) != -1) {
      FUN_0207342c(0x7a);
    }
  }
  if (param_1 != 2) {
    iVar3 = 0;
    do {
      iVar5 = FUN_02153354(*(undefined4 *)(&DAT_02171050 + iVar6),2,iVar3 * 0x48 + 0x100,0x20);
      FUN_02028384(*(undefined4 *)(iVar5 + 4),FUN_02153570);
      iVar5 = FUN_02153354(*(undefined4 *)(&DAT_02171050 + iVar6),2,(iVar3 + 1) * -0x48,0xa0);
      FUN_02028384(*(undefined4 *)(iVar5 + 4),FUN_021536d8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  FUN_02034d7c(iVar8);
  (**(code **)(*piVar2 + 0xc))();
  FUN_02153324();
  FUN_020314a0(*(undefined4 *)(iVar1 + 4));
  return;
}


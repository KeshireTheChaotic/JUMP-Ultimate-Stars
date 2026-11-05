
int FUN_02166fd4(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int extraout_r1;
  int iVar8;
  int local_54;
  char local_50 [2];
  short local_4e [3];
  byte abStack_48 [32];
  int iStack_28;
  
  if ((*(uint *)(param_1 + 0x3c) & 2) == 0) {
    iStack_28 = param_4;
    iVar3 = FUN_02161bac(param_1);
    iVar4 = FUN_02161bac(param_1,param_2,param_5);
    iVar5 = FUN_02161bac(param_1,param_4,param_3);
    local_4e[2] = -1;
    local_4e[1] = 0xffff;
    local_4e[0] = -1;
    local_50[0] = '\0';
    iVar2 = iVar3;
    while (iVar8 = iVar2, iVar8 <= iVar4) {
      FUN_02167740(param_1,iVar8,iVar8 + (iVar5 - iVar3),local_4e + 2,local_4e + 1,param_6,
                   abStack_48,local_50,local_4e);
      local_54 = iVar8;
      iVar2 = iVar8 + *(short *)(*(int *)(param_1 + 0x10) + 4) * 4;
    }
    if (local_54 != iVar4) {
      FUN_02167740(param_1,iVar4,iVar4 + (iVar5 - iVar3),local_4e + 2,local_4e + 1,param_6,
                   abStack_48,local_50,local_4e);
    }
    cVar1 = local_50[0];
    if (local_50[0] != '\0') {
      uVar6 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar6,cVar1);
      iVar5 = (uint)abStack_48[extraout_r1] * 0x34 + *(int *)(param_1 + 0x1c);
      iVar2 = *(short *)(iVar5 + 0x18) * 0x18;
      iVar4 = *(int *)(*(int *)(param_1 + 0x18) + iVar2);
      iVar2 = *(int *)(param_1 + 0x18) + iVar2;
      iVar3 = iVar4 + *(int *)(iVar2 + 8);
      if (param_2 <= iVar4) {
        param_2 = iVar4;
      }
      if (iVar3 <= param_4) {
        param_4 = iVar3;
      }
      iVar3 = *(int *)(iVar2 + 4);
      iVar2 = iVar3 + *(int *)(iVar2 + 0xc);
      if (param_3 <= iVar3) {
        param_3 = iVar3;
      }
      if (iVar2 <= param_5) {
        param_5 = iVar2;
      }
      iVar2 = FUN_0215b3e0(param_4 - param_2);
      iVar3 = FUN_0215b3e0(param_5 - param_3);
      iVar2 = FUN_0206c7fc(0x210012,param_2 + iVar2 >> 8,param_3 + iVar3 >> 8,0);
      *(int *)(iVar5 + 0x14) = iVar2;
      FUN_02027834(*(undefined4 *)(iVar2 + 4),1,&LAB_02167f0c);
      piVar7 = *(int **)(*(int *)(iVar5 + 0x14) + 4);
      (**(code **)(*piVar7 + 0x24))(piVar7,iVar5);
    }
    if (local_4e[0] != -1) {
      FUN_0207342c(0x7a);
    }
    iVar2 = (int)local_4e[2];
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}


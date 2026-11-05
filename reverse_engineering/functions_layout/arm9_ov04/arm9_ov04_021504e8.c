
void FUN_021504e8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int iVar8;
  int iVar9;
  int local_30 [5];
  
  cVar1 = *(char *)(param_1 + 0x1a);
  iVar3 = param_2 * 2;
  iVar8 = *(int *)(*(int *)(param_1 + 8) + param_2 * 8);
  local_30[4] = param_4;
  if (cVar1 == '\x01') {
    iVar9 = (int)*(short *)(param_1 + 0x1e);
    iVar4 = FUN_0200d12c(iVar9 * param_3,100);
    FUN_02150360(param_1,iVar8,(iVar4 + -iVar9 / 2) - iVar9);
    FUN_0200d12c(*(char *)(*(int *)(param_1 + 0x10) + param_2) + 1,10);
    FUN_02023894(*(undefined4 *)(iVar8 + 4),
                 *(uint *)(param_1 + 0x38) | *(int *)(param_1 + 0x3c) + extraout_r1,0);
    (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
    local_30[3] = 0x1000;
    FUN_021504cc(iVar8,local_30 + 3);
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    sVar2 = *(short *)(param_1 + 0x1e);
    iVar8 = *(int *)(*(int *)(param_1 + 8) + (iVar3 + 1) * 4);
    iVar3 = FUN_0200d12c(sVar2 * param_3,100);
    FUN_02150360(param_1,iVar8,iVar3 + -(int)sVar2 / 2);
    FUN_02023894(*(undefined4 *)(iVar8 + 4),
                 *(uint *)(param_1 + 0x38) |
                 *(int *)(param_1 + 0x3c) + (int)*(char *)(*(int *)(param_1 + 0x10) + param_2),0);
    (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
    local_30[2] = 0x1000;
    FUN_021504cc(iVar8,local_30 + 2);
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
  }
  else if (cVar1 == '\x02') {
    FUN_02150360(param_1,iVar8,-(int)*(short *)(param_1 + 0x1e) / 2);
    FUN_0200d12c(*(char *)(*(int *)(param_1 + 0x10) + param_2) + 1,10);
    FUN_02023894(*(undefined4 *)(iVar8 + 4),
                 *(uint *)(param_1 + 0x38) | *(int *)(param_1 + 0x3c) + extraout_r1_00,0);
    (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    local_30[1] = 0x1000;
    FUN_021504cc(iVar8,local_30 + 1);
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 8) + (iVar3 + 1) * 4) + 4);
    (**(code **)(*piVar7 + 0xd8))(piVar7,0);
  }
  else if (cVar1 == '\x03') {
    FUN_02150360(param_1,iVar8,-(int)*(short *)(param_1 + 0x1e) / 2);
    FUN_0200d12c(*(char *)(*(int *)(param_1 + 0x10) + param_2) + 1,10);
    FUN_02023894(*(undefined4 *)(iVar8 + 4),
                 *(uint *)(param_1 + 0x38) | *(int *)(param_1 + 0x3c) + extraout_r1_01,0);
    (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
    (**(code **)(**(int **)(iVar8 + 4) + 0xd8))(*(int **)(iVar8 + 4),1);
    iVar4 = FUN_0200d12c(param_3 << 0xe,100);
    uVar5 = FUN_0200c954(iVar4 << 1);
    uVar5 = FUN_0200c9e4(0x40490fdb,uVar5);
    uVar5 = FUN_0200c5ac(uVar5,0x47800000);
    FUN_0200c9e4(0x45800000,uVar5);
    FUN_0200c8e0();
    uVar5 = FUN_0200c954();
    FUN_0200c5ac(uVar5,0x45800000);
    FUN_0200c85c();
    FUN_02009838();
    uVar5 = FUN_0200b6c4();
    FUN_0200c9e4(0x45800000,uVar5);
    uVar6 = FUN_0200c8e0();
    local_30[0] = ((uVar6 & 0x1fffff) >> 1 | (((int)uVar6 >> 0x1f) << 0xb | uVar6 >> 0x15) << 0x14)
                  + 0x1000;
    FUN_020235dc(*(undefined4 *)(iVar8 + 4),local_30);
    piVar7 = *(int **)(*(int *)(*(int *)(param_1 + 8) + (iVar3 + 1) * 4) + 4);
    (**(code **)(*piVar7 + 0xd8))(piVar7,0);
  }
  return;
}


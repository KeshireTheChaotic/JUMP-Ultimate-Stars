
void FUN_02155294(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_30;
  int local_2c [4];
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar3 = (int)*(short *)(iVar5 + 0x1a);
  if (*(short *)(iVar5 + 0x18) != iVar3) {
    local_2c[3] = param_4;
    if (iVar3 < 400) {
      FUN_0200d12c(iVar3,100);
      iVar6 = FUN_0200d12c(extraout_r1 << 0xe,100);
      uVar1 = FUN_0200c954(iVar6 << 1);
      uVar1 = FUN_0200c9e4(0x40490fdb,uVar1);
      uVar1 = FUN_0200c5ac(uVar1,0x47800000);
      FUN_0200c9e4(0x45800000,uVar1);
      FUN_0200c8e0();
      uVar1 = FUN_0200c954();
      FUN_0200c5ac(uVar1,0x45800000);
      FUN_0200c85c();
      FUN_02009c54();
      uVar1 = FUN_0200b6c4();
      FUN_0200c9e4(0x45800000,uVar1);
      uVar2 = FUN_0200c8e0();
      iVar6 = ((uVar2 & 0x1fffff) >> 1 | (((int)uVar2 >> 0x1f) << 0xb | uVar2 >> 0x15) << 0x14) +
              0x1000;
    }
    else {
      iVar6 = 0x1000;
    }
    local_2c[0] = FUN_0200d12c(iVar3,100);
    FUN_0200d12c(iVar3,100);
    local_2c[1] = FUN_0200d12c(extraout_r1_00,10);
    FUN_0200d12c(extraout_r1_00,10);
    iVar3 = 0;
    local_2c[2] = extraout_r1_01;
    do {
      iVar4 = *(int *)(iVar5 + iVar3 * 4 + 0xc);
      FUN_02023894(*(undefined4 *)(iVar4 + 4),local_2c[iVar3] + 0xeU | 0x810000,0);
      (**(code **)(**(int **)(*(int *)(iVar4 + 4) + 0x68) + 0x6c))();
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    local_30 = iVar6;
    FUN_020235dc(*(undefined4 *)(*(int *)(iVar5 + 0xc) + 4),&local_30);
    *(undefined2 *)(iVar5 + 0x18) = *(undefined2 *)(iVar5 + 0x1a);
  }
  return;
}


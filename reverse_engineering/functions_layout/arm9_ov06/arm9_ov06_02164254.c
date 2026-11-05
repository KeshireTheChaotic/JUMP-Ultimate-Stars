
void FUN_02164254(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  
  cVar1 = *(char *)((int)param_1 + 0x12);
  if (cVar1 == '\0') {
    iVar5 = param_1[4];
    *(short *)(param_1 + 4) = (short)iVar5 + -1;
    if ((short)iVar5 == 0) {
      FUN_0216383c(param_1,2);
      *(undefined1 *)((int)param_1 + 0x12) = 1;
      *(undefined2 *)(param_1 + 4) = 0;
    }
    iVar5 = FUN_02163d18(*param_1);
    if (iVar5 != 0) {
      FUN_0216383c(param_1,7);
      *(undefined1 *)((int)param_1 + 0x12) = 2;
      *(undefined2 *)(param_1 + 4) = 0x78;
    }
  }
  else if (cVar1 == '\x01') {
    iVar5 = param_1[4];
    *(short *)(param_1 + 4) = (short)iVar5 + 1;
    if ((short)iVar5 == 0x10) {
      iVar5 = FUN_021644a8(*param_1);
      iVar2 = *(int *)(param_1[1] + 8);
      iVar3 = *(int *)(param_1[1] + 4);
      if (iVar5 == 0) {
        iVar3 = iVar3 + 0x1500;
      }
      else {
        iVar3 = iVar3 + -0x1500;
      }
      uVar6 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
      FUN_0200d338(uVar6,3);
      DAT_0217251c = *(undefined2 *)(&DAT_02171588 + extraout_r1 * 2);
      FUN_0216ab58(*(undefined4 *)(param_1[2] + 0xc),&DAT_02172518,iVar5,iVar3,iVar2 + -0x2800,0xb,0
                   ,0,0xffffffff,0,0);
      iVar2 = param_1[1];
      iVar2 = FUN_0206c7fc(*(byte *)(iVar2 + 0xd) + 0x401204,*(int *)(iVar2 + 4) >> 8,
                           *(int *)(iVar2 + 8) >> 8,0);
      piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar4 + 0x5c))(piVar4,iVar5);
      iVar2 = param_1[1];
      iVar2 = FUN_0206c7fc(*(byte *)(iVar2 + 0xd) + 0x401203,*(int *)(iVar2 + 4) >> 8,
                           *(int *)(iVar2 + 8) >> 8,0);
      piVar4 = *(int **)(*(int *)(iVar2 + 4) + 100);
      (**(code **)(*piVar4 + 0x5c))(piVar4,iVar5);
      FUN_0207342c(0x7a,0x4e);
    }
    iVar5 = FUN_02163bc8(*(undefined4 *)(*param_1 + 0xc),0);
    if (iVar5 != 0) {
      FUN_0216383c(param_1,0);
      *(undefined1 *)((int)param_1 + 0x12) = 0;
      *(undefined2 *)(param_1 + 4) = 0xb4;
    }
  }
  else if ((cVar1 == '\x02') &&
          (iVar5 = param_1[4], *(short *)(param_1 + 4) = (short)iVar5 + -1, (short)iVar5 == 0)) {
    iVar5 = FUN_021644a8(*param_1);
    FUN_0216383c(param_1,0);
    uVar6 = extraout_r1_00;
    if (iVar5 == 0) {
      uVar6 = 1;
    }
    if (iVar5 != 0) {
      uVar6 = 0;
    }
    FUN_02083950(*param_1,uVar6);
    *(undefined1 *)((int)param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 4) = 0x3c;
  }
  return;
}


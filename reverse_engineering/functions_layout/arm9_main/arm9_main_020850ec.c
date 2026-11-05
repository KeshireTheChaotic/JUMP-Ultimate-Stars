
void FUN_020850ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  psVar7 = *(short **)(iVar5 + 0xc);
  piVar6 = *(int **)(iVar5 + 0x10);
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x40) + 4) + 0x50);
  sVar1 = *psVar7;
  iVar4 = *(int *)(iVar2 + 0xc);
  iVar3 = *(int *)(iVar2 + 0x10);
  uStack_20 = param_4;
  FUN_02084e7c(&local_24,*(undefined4 *)(iVar5 + 8));
  iVar2 = -(iVar4 + -0x80000);
  if (iVar2 < local_24 + sVar1 * 0x1000) {
    piVar6[1] = (int)psVar7[4] << 0xc;
  }
  else {
    sVar1 = psVar7[2];
    FUN_02084e7c(&local_28,*(undefined4 *)(iVar5 + 8));
    if (local_28 + sVar1 * 0x1000 < iVar2) {
      piVar6[1] = (int)psVar7[6] << 0xc;
    }
    else {
      sVar1 = *psVar7;
      FUN_02084e7c(&local_34,*(undefined4 *)(iVar5 + 8));
      local_30 = iVar2 - (local_34 + sVar1 * 0x1000);
      FUN_020852f4(&local_2c,(int)psVar7[6] - (int)psVar7[4],&local_30);
      iVar2 = FUN_0200d12c((int)(local_2c + ((uint)(local_2c >> 0xb) >> 0x14)) >> 0xc,
                           (int)psVar7[2] - (int)*psVar7);
      piVar6[1] = (psVar7[4] + iVar2) * 0x1000;
    }
  }
  sVar1 = psVar7[1];
  FUN_02084e90(&local_38,*(undefined4 *)(iVar5 + 8));
  iVar2 = -(iVar3 + -0x60000);
  if (iVar2 < local_38 + sVar1 * 0x1000) {
    piVar6[2] = ((int)psVar7[5] + *piVar6) * 0x1000;
  }
  else {
    sVar1 = psVar7[3];
    FUN_02084e90(&local_3c,*(undefined4 *)(iVar5 + 8));
    if (local_3c + sVar1 * 0x1000 < iVar2) {
      piVar6[2] = ((int)psVar7[7] + *piVar6) * 0x1000;
    }
    else {
      sVar1 = psVar7[1];
      FUN_02084e90(&local_48,*(undefined4 *)(iVar5 + 8));
      local_44 = iVar2 - (local_48 + sVar1 * 0x1000);
      FUN_020852f4(&local_40,(int)psVar7[7] - (int)psVar7[5],&local_44);
      iVar2 = FUN_0200d12c((int)(local_40 + ((uint)(local_40 >> 0xb) >> 0x14)) >> 0xc,
                           (int)psVar7[3] - (int)psVar7[1]);
      piVar6[2] = (iVar2 + (int)psVar7[5] + *piVar6) * 0x1000;
    }
  }
  return;
}


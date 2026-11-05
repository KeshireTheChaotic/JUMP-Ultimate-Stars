
void FUN_0203d784(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  short *psVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  FUN_0203c360(param_2 + 0x18,param_3,param_3,param_4,param_4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x4b4) + 8);
  uVar1 = FUN_0201d4c4(*(undefined4 *)(iVar4 + 0x20));
  FUN_02017004(param_1 + 0xa1c,uVar1);
  iVar4 = *(int *)(iVar4 + 8);
  uVar5 = 1;
  while (uVar5 < *(uint *)(param_1 + 0x8bc)) {
    psVar2 = (short *)FUN_0201d4c4(*(undefined4 *)(iVar4 + 0x20));
    uVar5 = uVar5 + 1;
    sVar3 = *(short *)(param_1 + 0xa1c);
    if (*psVar2 <= *(short *)(param_1 + 0xa1c)) {
      sVar3 = *psVar2;
    }
    *(short *)(param_1 + 0xa1c) = sVar3;
    sVar3 = *(short *)(param_1 + 0xa1e);
    if (psVar2[1] <= *(short *)(param_1 + 0xa1e)) {
      sVar3 = psVar2[1];
    }
    *(short *)(param_1 + 0xa1e) = sVar3;
    sVar3 = *(short *)(param_1 + 0xa20);
    if (*(short *)(param_1 + 0xa20) <= psVar2[2]) {
      sVar3 = psVar2[2];
    }
    *(short *)(param_1 + 0xa20) = sVar3;
    sVar3 = *(short *)(param_1 + 0xa22);
    if (*(short *)(param_1 + 0xa22) <= psVar2[3]) {
      sVar3 = psVar2[3];
    }
    *(short *)(param_1 + 0xa22) = sVar3;
    iVar4 = *(int *)(iVar4 + 8);
  }
  return;
}


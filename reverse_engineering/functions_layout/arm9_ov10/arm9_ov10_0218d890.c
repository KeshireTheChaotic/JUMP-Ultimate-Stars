
void FUN_0218d890(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint extraout_r1_03;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int local_120;
  byte local_118 [260];
  
  iVar1 = 0;
  pbVar2 = local_118;
  do {
    *pbVar2 = (byte)iVar1;
    pbVar2 = pbVar2 + 1;
    iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
  } while (iVar1 < 0x100);
  uVar3 = 0;
  uVar4 = 0;
  local_120 = 0;
  pbVar2 = local_118;
  do {
    FUN_0200d12c(uVar4 + (uint)*pbVar2 + (uint)*(byte *)(param_1 + uVar3),0x100);
    uVar4 = extraout_r1 & 0xff;
    FUN_0200d12c(uVar3 + 1,param_2);
    uVar3 = extraout_r1_00 & 0xff;
    FUN_0218da30(pbVar2,local_118 + uVar4);
    pbVar2 = pbVar2 + 1;
    local_120 = (local_120 + 1) * 0x10000 >> 0x10;
  } while (local_120 < 0x100);
  uVar3 = 0;
  uVar4 = 0;
  iVar1 = 0;
  if (0 < param_4) {
    do {
      FUN_0200d12c(uVar3 + *(byte *)(param_3 + iVar1) + 1,0x100);
      uVar3 = extraout_r1_01 & 0xff;
      FUN_0200d12c(local_118[uVar3] + uVar4,0x100);
      uVar4 = extraout_r1_02 & 0xff;
      FUN_0218da30(local_118 + uVar3,local_118 + uVar4);
      FUN_0200d12c((uint)local_118[uVar3] + (uint)local_118[uVar4],0x100);
      *(byte *)(param_3 + iVar1) = *(byte *)(param_3 + iVar1) ^ local_118[extraout_r1_03 & 0xff];
      iVar1 = (iVar1 + 1) * 0x10000 >> 0x10;
    } while (iVar1 < param_4);
  }
  return;
}


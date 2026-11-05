
void FUN_0200f4dc(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar7 = *(byte **)(param_2 + 4);
  bVar5 = *pbVar7;
  bVar2 = bVar5 & 0x40;
  bVar3 = bVar5 & 0x40;
  *(bool *)(param_1 + 0x6b) = (bVar5 & 0x40) != 0;
  bVar1 = bVar5 & 0x20;
  bVar4 = bVar5 & 0x80;
  bVar8 = (bVar5 & 0x80) != 0;
  if (bVar8) {
    bVar5 = 1;
  }
  *(bool *)(param_1 + 0x6a) = bVar1 != 0;
  if (!bVar8) {
    bVar5 = 0;
  }
  *(byte *)(param_1 + 0x6c) = bVar5;
  *(ushort *)(param_1 + 0x68) = (ushort)pbVar7[1] << 4;
  *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) | 0x4000;
  uVar6 = FUN_0200d9cc(pbVar7 + 2,param_1 + 0x60);
  if (bVar2 != 0) {
    FUN_0200d9cc(uVar6,param_1 + 100);
  }
  if (bVar3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x14);
    return;
  }
  if (bVar4 == 0) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x38);
  }
  return;
}


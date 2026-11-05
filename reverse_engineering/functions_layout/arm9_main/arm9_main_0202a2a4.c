
uint FUN_0202a2a4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x24);
  uVar4 = (uVar2 & 0xf) >> 3;
  FUN_0202a34c(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,param_4,param_4);
  for (iVar3 = *(int *)(param_1 + 0x1c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
    if ((*(byte *)(iVar3 + 0x25) & 0xf) >> 3 != 0) {
      iVar1 = FUN_0202a2a4(iVar3,param_2 != 0 || (uVar2 & 0xf) >> 3 != 0);
      if (uVar4 == 0 && iVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
    }
  }
  *(byte *)(param_1 + 0x25) = *(byte *)(param_1 + 0x25) & 0xf7 | (byte)(uVar4 << 3);
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xef;
  *(undefined4 *)(param_1 + 8) = DAT_02093be8;
  return uVar4;
}


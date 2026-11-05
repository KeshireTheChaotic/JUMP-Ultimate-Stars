
int FUN_02063b6c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = *(byte *)(param_1 + uVar3) - 0x41;
      uVar1 = *(byte *)(param_2 + uVar3) - 0x41;
      if (uVar2 < 0x1a) {
        uVar2 = *(byte *)(param_1 + uVar3) - 0x21;
      }
      if (uVar1 < 0x1a) {
        uVar1 = *(byte *)(param_2 + uVar3) - 0x21;
      }
      if (uVar2 != uVar1) {
        return uVar2 - uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
  }
  return 0;
}


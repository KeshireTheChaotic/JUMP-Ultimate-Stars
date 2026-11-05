
void FUN_021cc01c(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = func_0x021766fc();
  if ((param_2 != uVar2) &&
     (uVar2 = 1 << (param_2 & 0xff), (*(byte *)(param_1 + 0x11) & uVar2) != 0)) {
    bVar1 = (byte)uVar2;
    if (param_3 != 0) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | bVar1;
      return;
    }
    *(byte *)(param_1 + 0x12) = ~bVar1 & *(byte *)(param_1 + 0x12);
  }
  return;
}



void FUN_0217329c(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  uVar1 = 0;
  do {
    if ((param_2 & 1 << (uVar1 & 0xff)) != 0) {
      if (param_3 == 0) {
        iVar2 = *(int *)(param_1 + 0x2c) + ((int)uVar1 >> 5) * 4;
        *(uint *)(iVar2 + 0x34) =
             *(uint *)(iVar2 + 0x34) & ~(1 << (uVar1 - (uVar1 & 0xffffffe0) & 0xff));
      }
      else {
        iVar2 = *(int *)(param_1 + 0x2c) + ((int)uVar1 >> 5) * 4;
        *(uint *)(iVar2 + 0x34) =
             *(uint *)(iVar2 + 0x34) | 1 << (uVar1 - (uVar1 & 0xffffffe0) & 0xff);
      }
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x16);
  FUN_0217aad4();
  return;
}



uint FUN_02067a54(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((*(short *)(param_1 + 10) != 0x20) || (uVar2 = FUN_02067aa8(), (int)uVar2 < 1)) {
    iVar4 = 0;
    if (0 < param_2) {
      uVar1 = *(ushort *)(param_1 + 10);
      do {
        if (((uVar1 & 0xff) == (ushort)*(byte *)(param_3 + 3)) &&
           (iVar3 = FUN_02004cec(param_1 + 0xc,param_3 + 4,uVar1), iVar3 == 0)) {
          return (uint)*(byte *)(param_3 + 1);
        }
        param_3 = param_3 + 0x24;
        iVar4 = iVar4 + 1;
      } while (iVar4 < param_2);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


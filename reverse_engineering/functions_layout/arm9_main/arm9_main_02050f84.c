
void FUN_02050f84(int param_1,ushort *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*param_2;
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      bVar1 = *param_3;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
      uVar2 = (uint)*(ushort *)(param_1 + ((uVar2 ^ bVar1) & 0xff) * 2) ^ uVar2 >> 8;
    } while (uVar3 < param_4);
  }
  *param_2 = (ushort)uVar2;
  return;
}


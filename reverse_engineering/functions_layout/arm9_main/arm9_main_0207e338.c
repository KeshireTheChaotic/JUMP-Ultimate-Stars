
uint FUN_0207e338(int param_1,uint param_2,undefined4 param_3)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  sVar1 = (short)param_2;
  switch(param_3) {
  case 0:
    return (uint)(*(char *)((param_2 & 0xff) + 0x2171548) != '\0');
  case 1:
    break;
  case 2:
    return (uint)(param_2 == 0xc);
  case 3:
    return (uint)(param_2 == 2);
  case 4:
    bVar2 = *(byte *)(sVar1 * 0x18 + *(int *)(*(int *)(param_1 + 0xf8) + 0x18) + 0x15);
    uVar3 = (uint)((bVar2 & 1) != 0);
    if ((bVar2 & 2) != 0) {
      uVar3 = uVar3 | 2;
    }
    return uVar3;
  case 5:
    return (uint)(*(char *)((param_2 & 0xff) + 0x2171538) != '\0');
  case 6:
    uVar3 = (uint)((param_2 & 1) != 0);
    if ((param_2 & 4) != 0) {
      uVar3 = uVar3 | 2;
    }
    if ((param_2 & 8) != 0) {
      uVar3 = uVar3 | 4;
    }
    if ((param_2 & 2) != 0) {
      uVar3 = uVar3 | 8;
    }
    return uVar3;
  case 7:
    uVar3 = func_0x02162dc4(*(undefined4 *)(param_1 + 0xf8),(int)sVar1);
    iVar4 = func_0x02162e0c(*(undefined4 *)(param_1 + 0xf8),(int)sVar1);
    return uVar3 & 0xffff | iVar4 << 0x10;
  case 8:
    return (uint)(*(char *)(*(short *)(sVar1 * 0x18 + *(int *)(*(int *)(param_1 + 0xf8) + 0x18) +
                                      0x16) * 0x34 + *(int *)(*(int *)(param_1 + 0xf8) + 0x1c) +
                           0x2c) == '\x03');
  default:
    return 0;
  }
  if ((param_2 == 0xc) || (*(char *)((param_2 & 0xff) + 0x2171558) != '\0')) {
    return 1;
  }
  return 0;
}


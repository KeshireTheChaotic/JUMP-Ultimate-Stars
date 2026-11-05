
bool FUN_021597d0(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (short)param_3 * 0x4dc + param_2 + 0x20;
  cVar1 = *(char *)(iVar3 + 0x4d2);
  *(char *)(iVar3 + 0x4d2) = cVar1 + '\x01';
  if (0x10 < (byte)(cVar1 + 1U)) {
    *(undefined1 *)(iVar3 + 0x4d2) = 0x10;
  }
  if (param_3 == 1) {
    FUN_0215790c();
    iVar2 = FUN_0203b3f4();
    FUN_0214e2d8(*(undefined4 *)(iVar2 + 0x88),1,0x1e);
    iVar2 = FUN_0203b3f4();
    FUN_021597b4(*(undefined4 *)(iVar2 + 0x88),(uint)*(byte *)(iVar3 + 0x4d2),
                 0x10 - (uint)*(byte *)(iVar3 + 0x4d2));
    FUN_0214d6e8();
    return *(char *)(iVar3 + 0x4d2) != '\x10';
  }
  return false;
}



void FUN_02014ae0(int *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 4);
  bVar2 = 0;
  if ((((char)*(byte *)(param_1 + 4) < '\0') && ((uVar3 & 0x3f) >> 5 != 0)) &&
     (((uVar3 & 3) >> 1 != 0 || ((uVar3 & 0xf) >> 3 == 0)))) {
    if (((*(byte *)(param_1 + 4) & 7) >> 2 != 0) || ((*(byte *)(param_1 + 4) & 0x1f) >> 4 == 0)) {
      bVar2 = 1;
    }
  }
  bVar1 = *(byte *)((int)param_1 + 0x11);
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    if (bVar2 != (bVar1 & 1)) {
      if (bVar2 == 0) {
        *(byte *)((int)param_1 + 0x11) = bVar1 & 0xfe;
        (**(code **)(*param_1 + 0x14))(param_1,0);
      }
      else {
        *(byte *)((int)param_1 + 0x11) = bVar1 & 0xfe | 1;
        (**(code **)(*param_1 + 0x14))(param_1,1);
      }
    }
    FUN_020149c8(param_1);
    return;
  }
  if (bVar2 == (bVar1 & 1)) {
    return;
  }
  if (bVar2 == 0) {
    FUN_0201cdb4(param_1[0xd] + 0x8c,param_1);
    *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfe;
    (**(code **)(*param_1 + 0x14))(param_1,0);
  }
  else {
    FUN_0201cca0(param_1[0xd] + 0x8c);
    *(byte *)((int)param_1 + 0x11) = *(byte *)((int)param_1 + 0x11) & 0xfe | 1;
    (**(code **)(*param_1 + 0x14))(param_1,1);
  }
  FUN_020149c8(param_1);
  return;
}


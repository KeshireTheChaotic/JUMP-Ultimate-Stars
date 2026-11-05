
ushort FUN_037ff408(int param_1)

{
  ushort uVar1;
  int iVar2;
  short sVar3;
  
  iVar2 = -0x2d3;
  if ((-0x2d4 < param_1) && (iVar2 = param_1, 0 < param_1)) {
    iVar2 = 0;
  }
  uVar1 = SVC_GetVolumeTable(iVar2 + 0x2d3);
  if (iVar2 < -0xf0) {
    sVar3 = 3;
  }
  else if (iVar2 < -0x78) {
    sVar3 = 2;
  }
  else if (iVar2 < -0x3c) {
    sVar3 = 1;
  }
  else {
    sVar3 = 0;
  }
  return uVar1 | sVar3 << 8;
}

